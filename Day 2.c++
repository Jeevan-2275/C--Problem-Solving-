// Q.1
// #include<iostream>
// #include<string>
// using namespace std;
// string checkGrade(int score){
//     if(score >=90 && score<=100){
//         return "A";
//     }else if (score >=80 && score<=90){
//         return "B";
//     }else if (score >=70 && score<=80){
//         return "C";
//     }else if (score < 60 && score>=0){
//         return "D";
//     }else {
//         return "Invalid Number";
//     }}
//     int main(){
//         int score;
//         cout << "Enter Sccore :" ;
//         cin  >> score;
//         string grade = checkGrade(score);
//         cout << "The Studen is:"  << grade << std::endl;
//         return 0 ;
//     }


// Q.2


// #include<iostream>
// using namespace std ;
// void checkNumber(int number){
//     if(number >0){
//         cout << "The number is positive" << endl ;
//     }else if (number < 0){
//         cout << "The number is negative" << endl ;
//     } else {
//         cout << "The number is zero" << endl;
//     }

// }
// int main(){
//     int number ;
//     cout << "Enter a number:" ;
//     cin >> number ;
//     checkNumber(number);
// }

// Q.3

// #include <iostream>
// using namespace std ;
// void checkTriangel(int side1, int side2, int side3){
//     if(side1==side2 && side2==side3){
//         cout << "The Triangle is Equilateral" << endl;

//     }else if (side1 ==side2 || side2 ==side3 ){
//         cout << "The Triangle is isoscalne "<< endl;
//     } else{
//         cout  << "The triangle is scalene" << endl;
//     }
// }
// int main(){
//     int side1,side2,side3;
//     cout << "Enter a first side :" ;
//     cin >> side1;
//     cout << "Enter a Second Side :";
//     cin >> side2;
//      cout << "Enter a Third side :";
//      cin >> side3;
//       checkTriangel(side1,side2,side3);
//       return 0;
// }


// Q.4
// #include<iostream>
// using namespace std ;
// void checkVowel(char ch){
//     ch = tolower(ch);
//     if(ch=='a'||ch=='e'|| ch=='i'|| ch=='u' || ch=='o'){
//         cout << ch << "is a vowel " << endl;
//     }else if(ch >='a '  && ch<='z'){
//         cout << ch << " it is consonant" << endl;
//     }else {
//         cout << ch << "is not alphabet " << endl;
//     }
// }
// int main (){
//     char ch;
//     cout << "Enter a charcter: ";
//     cin >> ch;
//     checkVowel( ch);
// }


// Q.5
// #include <iostream>
// using namespace std;
// bool isEligibleVote(int age){
//     if(age >=18){
//         return true;
//     }else {
//         return false;
//     }}
//     int main() {
//     int age;
//     cout << "Enter your Age:" << endl;
//     cin >> age;
// if(isEligibleVote( age)){
//     cout << "You are eligible" << endl;
// }else {
//     cout << "You are not eligible" << endl;
// }
// return 0;
// }

// Q.6
// #include<iostream>
// #include <string>
//    using namespace std ;
//    void  checkLogin(string UserName, string  UserPassword){
//        string correctUserName ="Admin";
//        string correctUserPassWord ="1234";
//        if(UserName==correctUserName && UserPassword==correctUserPassWord){
//            cout << "Login " << endl;           
//        }else{
//            cout << " Login Not" << endl;
//        }
//    }   
//  int main() {  
// string    UserName,  UserPassword;
//  cout << "Enter Username:" << endl;
//  cin >> UserName;
//  cout << "Enter UserPassword:" << endl;
//  cin >> UserPassword;
//  checkLogin(UserName, UserPassword);
//     return 0;
// }


// Q.7
// #include <iostream>
// #include <string>
//    using namespace std ;
//    void  checkLogin(string LightColor){      
//        if(LightColor =="red"){
//            cout << "Stop " << endl;
           
