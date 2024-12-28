// #include <iostream>
// using namespace std;

// string toUpperCase(string str) {
//     for (int i = 0; i < str.length(); i++) { 
//         if (str[i] >= 'a' && str[i] <= 'z') { 
//             str[i] = str[i] - 32; 
//         }
//     }
//     return str; 
// }
// int main() {
//     string input  = "hello"; 
//     cout << "Uppercase : " << toUpperCase << endl;
//     return 0;
// }




// #include<iostream>
// using namespace  std;
// int main(){
//         string input  = "hello"; 
//         string str = input;
//      for (int i = 0; i < str.length(); i++) { 
//         if (str[i] >= 'a' && str[i] <= 'z') { 
//             str[i] = str[i] - 32; 
//         }
//     }
//     cout << "Uppercase : "  << str << endl;
//     return 0;
// }


// #include <iostream>
// #include <cctype> 
// using namespace std;

// string toUpperCase(string str) {
//     for (int i = 0; i < str.length(); i++) {
//         str[i] = toupper(str[i]);
//     }
//     return str; 
// }

// int main() {
//     string input = "hello";
//     cout << "Uppercase (Using toupper): " << toUpperCase(input) << endl;
//     return 0;
// }



#include<iostream>
#include<algorithm>
#include<cctype>
using namespace std;
string toUpper(string str){
  transform(str.begin(),str.end(),str.begin(),::toupper);
  return str;
}
int main(){
    string input = "hello";
    cout << "Uppercase (Using toupper): " << toUpper(input) << endl;
    return 0;
}