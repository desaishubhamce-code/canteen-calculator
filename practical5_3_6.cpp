#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    char ch;
    cout<<"enter n" << endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
         ch='A';
        // space  : n-i-1
        for(j=0;j<=n-i-1;j++)
         {
            cout<<" ";
            
        }
        // num1=i+1
        for(j=1;j<i+1;j++)
        {
            cout<<ch;
            
            ++ch;
        }
        for(j=i-1;j>0;j--)
        {
            ch--;
            ch--;
            cout<<ch;
            
            ++ch;
        }
    
        cout<< endl;
    }
    return 0;
}

