#include <iostream>
 using namespace std;
int main(){
    int arr[5] = {1,2,4,5,6};
    //prints the address insted of the 
    int arr2 [3][4]= {{1,2,4,5},{1,2,3,4},{4,5,6,7}};
    cout << sizeof(arr2);
    cout << arr << endl;
    for (int i = 0; i < sizeof(arr2)/ sizeof(arr2[0]); i++){
        for(int j = 0; j < sizeof(arr2[0]) / sizeof(arr2[0] [0]); j++){
            cout << arr2[i] [j];
        }
        cout << endl;
    }
    // get the size of the array
    cout << sizeof(arr) / sizeof(arr[0]) << endl ;
    //3d array 
    int arr3d [2][3][2] ={
        {
            {1,2},
            {3,4},
            {6,7},
        },
        {
            {8,9},
            {10,11},
            {12,13},
        }

    } ;
    // caluclate the length of the dimensions 
    int dim1 = sizeof(arr3d) / sizeof(arr3d[0]);
    int dim2 = sizeof(arr3d[0]) / sizeof(arr3d[0][0]);
    int dim3 = sizeof(arr3d[0][0])/ sizeof(arr3d[0][0][0]);
    for(int i =0; i< dim1; i++){
        for(int j =0; j< dim2; j++){
            for(int k =0; k < dim3; k++){
                cout << arr3d[i][j][k];
            }
            cout << endl;
        }
    }
    return 0;
}