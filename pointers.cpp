#include <iostream>
using namespace std;
int main(){

    int a = 10;// value
    int * b = &a;// pointer 
    cout << b << endl << &a;/*it first print the value of pointer then the
     address of a which is same cause potiners just points but the address it
     always gets fetched with & operator and it is address opereator here*/

     //defrencing pointers
     int c =10;
     int *d = &c;
     cout << d << endl;// pointers value means address
     cout << *d;// this will print the vlaue of the variable  of the pointer address;

     //modify pointer
     int f = 10;
     int *ptr = &f;
     cout << "the pointer value" << *ptr << "the value of og varibale" << f << endl;
     // modify the pointer
     *ptr = 20;
     cout << "pointers value" << *ptr << "value of og varibale" << f;
    return 0;
}
