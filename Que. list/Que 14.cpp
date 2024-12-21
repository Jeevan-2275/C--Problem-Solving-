
// #include <iostream>
// using namespace std ;
// void elementEnd(int arr[], int& size, int newElement){
//   for(int i=size ;i>0;i--){
//       arr[i]=arr[i-1];
//   }
//   arr[0]=newElement;
//   size++;
//   cout << "Updated Array:";
//   for(int i=0; i<size;i++){
//       cout << arr[i] << " ";
//   }
    
// }
   
//  int main() {
//     int arr[10]={1,2,3,4,5};
//         int size = 5;  
//    int newElement = 0;  

//     elementEnd(arr, size, newElement);
//     return 0;
// }

// with is_function

// #include <iostream>
// using namespace std;
// int main() {
//    int arr[10] = {1, 2, 3, 4, 5};
//     int size = 5;  
//     int newElement = 0;  
//     for (int i = size; i > 0; i--) {
//         arr[i] = arr[i - 1];
//     }
//     arr[0] = newElement;
//     size++;
//     cout << "Updated Array: ";
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

//Using vector Methode 
// #include <iostream>
// #include <vector>
// using namespace std;
// void addElement(vector<int>&nums,int newElement){
//     nums.insert(nums.begin(),newElement);
// cout << "Updated array: ";
// for (int num :nums){
//     cout << num  << " " ;
//    }  
//    cout << endl;
// }
// int main() {
//     vector<int> nums ={1,2,3,4};
//     int newElement = 0;
//     addElement( nums , newElement);
//     return 0;
// }

