#include <iostream>
#include <string>
using namespace std;
class Auth{
    public:
    int num = 1;
    public:
    void signUp(string name, string password){
         cout << name << password;
    }
};
int main(){
    Auth auth;
    auth.signUp("karan singh","123");
    // cout << auth.num;
    return 0;
}