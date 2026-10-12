#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
          /*here string is used to declare enrollmentno,name,branch,moblieno and int is used for semester,m1,m2,m3,total marks and also float variable used for 
             avg_marks and percentage */
{
    string enrollment, name, branch, mobile;
    int semester,m1,m2,m3,Total_marks,choice;
    float avg_marks, p;
     do
        {

    //here cout used for print pattens and message and also endl used for end for your any massage and sentence

    cout << "************************************************" << endl;
    cout << "      STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "************************************************" << endl;

    cout << "-------------MAIN MENU----------------" <<endl;
    cout << "1.Register new student" <<endl;
    cout << "2.Disply student record" << endl;
    cout << "3.Enter student marks" << endl;
    cout << "4.Disply student marks" << endl;
    cout << "5.Exit" <<endl;
    cout <<"Enter your choice" << endl;
    cin>>choice;
    
       
            
        switch (choice)
        {

        case 1:
        {
        
     cout << "--------------------------------" << endl;
    cout << "      STUDENT REGISTRATION" << endl;
    cout << "---------------------------------" << endl;
 
   // here cin is used for input value 


    cout << "Enter Enrollment Number : ";
    cin >> enrollment;
  // here cin.ignore use for ignore specific numbers of characts or a delimitar from the input bufferer
    
    cout << "Enter Student Name : ";
    cin.ignore();
 // here getline used to read an entire line of text(including sapce) from an input stream and store it into a string variable
   
    getline(cin, name);

    cout << "Enter Branch : ";
    cin >> branch;

    cout << "Enter Semester : ";
    cin >> semester;

    cout << "Enter Mobile Number : ";
     cin >> mobile;
            break;
        }
        case 2:
        {

     cout << "------------------------------------------" << endl;
    cout << "Student Information" << endl;
    cout << "------------------------------------------" << endl;

    cout << left << setw(20)<< "Enrollment Number "<<":" <<setw(10)<< enrollment << endl;
    cout << left << setw(20)<< "Student Name "<<":" <<setw(10)<< name << endl;
    cout << left << setw(20)<< "Branch " <<":"<<setw(10)<< branch << endl;
    cout << left << setw(20)<< "Semester  " <<":"<<setw(10)<< semester << endl;
    cout << left << setw(20)<< "Mobile Number  "<<":" <<setw(10)<< mobile << endl;
    cout << "------------------------------------------" << endl;
    break;
        }
        case 3:
        {


     cout << "-----------------------------------" << endl;
     cout << "Academic information" << endl;
     cout << "-----------------------------------" << endl;

     cout << "Enter mathemetic marks : ";
     cin >> m1;

     cout << "Enter physics marks : ";
     cin >> m2;

     cout << "Enter programing foundation marks : ";
     cin >> m3;
     break;
        }
        case 4:
        {

     cout << "-----------------------------------" << endl;
     cout << "Academic Summary" << endl;
     cout << "-----------------------------------" << endl;


    Total_marks=m1+m2+m3;
    cout << "Total marks=" << Total_marks << endl;



     avg_marks=(m1+m2+m3)/3;
     cout << "average marks=" << avg_marks << endl;


     p=((m1+m2+m3)/300.00)*100;
     cout << "percentage=" << p << endl;

     // here if-else command used for check condition structure and make decisions in code
     // here else if command use for check sequential condition of code

     if (p >= 40.0)
    {
     cout << left << setw(18) << "Result" << ":"<<"pass"<< endl ;
    }
    
     else if (p <=40.00)
    {
          cout << left << setw(18) << "Result" << ":"<<"fail"<< endl;
    }

    if (p>=90)
    {
     cout << left << setw(18) << "Grade" << ":"<<"O"<< endl;
     cout << left << setw(18) <<"Perfomance Remark" <<":"<<"Outstanding"<< endl;
     
    }
    
     else if (p>=80 && p<=89)
     {
     cout << left << setw(18) <<"Grade" << ":"<<"A+"<< endl;
     cout << left << setw(18) <<"Perfomance Remark" <<":"<<"Excellent"<< endl; 
    }
      else if (p>=70 && p<=79)
      {
        cout << left << setw(18) << "Greade" << ":"<<"A"<< endl;
        cout << left << setw(18) <<"Perfomance Remark" <<":"<<"Very good"<< endl;
      }
      else if (p>=60 && p<=69)
      {
        cout << left << setw(18) << "Grade" <<":"<<"B+"<< endl;
        cout << left << setw(18) <<"perfomance Remark" <<":"<<"Good"<< endl;
      }
      else if (p>=50 && p<=59)
      {
        cout << left << setw(18) << "Grade" <<":"<<"B"<< endl;
        cout << left << setw(18) <<"Perfomance Remark" <<":"<<"Satisfactory"<< endl;
      }
      else if (p>=40 && p<=49)
      {
        cout << left << setw(18) << "Grade" <<":"<<"C"<< endl;
        cout << left << setw(18) <<"Perfomance Remark" <<":"<<"Needs Improvement"<< endl;
      }
      else 
      {
        cout << left << setw(18) << "Grade" <<":"<<"F"<< endl;
        cout << left << setw(18) << "Perfomance Remark" <<":"<<"Failed"<< endl;
      }
     break;
        }
    }

  
}
    while(choice !=5);
    return 0;
    }