//        }else if (LightColor =="yellow"){
//            cout << " slow" << endl;
//        }else if(LightColor =="green"){
//            cout << " go" << endl;           
//        }else{
//          cout << "invalid co" << endl;             
//        }     
//    }   
//  int main() {  
// string LightColor;
//  cout << "Enter LightColor:" << endl;
//  cin >> LightColor; 
// checkLogin(LightColor);
//     return 0;
// }   

// Q .8

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


// Q.9
// #include <iostream>
// #include <algorithm>
// using namespace std ;
// void sortArray(int arr[] , int size){
//     sort(arr,arr + size);
// }
   
//  int main() {
//      int nums[]={6,7,8,9,1};
//      int size= sizeof(nums)/sizeof(nums[0]);
//      sortArray(nums ,size);
//          cout << "The Sorted Array ascending : " ;
//          for(int i=0;i<size;i++){
//              cout << nums[i] << " ";
//          }
//     return 0;
// }

// Q.10



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


// #include <iostream>
// using namespace std;
// int main() {
//     int nums[] = {1, 2, 3, 4, 5};
//     int size = sizeof(nums) / sizeof(nums[0]);
//     int evenCount = 0;
//     int oddCount = 0;

//     for (int i = 0; i < size; i++) {
//         if (nums[i] % 2 == 0) {
//             evenCount++;
//         } else {
//             oddCount++;
//         }
//     }

//     cout << "Even: " << evenCount << " Odd: " << oddCount << endl;
//     return 0;
// }


// Q.12

// #include <iostream>
// using namespace std ;
// void elementEnd(int arr[], int& size, int newElement){
//    if(size <6){
//     arr[size] = newElement;
//     size++;
//     cout << "Updated Array :" ;
//     for(int i=0;i<size ;i++){
//         cout << arr[i] << " " ;
//    } }else {
//        cout << "Array is full, cannot add more elements!" << endl;

//     }}
   
//  int main() {
//     int arr[6]={1,2,3,4,5};
//         int size = 5;  
//    int newElement = 6;  

//     elementEnd(arr, size, newElement);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int arr[6] = {1, 2, 3, 4, 5};
//     int size = 5;  
//     int newElement = 6; 
//     if (size < 6) {
//         arr[size] = newElement;
//         size++;    
//         cout << "Updated Array: ";
//         for (int i = 0; i < size; i++) {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     } else {
//         cout << "Array is full, cannot add more elements!" << endl;
//     }
//     return 0;
// }


// Q.14

// #include <iostream>
// using namespace std ;
// void elementEnd(int arr[], int& size, int newElement){
//   for(int i=size ;i>0;i--){
//       arr[i]=arr[i-1];
//   }
//   arr[0]=newElement;
//   size++;
//   cout << "Updated Array:";
//   for(int i=0; i<size;i++){
//       cout << arr[i] << " ";
//   }
    
// }
   
//  int main() {
//     int arr[10]={1,2,3,4,5};
//         int size = 5;  
//    int newElement = 0;  

//     elementEnd(arr, size, newElement);
//     return 0;
// }

// with is_function

// #include <iostream>
// using namespace std;
// int main() {
//    int arr[10] = {1, 2, 3, 4, 5};
//     int size = 5;  
//     int newElement = 0;  
//     for (int i = size; i > 0; i--) {
//         arr[i] = arr[i - 1];
//     }
//     arr[0] = newElement;
//     size++;
//     cout << "Updated Array: ";
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

//Using vector Methode 
// #include <iostream>
// #include <vector>
// using namespace std;
// void addElement(vector<int>&nums,int newElement){
//     nums.insert(nums.begin(),newElement);
// cout << "Updated array: ";
// for (int num :nums){
//     cout << num  << " " ;
//    }  
//    cout << endl;
// }
// int main() {
//     vector<int> nums ={1,2,3,4};
//     int newElement = 0;
//     addElement( nums , newElement);
//     return 0;
// }



//Using Deque Methodeded





// Q.15
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



