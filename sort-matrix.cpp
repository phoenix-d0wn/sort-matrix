#include <iostream>
#include <vector>
using namespace std;

void sortMatrix(vector<vector<int>> &Matrix){
    int m = Matrix.size();
    if (m == 0){return;}
    int n = Matrix[0].size();

    for (int i = 0; i < m * n - 1; i++){
        for (int j = i + 1; j < m * n; j++){

            int row1 = i / n, col1 = i % n;
            int row2 = j / n, col2 = j % n;

            if (Matrix[row1][col1] > Matrix[row2][col2]){
                swap(Matrix[row1][col1], Matrix[row2][col2]);
            }
        }
    }
}


int main(){
    //unsorted 2D matrix
    vector<vector<int>> matrix = {{5, 4, 7, 1}, 
                                {11, 3, 8, 2}, 
                                {12, 9, 6, 0}};

    sortMatrix(matrix);

    for (const auto row : matrix){
        for (int x : row){
            cout << x << " ";
        }
        cout << endl;
    }


    return 0;
}