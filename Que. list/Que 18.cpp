
// Q.18
// #include <iostream>
// using namespace std;
//  void  printEven(int arr[],int size){
//    cout << "[";
//    for(int i=0;i<size;i++){
//        if(i %2==0){
//            cout << arr[i];
//            if(i<size-2){
//                cout << " ,";
//            }
//        }
//    }
//    cout << "]" << endl;
// }
// int main() {
//   int arr[]={10,20,30,40,50};
//   int size =sizeof(arr)/sizeof(arr[0]);
//     printEven(arr, size);

//     return 0;
// }




#include <iostream>
using namespace std;
 void  printEven(int arr[],int size){
   cout << "[";
   for(int i=0;i<size;i=i+2){
       if(i %2==0){
           cout << arr[i];
           if(i<size-2){
               cout << " ,";
           }
       }
   }
   cout << "]" << endl;
}
int main() {
  int arr[]={10,20,30,40,50};
  int size =sizeof(arr)/sizeof(arr[0]);
    printEven(arr, size);
    return 0;
}

