// #include <iostream>
// using namespace std;
// int findLengthManual(string str) {
//     int count = 0; 
//     for (int i = 0; str[i] != '\0'; i++) { 
//         count++; }
//     return count; 
// }

// int main() {
//     string inputString = "Hello, World!";
//     cout << "Length : " << findLengthManual(inputString) << endl;
//     return 0;
// }

#include<iostream>
using namespace std;
int findlengthManual(string str){
    int  count=0;
  for(int i=0;i<str[i]!='\0';i++){
    count++;
  }
  return count;
}
int main(){
    string inputString="Hello, World!";
    cout <<"Length:" << findlengthManual(inputString) << endl;
    return 0;
}


// #include <iostream>
// using namespace std;

// int findLength(string str) {
//     return str.length();
//     }

// int main() {
//     string inputString = "Hello, World!";
//     cout << "Length : " << findLength(inputString) << endl;
//     return 0;
// }



// #include <iostream>
// #include <iterator> 
// using namespace std;

// int findLengthIterator(string str) {
//     return distance(str.begin(), str.end()); 
// }

// int main() {
//     string inputString = "Hello, World!";
//     cout << "Length : " << findLengthIterator(inputString) << endl;
//     return 0;
// }