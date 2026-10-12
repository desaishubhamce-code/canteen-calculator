#include<iostream>
#include<cstring>
#include<iomanip>

using namespace std;
int main()
{
    int i,j,n=0,position,found=0;
    char enrollment[100][20];
    char name[100][30];
    char grade[100][5];
    float percentage[100];
    char searchenrollment[50];


    cout << "************************************************" << endl;
    cout << "      STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "************************************************" << endl;



    // this section take input student details//


    cout<<"Enter Number of Student :";
    cin>>n;
    cout<<"Enter Student Details"<<endl;
    for(i=0;i<n;i++)
    {
    cout << "Enter Enrollment Number : ";
    cin >> enrollment[i];
     cin.ignore();
  
    cout<<"Enter Student Name :"<<endl;
    cin.getline(name[i],30);

     cout << "percentage : ";
    cin >> percentage[i];


    cout << "grade: ";
    cin>>grade[i];
    }
    cout<<"--------------------------------------------------------"<<endl;


    // this section disply above you give student details//


    cout<<"Current Student Records"<<endl;
    for(i=0;i<n;i++)
    {
        cout<< left<<setw(12)<<enrollment[i]<<" "<<setw(15)<< name[i]<<" " <<setw(12)<< percentage[i]<<" "<<setw(8)<< grade[i]<<" "<<endl;

    }
     cout<<"--------------------------------------------------------"<<endl;


     //this section insert new student detail and you wish add this details whats position//

     cout<<"Insert New Student"<<endl;

     cout<<"Enter position :";
     cin>>position;
     position=position-1;
     for(i=n;i>position;i--)
     {
        strcpy(enrollment[i],enrollment[i-1]);
        strcpy(name[i],name[i-1]);
        strcpy(grade[i],grade[i-1]);
        percentage[i]=percentage[i-1];
     }

          cout << "Enter Enrollment Number : ";
          cin >> enrollment[position];
          cin.ignore();
  
    cout << "Enter Student Name : ";
     cin.getline(name[position],30);


     cout << "Enter percentage : ";
     cin >> percentage[position];


    cout << "Enter grade: ";
    cin>>grade[position];
    cin.ignore();

    n=n+1;

    


    cout<<"Record Inserted Successfully"<<endl;

    cout<<"----------------------------------------------------"<<endl;


    // this section record updeted student record you enter above section student detail//  


     cout<<"Updeted Student Records"<<endl;
    for(i=0;i<n;i++)
    {
        cout<< left<<setw(12)<<enrollment[i]<<" "<<setw(15)<< name[i]<<" " <<setw(12)<< percentage[i]<<" "<<setw(8)<< grade[i]<<" "<<endl;

    }
     cout<<"---------------------------------------------------"<<endl;


     // this section edit datils  when you enter first time student details or insert new student details//

     cout<<"Update Student Record"<<endl;

     cout << "Enter Enrollment Number : ";
     cin>>searchenrollment;
     found = 0;
     for(i=0;i<n;i++)
{
    if(strcmp(enrollment[i],searchenrollment)==0)
    {
        cout << "Enter New percentage : ";
        cin >> percentage[i];

        cout << "Enter New grade: ";
        cin >> grade[i];

        found = 1;
        break;
    }
}
     if(found)
    cout<<"Record Updated Successfully"<<endl;
    else
    cout<<"Record Not Found"<<endl;
     


     cout<<"-----------------------------------------------------"<<endl;


    // this section delet student record enter you all stdudent detail your wishes// 

     cout<<"Delete Student Record"<<endl;

     cout<<"Enter position :";
     cin>>position;
     position=position-1;
     for(i=position;i<n-1;i++)
     {
        strcpy(enrollment[i],enrollment[i+1]);
        strcpy(name[i],name[i+1]);
        strcpy(grade[i],grade[i+1]);
        percentage[i]=percentage[i+1];
     }

     n=n-1;

     cout<<"Record Deleted Successfully"<<endl;

     cout<<"---------------------------------------------------"<<endl;


     // this section disply final student record//

     cout<<"Final Student Record"<<endl;

      for(i=0;i<n;i++)
    {
        cout<< left<<setw(12)<<enrollment[i]<<" "<<setw(15)<< name[i]<<" " <<setw(12)<< percentage[i]<<" "<<setw(8)<< grade[i]<<" "<<endl;

    }
    return 0;
}











     
        
        


     






