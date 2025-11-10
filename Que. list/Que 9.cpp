// Q.9
#include <iostream>
#include <algorithm>
using namespace std ;
void sortArray(int arr[] , int size){
    sort(arr,arr + size);
}
   
 int main() {
     int nums[]={6,7,8,9,1};
     int size= sizeof(nums)/sizeof(nums[0]);
     sortArray(nums ,size);
         cout << "The Sorted Array ascending : " ;
         for(int i=0;i<size;i++){
             cout << nums[i] << " ";
         }
    return 0;
}
