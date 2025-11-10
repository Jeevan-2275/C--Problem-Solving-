
// Q.15
#include <iostream>
using namespace std;
void removeElement(int arr[],int size){
int newArr[size -1] ;
for(int i=0; i<size-1;i++){
    newArr[i]=arr[i];
}
for(int i=0; i<size-1;i++){
    cout << newArr[i] << " ";
}
}
int main() {
  int arr[]={1,2,3,4,5};
  int size =sizeof(arr)/sizeof(arr[0]);
  removeElement (arr, size);
    return 0;
}


// #include <iostream>
// using namespace std;
// void removeElement(int arr[],int size){
// if  (size > 0) {
//     int lastElement = arr[size-1];
//      arr[size-1]=0;
//      size--;
//     } 
// }
// int main() {
//   int arr[]={1,2,3,4,5};
//   int size =sizeof(arr)/sizeof(arr[0]);
//   removeElement (arr, size);
//   for(int i=0;i < size;i++){
//       cout << arr[i] << " ";
//   }
//     return 0;
// }

