#include<iostream>
 using namespace std;
   

void sumEvenOdd(int n){
    int Even=0;
    int  Odd=0;
    while (n>0){
     int digit =n%10;
       if(digit % 2 == 0){
         Even = Even + digit;
       }else{
        Odd= Odd +digit;
       }

n=n/10;



    }
    cout << "sum of even digit " <<  Even << endl;
    cout << "Sum of odd digit  "  << Odd << endl;

    
}



   int main(){
    
    int n;
    cout << "Enter your num:" ;
    cin>> n;
   
 sumEvenOdd( n);
return 0;

   }