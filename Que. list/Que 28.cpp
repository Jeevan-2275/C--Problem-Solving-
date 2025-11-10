// #include<iostream>
// using namespace std;
// void printlargeNum(int num1,int num2){
// cout << "The largest number is: "<< (num1>num2 ? num1:num2)<<endl;
// }
// int main(){
// int num1=10;
// int num2=20;
// printlargeNum(num1,num2);
// return 0;   
// }    

// #include<iostream>
// using namespace std;
// void printlargeNum(int num1,int num2){
// cout << "The largest number is: "<< max(num1, num2)<<endl;
// }
// int main(){
// int num1=10;
// int num2=20;
// printlargeNum(num1,num2);
// return 0;   
// }    



#include<iostream>
using namespace std;
void printlargeNum(int num1,int num2){
cout << "The largest number is: "<< min(num1, num2)<<endl;
}
int main(){
int num1=10;
int num2=20;
printlargeNum(num1,num2);
return 0;   
} 