#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    int A[3][3],B[3][3],ANS[3][3],r,c,k;
    for(r=0;r<3;r++)
{
         for(c=0;c<3;c++)
    {
        cin>>A[r][c];
    }
}
for(r=0;r<3;r++)
{
    for(c=0;c<3;c++)
    {
        cin>>B[r][c];
    }
}

cout<<"--------------------------------------------------"<<endl;
cout<<"MATRIX MULTIPLICATION"<<endl;
cout<<"--------------------------------------------------"<<endl;

cout<<"First Metrix"<<endl;
cout<<endl;
for(r=0;r<3;r++)
{
    for(c=0;c<3;c++)
    {
        cout<<setw(2)<<A[r][c]<<" ";
    }
    cout<<endl;
}

cout<<endl;
cout<<endl;

cout<<"Second Metrix"<<endl;
cout<<endl;

for(r=0;r<3;r++)
{
    for(c=0;c<3;c++)
    {
        cout<<setw(2)<<B[r][c]<<" ";
    }
    cout<<endl;
}

cout<<endl;
cout<<endl;

cout<<"Resultant Metrix"<<endl;

for(r=0;r<3;r++)
cout<<endl;
{
    for(c=0;c<3;c++)
    {
        ANS[r][c]=0;
        for(k=0;k<3;k++)
        {
            ANS[r][c]=ANS[r][c]+(A[r][k]*B[k][c]);
        }
        cout<<setw(2)<<ANS[r][c]<<" ";
    }
    cout<<endl;
}
return 0;


    }

