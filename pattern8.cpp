#include<bits/stdc++.h>
using namespace std;


int main (){
    for(int i =0;i<6;i++)
    {

        // for spaces
        for(int j =0 ;j<i;j++)
        {
            cout<<" ";
        }


        // for star
        for(int j= 0;j<2*5 -(2*i-1); j++)
        {
            cout<<"*";
        }

        // space
        for(int j =0 ;j<i-1;j++)
        {
            cout<<" ";
        }



    
        cout<<endl;
    }
}