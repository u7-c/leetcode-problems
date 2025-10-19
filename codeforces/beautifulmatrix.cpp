#include<iostream>
using namespace std;

int main(){
    int rowno;
    int columnnno;
    int matrix_val;
    for(int i = 1; i <= 5;i++){
        for(int j = 1; j <=5 ; j++){
            cin >> matrix_val;
            if(matrix_val == 1){
                rowno = i;
                columnnno = j;
            }
        }
    }
    int row_for_1 = abs(rowno - 3);
    int column_for_1 = abs(columnnno - 3);
    int totalmoves = row_for_1 + column_for_1;

    cout << totalmoves;
    return 0;
}