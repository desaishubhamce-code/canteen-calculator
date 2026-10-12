#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter n" << endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        // space  : n-i-1
        for(j=0;j<=n-i-1;j++)
         {
            cout<<" ";
        }
        // num1=i+1
        for(j=1;j<i+1;j++)
        {
            cout<<j;
        }
       
    
        cout<< endl;
    }
    return 0;
}

