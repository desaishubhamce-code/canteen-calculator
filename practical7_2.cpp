#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
    char paragraph[100];
    int i,w=0,a=0,d=0,sp=0,len=0;


cout<<"********************************************"<<endl;
cout<<"DOCUMENT TEXT ANALYZER"<<endl;
cout<<"********************************************"<<endl;

cout<<"Enter a paragraph"<<endl;
cin.getline(paragraph,100);


cout<<"--------------------------------------------"<<endl;
cout<<"Text Analysis"<<endl;
cout<<"--------------------------------------------"<<endl;


 len = strlen(paragraph);

for(i=0;paragraph[i]!='\0';i++)
{
    if(paragraph[i]!='\0'&&(i==0||paragraph[i-1]==' '))
    {
        w++;
    }

}
 

 for(i=0;paragraph[i]!='\0';i++)
 {
     if((paragraph[i]>='A'&&paragraph[i]<='Z')||(paragraph[i]>='a'&&paragraph[i]<='z'))
     {
         a++;
     }

     else if(paragraph[i]>='0'&&paragraph[i]<='9')
     {
        d++;
     }
     else if(paragraph[i]!=' ')
     {
        sp++;
     }
 }
   cout<<"Characters : "<<len<<endl;
    cout<<"Words : "<<w<<endl;
    cout<<"Alphabets : "<<a<<endl;
    cout<<"Digits : "<<d<<endl;
    cout<<"Special Characters : "<<sp<<endl;

    return 0;




}
