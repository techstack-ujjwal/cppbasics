#include<bits/stdc++.h>
using namespace std;
// void
// return
// parameterised
//non parameterised

// void printName(){
//   cout << "hey ujjwal";
//  }
// int main(){
//     printName();

//     return 0;
// }

// void printName(string name){
//  cout << "hey " << name;
// }


// int main(){
//     string name;
//     cin >> name;
//     printName(name);

//     return 0;
// }

// retun paramterised
// int add(int num1,int num2){
//     int num3 = num1+num2;
//     return num3;


// }

// int main(){
//     int num1, num2;
//     cin>> num1>> num2;
//     int res = add(num1, num2);
//     cout << res;

//     return 0;
// }


// internal function
// min max
// int main(){
//     int num1 , num2;
//     cin>> num1 >> num2;
//     int minimum = min(num1,num2);
//     cout << minimum;
//     return 0;
// }

// passs by referance and pass by value

void doSomething(int num){
    cout << num <<endl;
    num +=5;
    cout << num <<endl;
    num +=5;
    cout << num <<endl;


}
int main (){
    int num = 10;
    doSomething(num);
    cout << num <<endl;

    return 0;

}


// out put
// 10
// 15
// 20
// 10


//only copy of 10 was passed  passed by value




// pass bby refernce 
void doSomething1(int &num){
    cout << num <<endl;
    num +=5;
    cout << num <<endl;
    num +=5;
    cout << num <<endl;


}
int main (){
    int num = 10;
    doSomething1(num);
    cout << num <<endl;

    return 0;

}


// & send address of operator
// array always goees with passss by refernce
