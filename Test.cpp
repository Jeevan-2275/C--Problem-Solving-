// #include <iostream>
// #include <string>
// using namespace std ;
// double checkAverage(int arr[],int size){
//       int sum = 0;
//       for(int i=0;i<size;i++){
//           sum = sum+arr[i];
//       }
//       return  static_cast<double>(sum)/size;      
//    }   
//  int main() {
//      int arr[]={1,2,3,4,5};
//      int size= sizeof(arr)/sizeof(arr[0]);
//      double  Average = checkAverage( arr ,size);
//      cout << "The average of the array is: " << Average << endl;
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//      int arr[]={1,2,3,4,5};
//      int size= sizeof(arr)/sizeof(arr[0]);
//  int sum = 0;
//       for(int i=0;i<size;i++){
//           sum = sum+arr[i];
//       }

//       int Average  = sum/ size;
//      cout << "The average of the array is: " << Average << endl;




//     return 0;
// }

// Q.3

// #include <iostream>
// #include<algorithm>
// using namespace std;
// int findDifferent(int arr[], int size){
//     int maxElement = arr[0];
//     int minElement =arr[0];    
//     for(int i=1;i<size;i++){
//         if(arr[i] > maxElement){
//             maxElement= arr[i];
//         }    
//     }
//      for (int i = 1; i < size; i++) {
//         if (arr[i] < minElement) { 
//             minElement = arr[i];
//         }
//     }
//     return maxElement - minElement;    
    
// }
// int main() {
//   int arr[]={80,30,70,50,20};
//   int size =sizeof(arr)/sizeof(arr[0]);
 
//        cout << "Difference : "  << findDifferent(arr, size) << endl;
  
//     return 0;
// }



// #include <iostream>
// #include<algorithm>
// using namespace std;
// int findDifferent(int arr[], int size){
//     int maxElement = arr[0];
//     int minElement =arr[0];
    
//     for(int i=1;i<size;i++){
//         if(arr[i] > maxElement){
//             maxElement= arr[i];
//         }    
//        else  if (arr[i] < minElement) { 
//             minElement = arr[i];
//         }
//     }
//     return maxElement - minElement;    
// }
// int main() {
//   int arr[]={80,30,70,50,20};
//   int size =sizeof(arr)/sizeof(arr[0]); 
//        cout << "Difference : "  << findDifferent(arr, size) << endl;
//     return 0;
// }

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main() {
//   int arr[]={80,30,70,50,20};
//   int size =sizeof(arr)/sizeof(arr[0]);

//  int maxElement = arr[0];
//     int minElement =arr[0];
    
//     for(int i=1;i<size;i++){
//         if(arr[i] > maxElement){
//             maxElement= arr[i];
//         }
    
    
//        else  if (arr[i] < minElement) { 
//             minElement = arr[i];
//         }

//     }



//      return maxElement - minElement;    
// }




// #include <iostream>
// using namespace std;
// void removeElement(int arr[],int size){
// int newArr[size -1] ;
// for(int i=0; i<size-1;i++){
//     newArr[i]=arr[i];
// }
// for(int i=0; i<size-1;i++){
//     cout << newArr[i] << " ";
// }
// }
// int main() {
//   int arr[]={1,2,3,4,5};
//   int size =sizeof(arr)/sizeof(arr[0]);
//   removeElement (arr, size);
//     return 0;
// }


// #include <iostream>
// using namespace std;
// void removeElement(int arr[],int size){
// if  (size >= 0) {
//     int lastElement = arr[size-1];
//      arr[size-1]=0;
//      size--;
//     } 
//     cout << endl;
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
