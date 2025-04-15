#include <iostream>

using namespace std;
int main(){

    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    int matrix[100][100];
    int rowsum[100] = {0};
    int colsum[100] = {0};
    int totalsum = 0;

    cout << "input the elements of the matrix: " << endl;
    
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
          
            cin >> matrix[i][j];

            rowsum[i] += matrix[i][j];
            colsum[j] += matrix[i][j];
            totalsum += matrix[i][j];
        
        }
    }

    cout << "Sum of each row" << endl;
    for (int i = 0; i < rows; i++){
        cout << "Row " << i + 1 << ": " << rowsum[i] << endl;
    }

    cout << "Sum of each column" << endl;
    for (int j = 0; j < col; j++){
        cout << "Column " << j + 1 << ": " << colsum[j] << endl;
    }

    cout << "Total sum of all elements: " << totalsum << endl;
}