#include<iostream>
using namespace std;
int main()
{
    int a[5];
    int b[5];
    int c[10],temp;
    int i=0,j=0;

    
  
    for(i=0;i<5;i++)
    {
        cin>>a[i];
        
    }

    
     for(j=0;j<5;j++)
    {
        cin>>b[j];
        
    }


cout<<"********************************************"<<endl;
cout<<"         MERGE SORTED ARRAYS"<<endl;
cout<<"********************************************"<<endl;

    cout<<"First Array"<<endl;
    cout<<endl;
     for(i=0;i<5;i++)
    {
        c[i]=a[i];
        cout<<a[i]<<" ";
        
    }
    cout<<endl;
    cout<<endl;
    cout<<"Second Array"<<endl;
    cout<<endl;
    for(j=0;j<5;j++)
    {
        c[j+5]=b[j];
        cout<<b[j]<<" ";
        
    }
    cout<<endl;
    cout<<"-------------------------------------------"<<endl;
   
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(c[i]>c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }
    cout<<"Merged Sorted Array"<<endl;
    cout<<endl;
    for(j=0; j<10; j++) 
    { 
        cout << c[j] << " ";
     } 
     
     return 0;


}