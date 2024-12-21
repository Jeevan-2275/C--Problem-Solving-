
// Q.6
#include<iostream>
#include <string>
   using namespace std ;
   void  checkLogin(string UserName, string  UserPassword){
       string correctUserName ="Admin";
       string correctUserPassWord ="1234";
       if(UserName==correctUserName && UserPassword==correctUserPassWord){
           cout << "Login " << endl;           
       }else{
           cout << " Login Not" << endl;
       }
   }   
 int main() {  
string    UserName,  UserPassword;
 cout << "Enter Username:" << endl;
 cin >> UserName;
 cout << "Enter UserPassword:" << endl;
 cin >> UserPassword;
 checkLogin(UserName, UserPassword);
    return 0;
}
