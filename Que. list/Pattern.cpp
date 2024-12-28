
// #include<iostream>
// using namespace std;
// int main(){



// }

// 4.pattern

// Que .1) reverse print number
// #include<iostream>
// using namespace std;
// int main(){
// int n; 
// cin>>n;
// int i=1;
// while(i<=n){
// int j=1;
//     while(j<=n){
//         cout <<  n-j+1;
//         j=j+1;

//     }
//     cout << endl;
//     i=i+1;
// }
// return 0;
// }




// #include<iostream>
// using namespace std;
// int main(){
// int n; 
// cin>>n;
// int i=1;
// int count=1;
// while(i<=n){
//     int j=1;
//     while(j<=n){
// cout << count << " ";
// count =  count+1;
// j=j+1;
//  }
//  cout << endl;
//  i=i+1;
// }
// return 0;
// }
// output:=
// 3
// 1 2 3 
// 4 5 6 
// 7 8 9 




// #include<iostream>
// using namespace std;
// int main(){
// int n; 
// cin>>n;
// int row=1;
// while(row<=n){
//     int column=1;
//     while(column <=row){
// cout <<   "* ";
// column =column +1;
//  }
//  cout << endl;
// row =row+1;
// }
// return 0;
// }




// #include<iostream>
// using namespace std;
// int main(){
// int n; 
// cin>>n;
// int row=1;
// while(row<=n){
//     int column=1;
//     while(column <=row){
//         cout <<  row;
// column =column +1;
//  }
//  cout << endl;
// row =row+1;
// }
// return 0;
// }
// output:=
// 3
// 1
// 22
// 333


// #include<iostream>
// using namespace std;
// int main(){
// int n; 
// cin>>n;
// int row=1;
// while(row<=n){
//     int column=1;
//     while(column <=row){
//         cout <<  row+column-1;
// column =column +1;
//  }
//  cout << endl;
// row =row+1;
// }
// return 0;
// }
// output:=
// 3
// 1
// 23
// 345



// #include<iostream>
// using namespace std;
// int main(){
// int n; 
// cin>>n;
// int row=1;
// while(row<=n){
//     int column=1;
//     while(column <=row){
//         cout <<  row+column-1;
// column =column +1;
//  }
//  cout << endl;
// row =row+1;
// }
// return 0;
// }  
// output:=
// 3
// 1
// 23
// 345



// #include<iostream>
// using namespace std;
// int main(){
// int n; 
// cin>>n;
// int row=1;
// while(row<=n){
//     int column=1;
//     while(column <=row){
//         cout <<  row-column+1 << " ";
// column =column +1;
//  }
//  cout << endl;
// row =row+1;
// }
// return 0;
// }
// output:-
// 3
// 1 
// 2 1
// 3 2 1




// #include<iostream>
// using namespace std;
// int main(){
// int n; 
// cin>>n;
// int row=1;
// while(row<=n){
//     int column=1;
//     while(column <=n){
//         char ch ='A' +row -1;
//         cout << ch;
// column =column +1;
//  }
//  cout << endl;
// row =row+1;
// }
// return 0;
// }
// output:=
// 3
// AAA
// BBB
// CCC




// #include<iostream>
// using namespace std;
// int main(){
// int n; 
// cin>>n; 
// int row=1;
// while(row<=n){
//     int j=1;
//     while(j<=n){
//         char ch ='A' +(row -1)*n+(j-1);
//        cout << ch;
// j=j+1;
//  }
//  cout << endl;
//  row=row+1;
// }
// return 0;
// }
// output:-
// 3
// ABC
// DEF
// GHI



// #include<iostream>
// using namespace std;
// int main(){
// int n; 
// cin>>n;
// int row=1;
// while(row<=n){
//     int column=1;
//     while(column <=row){
//         char ch =('A' +row -1);
//         cout << ch;
// column =column +1;
//  }
//  cout << endl;
// row =row+1;
// }
// return 0;
// }
// output:-
// 3
// A
// BB
// CCC


//   #include<iostream>
//   using namespace std;
//   int main(){
//     int n;
//     cin>>n;

//     int row =1;
//     while(row<=n)    {
//         int space =n -row;
//         while(space){
//             cout<< " ";
//             space=space-1;
//         }
//        int col=1;
//        while(col <=row){
//         cout << "*";
//         col=col+1;
//        }
//        cout << endl;
//        row=row+1;
//     }
    
//   }
//   output:-
//   3
//   *
//  **
// ***



//   #include<iostream>
//   using namespace std;
//   int main(){
//     int n;
//     cin>>n;

//     int row =1;
//     while(row<=n){
//         int col =n -row +1;      
//        while(col >0){
//         cout << "*";
//         col=col-1;
//        }
//        cout << endl;
//        row=row+1;
//     }    
//   }
//   output:-
//   3
// ***
// **
// *




  

#include<iostream>
using namespace std;
int main(){
int n; 
cin>>n;
int row=1;
while(row<=n){
  int space =n-row;
while(space){
    cout<<" ";
    space=space-1;
}   
int j=1;
while(j<=row){
    cout<<j;
    j=j+1;
  }
  int start=row-1;
while(start){
    cout << start;
    start =start-1;
}
cout<<endl;
row=row+1;
}
return 0;
}