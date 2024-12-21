// Q .8

#include <iostream>
#include <string>
using namespace std ;
double checkAverage(int arr[],int size){
      int sum = 0;
      for(int i=0;i<size;i++){
          sum = sum+arr[i];
      }
      return  static_cast<double>(sum)/size;      
   }   
 int main() {
     int arr[]={1,2,3,4,5};
     int size= sizeof(arr)/sizeof(arr[0]);
     double  Average = checkAverage( arr ,size);
     cout << "The average of the array is: " << Average << endl;
    return 0;
}