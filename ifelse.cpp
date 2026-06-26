#include<bits/stdc++.h>
using namespace std;
// write a program taht takes an iput of age 
// and prints if you are adult or not

// int main(){
//     int age;
//     cin>> age;

//     if(age>=18){
//         cout<<"you are an adult";


//     }
//     else if (age<18){
//         cout<<"you are not an adult";

//     }
//     // it is not mandatory to have an else statement

//     return 0;
// }


// int main(){
//     int marks;
//     cin>> marks;
//     if(marks<25){
//         cout<<"you are fail";

//     }else if(marks>=25&&marks<=44){
//         cout <<'E';
//     }else if(marks>=45&&marks<=49){
//         cout<<'D';
    
//     }else if (marks>=50&&marks<=59){
//         cout<<'C';

//     }else if (marks>=60&&marks<=79){
//         cout<<'B';
//     }else if (marks>=80&&marks<=100)
//     {
//         cout<<'A';
//     }
// }

// agar yha ham if use karte  to har block excute hota bhale hi bich me 1 block sahi ho but else if ek bar code sahi then code break ho jayeag


// more optimized code
// int main(){
//     int marks;
//     cin>> marks;
//     if(marks<25){
//         cout<<"you are fail";

//     }else if(marks<=44){
//         cout <<'E';
//     }else if(marks<=49){
//         cout<<'D';
    
//     }else if (marks<=59){
//         cout<<'C';

//     }else if (marks<=79){
//         cout<<'B';
//     }else if (marks<=100)
//     {
//         cout<<'A';
//     }
// }


// int main(){
//     int age;
//     cin>>age;
//     if(age<18 ){
//         cout<<"not eligble for job";
//     }if(age>=18&&age<=57){
//         cout<<"eligble for job";
//     }if(age>=55 && age <= 57){
//         cout<<"deligble for job, but retirement soon.";
//     }else if(age>57){
//         cout<<"retirement time";
//     }
//     return 0;
// }

//my code 



//striver code
// int main(){
//     int age;
//         cin>>age;
//      if(age<18 ){
//          cout<<"not eligble for job";
//      }else if(age>=18&&age<=54){
//          cout<<"eligble for job";
//      }else if( age <= 57){
//          cout<<"deligble for job, but retirement soon.";
//      }else{
//          cout<<"retirement time";
//      }
//      return 0;
//     }


// optimized striver code

    int main(){
    int age;
        cin>>age;
     if(age<18 ){
         cout<<"not eligble for job";
     }else if(age<=57){
         cout<<"eligble for job";
         if(age>=55){
            cout << ", but retirement soon";
         }
     }else{
         cout<<"retirement time";
     }
     return 0;
    }