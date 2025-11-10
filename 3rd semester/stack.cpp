#include<iostream>
using namespace std;

#define SIZE 5
 int stack[SIZE];
 int top = -1; 
 
 void push (int value){
     if (top == SIZE -1 ){
      cout<< "STACK OVERFLOW    " << endl;
         
     }else {
         top++;
         stack[top] = value;
         cout << value << " pushed into stack " << endl;
         
     }
 } 
 
 void pop(){
     if(top == -1 ){
         cout << "stack overflow  " << endl;
         
     }else {
         cout << "top element " << stack[top] << endl;
         
     }
 }
 
 
 void peek(){
     if(top == -1){
         cout <<" stack is empty " << endl;
         
     }else {
         cout << "top element :" << stack[top] << endl;
     }
 } 
 
 void display(){
     if(top == -1){
         cout << "stack is empty" << endl;
     }else {
         cout << "stack elements:";
         for ( int i= top; i >=0; i--){
             cout << stack[i] << " ";
         }
         cout << endl;
     }
 }
 
 int main() {
    push(10);
    push(20);
    push(30);
    display();

    pop();
    display();

    peek();

    push(40);
    push(50);
    push(60);  
    display();

    return 0;
}

 