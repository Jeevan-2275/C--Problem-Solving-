// #include <iostream>
// using namespace std;

// string concatenateManual(string str1, string str2) {
//     for (int i = 0; i < str2.length(); i++) { 
//                 str1 += str2[i]; 
//     }
//     return str1; 
// }

// int main() {
//     string str1 = "hello";  
//     string str2 = " world"; 
//     cout << "Concatenated String : " << concatenateManual(str1, str2) << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// string concatenateWith(string str1, string str2) {
//     return str1 + str2; 
// }
// int main() {
//     string str1 = "hello";
//     string str2 = " world";
//     cout << "Concatenated String : " << concatenateWith(str1, str2) << endl;
//     return 0;
// }



#include <iostream>
using namespace std;

string concatenateWithAppend(string str1, string str2) {
    str1.append(str2); 
        return str1; 
        }

int main() {
    string str1 = "hello";
    string str2 = " world";
    cout << "Concatenated String : " << concatenateWithAppend(str1, str2) << endl;
    return 0;
}