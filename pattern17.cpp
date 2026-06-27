#include<bits/stdc++.h>
using namespace std;


int main (){
    for(int i = 1;i<6;i++)
    {

        // for spaces
        for(int j =0 ;j<5-i;j++)
        {
            cout<<" ";
        }


        // for char
        char ch ='A';
        int breakpoint = (2*i-1)/2;
        for(int j= 1;j<=2*i-1; j++)
        {
            cout<<ch;
            if(j<=breakpoint) ch++; 
            else ch--;
        }

        // space
        for(int j =0 ;j<5-i;j++)
        {
            cout<<" ";
        }



    
        cout<<endl;
    }
}