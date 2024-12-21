
// Q.7
#include <iostream>
#include <string>
   using namespace std ;
   void  checkLogin(string LightColor){      
       if(LightColor =="red"){
           cout << "Stop " << endl;
           
       }else if (LightColor =="yellow"){
           cout << " slow" << endl;
       }else if(LightColor =="green"){
           cout << " go" << endl;           
       }else{
         cout << "invalid co" << endl;             
       }     
   }   
 int main() {  
string LightColor;
 cout << "Enter LightColor:" << endl;
 cin >> LightColor; 
checkLogin(LightColor);
    return 0;
}   
