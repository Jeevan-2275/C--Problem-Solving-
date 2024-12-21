// Q.12

// #include <iostream>
// using namespace std ;
// void elementEnd(int arr[], int& size, int newElement){
//    if(size <6){
//     arr[size] = newElement;
//     size++;
//     cout << "Updated Array :" ;
//     for(int i=0;i<size ;i++){
//         cout << arr[i] << " " ;
//    } }else {
//        cout << "Array is full, cannot add more elements!" << endl;

//     }}
   
//  int main() {
//     int arr[6]={1,2,3,4,5};
//         int size = 5;  
//    int newElement = 6;  

//     elementEnd(arr, size, newElement);
//     return 0;
// }

#include <iostream>
using namespace std;
int main() {
    int arr[6] = {1, 2, 3, 4, 5};
    int size = 5;  
    int newElement = 6; 
    if (size < 6) {
        arr[size] = newElement;
        size++;    
        cout << "Updated Array: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Array is full, cannot add more elements!" << endl;
    }
    return 0;
}