// Q.17
// #include <iostream>
// using namespace std;
//  void  countPositiveNegative(int arr[],int size){
//     int positiveCount = 0;
//     int negativeCount = 0;
//     for (int i=0; i< size; i++){
//         if(arr[i]> 0){
//             positiveCount++;
//         }else if(arr[i] <0){
//             negativeCount++;
//         }
//     }
//     cout << "Positive Cout: " << positiveCount << endl;
//         cout << "Negative  Cout: " << negativeCount <<endl;

// }

// int main() {
//   int arr[]={-3,-5,-9,-1,-7};
//   int size =sizeof(arr)/sizeof(arr[0]);
//     countPositiveNegative(arr, size);

//     return 0;
// }


// #include <iostream>
// using namespace std;
//  void  countPositiveNegative(int arr[],int size){
//     int positiveCount = 0;
//     int negativeCount = 0;
//     for (int i=0; i< size; i++){
//         if(arr[i]> 0){
//             positiveCount++;
//         }}
//         for (int i=0; i< size; i++){
//         if(arr[i] < 0){
//             negativeCount++;
//             }
//             }
//     cout << "Positive Cout: " << positiveCount <<endl;
//         cout << "Negative  Cout: " << negativeCount <<endl;
// }
// int main() {
//   int arr[]={-3,-5,-9,1,-7};
//   int size =sizeof(arr)/sizeof(arr[0]);
//     countPositiveNegative(arr, size);
//     return 0;
// }





// Q.18
// #include <iostream>
// using namespace std;
//  void  printEven(int arr[],int size){
//    cout << "[";
//    for(int i=0;i<size;i++){
//        if(i %2==0){
//            cout << arr[i];
//            if(i<size-2){
//                cout << " ,";
//            }
//        }
//    }
//    cout << "]" << endl;
// }
// int main() {
//   int arr[]={10,20,30,40,50};
//   int size =sizeof(arr)/sizeof(arr[0]);
//     printEven(arr, size);

//     return 0;
// }




// #include <iostream>
// using namespace std;
//  void  printEven(int arr[],int size){
//    cout << "[";
//    for(int i=0;i<size;i=i+2){
//        if(i %2==0){
//            cout << arr[i];
//            if(i<size-2){
//                cout << " ,";
//            }
//        }
//    }
//    cout << "]" << endl;
// }
// int main() {
//   int arr[]={10,20,30,40,50};
//   int size =sizeof(arr)/sizeof(arr[0]);
//     printEven(arr, size);

//     return 0;
// }



// Q.19
// #include <iostream>
// using namespace std;
//  bool sort(int arr[],int size){
//      for(int i=0;i<size-1;i++){
//          if(arr[i] > arr[i+1]){
//              return false;
//          }
//      }
//      return true;
//  }
// int main() {
//   int arr[]={1,2,3,4,5};
//   int size =sizeof(arr)/sizeof(arr[0]);
//    bool result = sort(arr, size);
//    if(result){
//        cout << "true "  << endl;
       
//    }else{
//        cout << "False " << endl;
//    }

//     return 0;
// }

// #include <iostream>
// using namespace std;
//  bool sort(int arr[],int size){
//      for(int i=0;i<size-1;i++){
//          if(arr[i] > arr[i+1]){
//              return false;
//          }
//      }
//      return true;
//  }
// int main() {
//   int arr[]={1,2,3,4,5};
//   int size =sizeof(arr)/sizeof(arr[0]);
//    bool result = sort(arr, size);
//    if(result){
//        cout << "true "  << endl;       
//    }else{
//        cout << "False " << endl;
//    }

//     return 0;
// }

// #include <iostream>
// #include<algorithm>
// using namespace std;
//  bool sort(int arr[],int size){
//          return std::is_sorted(arr,arr + size);
//  }
// int main() {
//   int arr[]={1,2,3,4,5};
//   int size =sizeof(arr)/sizeof(arr[0]);
//    bool result = sort(arr, size);
//    if(result){
//        cout << "true "  << endl;
       
//    }else{
//        cout << "False " << endl;
//    }

//     return 0;
// }

// Q.20
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