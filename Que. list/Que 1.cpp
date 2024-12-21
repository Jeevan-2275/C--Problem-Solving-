// Q.1
#include<iostream>
#include<string>
using namespace std;
string checkGrade(int score){
    if(score >=90 && score<=100){
        return "A";
    }else if (score >=80 && score<=90){
        return "B";
    }else if (score >=70 && score<=80){
        return "C";
    }else if (score < 60 && score>=0){
        return "D";
    }else {
        return "Invalid Number";
    }}
    int main(){
        int score;
        cout << "Enter Sccore :" ;
        cin  >> score;
        string grade = checkGrade(score);
        cout << "The Student score is:"  << grade << std::endl;
        return 0 ;
    }
