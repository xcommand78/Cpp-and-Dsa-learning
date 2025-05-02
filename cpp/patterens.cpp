#include <iostream>
using namespace std;
 int main(){
    for(int i = 5; i>=1; i--){
      for (int j = i; j >= 1; j--)
      {
         cout << j;
   }
      cout  << endl;
    }
    // loop through the values of characters 
     for(int k =0; k <5; k++){
      char ch = 'A';
      for(int l =0; l<4; l++){
         cout << ch;
         ch = ch+1;
        
      }
      cout << endl;
     }
     //continues number print
     int m =0;
     for(int f= 0; f<3; f++){
         for(int d = 0 ; d<3; d++){
            m++;
            cout << m;
         }
         cout << endl;
     }
     //print number times there value eg 1 for 1 2 for 2 times etc
     int t= 3;
     int r = 0;
     for(int num =0; num<t; num++){
      r++;
       for(int j= 0; j<=num; j++){
          cout << r;
       }
       cout << endl;
     }
     
    return 0;
   
 }