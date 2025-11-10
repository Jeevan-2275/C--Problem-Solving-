// #include <iostream> 
// using namespace std; 
// void categorizeAgeGroup(int age) {
//     if (age < 13) {
//         cout << "Child" << endl;  
//     }
//     else if (age >= 13 && age <= 19) {
//         cout << "Teenager" << endl; 
//     }
//     else if (age >= 20 && age <= 59) {
//         cout << "Adult" << endl;  
//     }
//     else if (age >= 60) {
//         cout << "Senior" << endl;  
//     }
//     else {
//         cout << "Invalid age" << endl;  
//     }
// }



#include <iostream> 
using namespace std; 
void categorizeAgeGroup(int age) {
    switch(age) {
        case 0:
            cout << "Child" << endl;  
            break;
        case 1:
            cout << "Teenager" << endl;  
            break;
        case 2:
            cout << "Adult" << endl;  
            break;
        case 3:
            cout << "Senior" << endl;         break;
        default:
            cout << "Invalid age" << endl;  
            break;
    }
}

int main() {
    int age;  
    cout << "Enter age: ";  
    cin >> age;  

    categorizeAgeGroup(age);  

    return 0;  
}


