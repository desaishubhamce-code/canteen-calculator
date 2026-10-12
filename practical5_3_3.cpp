#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    char ch;




    cout<<"enter n"<< endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
         ch ='A';
        for(j=1;j<=i;j++)
        {
             cout<<ch<<" ";
             ++ch;
             
        }

            cout<< endl;
    }
        return 0;
    }


