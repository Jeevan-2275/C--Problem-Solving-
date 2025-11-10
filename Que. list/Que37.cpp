// Given a sorted array and a target value, return the starting and ending position of that target in the array.Example:Input: [5, 7, 7, 8, 8, 10], target=8 ,Output: [3, 4]


#include <iostream>
using namespace std;
void searchRange( int arr[], int size , int target ){
    int start = -1 , end =-1;
    for(int i=0;i<size;i++){
        if(arr[i]==target){
       
        if( start == -1){
            start = i;
        }
       end = i;
        }
    }
   
    
     if(start== -1){
      cout << ["-1, -1" ]  << endl;
}
}