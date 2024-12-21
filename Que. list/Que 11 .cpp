

// Q.11
// #include <iostream>
// using namespace std ;
// int  removeDuplicates(int arr[],int size ,int result []){
//  int index =0;
//  for (int i=0;i<size;i++){
//      bool isDuplicate = false;
//      for(int j=0; j<size ;j++){
//          if(arr[i]==result[j]){
//              isDuplicate = true;
//              break;
//          }
//      }
//      if(!isDuplicate){
//          result[index++]= arr[i];
//      }
//      }
//     return index;
// }
//  int main() {
//      int nums[]={1,2,3,4,5};
//      int size= sizeof(nums)/sizeof(nums[0]);
//      int result [size];
//      int newSize =  removeDuplicates( nums, size,  result);
//      cout << "Array After removing duplicates :";
//      for(int  i=0 ; i<newSize; i++){
//          cout << result[i]  << " ";
//      }
//     return 0;
// }


#include <iostream>
using namespace std;
int main() {
    int nums[] = {1, 2, 3, 4, 5};
    int size = sizeof(nums) / sizeof(nums[0]);
    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < size; i++) {
        if (nums[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    cout << "Even: " << evenCount << " Odd: " << oddCount << endl;
    return 0;    
}
