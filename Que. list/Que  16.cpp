
// 16
// #include <iostream>
// using namespace std;
// bool areaPosition(int arr[], int size){
//     for(int i=0;i<size;i++){
//         if(arr[i] <=0){
//             return false;
//         }
//     }
//     return true;
// }
// int main() {
//   int arr[]={1,2,3,4,5};
//   int size =sizeof(arr)/sizeof(arr[0]);
//   areaPosition(arr, size);
// if(areaPosition(arr,size)){
//     cout << "true" << endl;
// }else{
//     cout << "false" << endl;
// }
//     return 0;
// }



// #include <iostream>
// using namespace std;
// bool areaPosition(int arr[], int size){
//     bool allPositive = true;
//     for(int i=0;i<size;i++){
//         if(arr[i] <=0){
//        allPositive = false;
//        break;
//         }
//     }
//     return allPositive;
// }
// int main() {
//   int arr[]={1,2,3,4,5};
//   int size =sizeof(arr)/sizeof(arr[0]);
//   areaPosition(arr, size);
// if(areaPosition(arr,size)){
//     cout << "true" << endl;
// }else{
//     cout << "false" << endl;
// }
//     return 0;
// }


// #include <iostream>
// using namespace std;
// bool nonPositive(int num){
//     return num <=0;
// }
// bool areaPositive(int arr[], int size){
//     // bool allPositive = true;
//     for(int i=0;i<size;i++){
//         if(nonPositive(arr[i])){
//        return  false;
//         }
//     }
//     return true;
// }
// int main() {
//   int arr[]={3,5,9,1,7};
//   int size =sizeof(arr)/sizeof(arr[0]);
// //   areaPosition(arr, size);
// if(areaPositive(arr,size)){
//     cout << "true" << endl;
// }else{
//     cout << "false" << endl;
// }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// bool areaPositive(int arr[], int size){
//     for(int i=0;i<size;i++){
//         if(!(arr[i] <=0)){
//        return  false;
//         }
//     }
//     return true;
// }
// int main() {
//   int arr[]={3,5,9,1,7};
//   int size =sizeof(arr)/sizeof(arr[0]);
// if(areaPositive(arr,size)){
//     cout << "true" << endl;
// }else{
//     cout << "false" << endl;
// }
//     return 0;
// }

