#include<iostream>
using namespace std;
void  countEvenOdd (int arr[], int size) {
int evencount =0;
int oddcount =0;
for(int i=0;i< size ;i++){
    if(arr[i] % 2 == 0){
        evencount++;
    }else{
        oddcount++;
    }
}
cout << "Even:" << evencount << "odd :" << oddcount << endl;
}
int main(){
    int arr[]={1,2,3,4,6};
        int size= sizeof(arr)/sizeof(arr[0]);

    countEvenOdd ( arr,  size);

return 0;
}