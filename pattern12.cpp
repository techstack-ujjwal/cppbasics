#include<bits/stdc++.h>
using namespace std;
int main(){
    int space = 2*(4-1);
    for(int i =1; i<5; i++){
        // numbers
        for(int j=1;j<=i;j++){
        cout<<j;
    }
        // space

 for(int j =1; j<=space; j++){
            cout<<" ";
        }



        //number
        for(int j=1;j>=i;j--){
        cout<<j;}
        cout << endl;
        space -= 2;
    }
    }
