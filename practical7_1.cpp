#include<iostream>
using namespace std;
int main()
{
    char enrollment[20];
    char name[30];
    char Branch[20];
    char Reference[60];
    int i,j,k;
    char FirstName[20];
    char LastName[20];
     char keyword[20];



    cout << "************************************************" << endl;
    cout << "      STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "************************************************" << endl;

     // this section take input student details//

    cout << "Enter Enrollment Number :"; 
    cin >> enrollment;
     cin.ignore();
  
    cout<<"Enter Student Name :";
    cin.getline(name,30);
    

    cout<<"Enter Branch :";
    cin>>Branch;

    cout<<"-----------------------------------------------"<<endl;


    // this section disply this format.  "name-enrollment no"//


    for (i = 0, j = 0; name[i] != '\0'; i++,j++)    
    {
        Reference[j] = name[i];
    }
    Reference[j] = '-';             
    j++;


   
    for(i=0;enrollment[i]!='\0';i++,j++)
    {
       
         Reference[j]=enrollment[i];
       
    }
    Reference[j] = '\0';  
    
    cout << "Student Reference" << endl;
    cout << endl;
    cout << Reference << endl;
   
  
    cout << "-----------------------------------------------" << endl;


    // this section disply you enter name in specify whats first name and whats last name//


    for(i=0,k=0;name[i]!=' ' && name[i]!='\0';i++,k++)
    {
        FirstName[k]=name[i];
    }
    FirstName[k] = '\0'; 

     for(k=0;name[i]!='\0';i++,k++)
    {
        LastName[k]=name[i];
    }
    LastName[k] = '\0'; 
    

   

     cout << "First Name" << endl;
     cout<<endl;
     cout<<FirstName<<endl;
     cout<<endl;
     cout << "Last Name" << endl;
     cout<<endl;
     cout<<LastName<<endl;

      cout << "-----------------------------------------------" << endl;


      // the below code is used to serch a student's record with keyword//

      cout<<"Enter keyword :";
      cin>>keyword;


      if(strstr(name,keyword)==NULL)
      {
        cout<<"keyword Not found"<<endl;
      }
      else
      {
        cout<<"keyword found"<<endl;

      }

      cout<<"-----------------------------------------------------"<<endl;



      // this section disply student record//


       cout << "Student Report" << endl;
          cout<<endl;
        cout << "Enrollment Number :"<<enrollment<<endl; 
        cout<<"Student Name :"<<name<<endl;
        cout<<"Branch :"<<Branch<<endl;

        return 0;






     
 


      


    


    
  

   

   

     
}