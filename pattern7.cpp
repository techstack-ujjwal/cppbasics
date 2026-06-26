#include<bits/stdc++.h>
using namespace std;


int main (){
    for(int i = 1;i<6;i++)
    {

        // for spaces
        for(int j =0 ;j<5-i-1;j++)
        {
            cout<<" ";
        }


        // for star
        for(int j= 0;j<2*i-1; j++)
        {
            cout<<"*";
        }

        // space
        for(int j =0 ;j<5-i-1;j++)
        {
            cout<<" ";
        }



    
        cout<<endl;
    }
}