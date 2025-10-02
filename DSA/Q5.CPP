// CHECK if given string is palindrome using deque.




#include <iostream>
#include <deque>
using namespace std;


int main(){
  string str;
  cout << "Enter a String : ";
  cin >> str;

  deque<char> dq;

for (char ch:str){
    dq.push_back(ch);
}

bool isPalindrome = true;
while (dq.size() > 1){
    if(dq.front() != dq.back()){
        isPalindrome = false;
        break;
    }
    dq.pop_front();
    dq.pop_back();
}
if(isPalindrome){
    cout << "String is a Palindrome";
}else{
    cout << "String is not a Palindrome";
}
return 0;

}