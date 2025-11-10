// #include<iostream>
// using namespace std;
// int main(){
//    int n;
//     cout <<"Enter a number of Rows:";
//     cin>>n;
        

//         for(int i=0;i<n;i++){
//             for(int j=0;j<n-i-1;j++){
//             cout << " ";
//             }
//             for(int k=0;k<=i;k++){
//            cout << " * ";
//             }
//         }
//         }










// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//    int n;
//     cout <<"Enter a number of Rows:";
//     cin>>n;
        

//         for(int i=0;i<n;i++){
//            string row = "";
       
//        row += string(n-i-1, ' ');
//        row += string(i+1, '*');
//        cout<< row << endl;
//         }
//         return 0;
//         }




#include<iostream>
using namespace std;
void  printpyramid(int i, int n){
  if(i==n) return ;
  for(int j=0;j<n-i-1;j++){
    cout << " ";
  }
  for(int j=0;j<2*i+1 ;j++){
    cout << "* ";
  }
cout << endl;
printpyramid(i+1,n);
}
int main(){
       int n;
    cout <<"Enter a number of Rows:";
    cin>>n;
     printpyramid(n,0);
return 0;
}