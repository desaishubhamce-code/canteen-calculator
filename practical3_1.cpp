#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
     /* here string is used to declare enrollmentno,name,branch,moblieno and int is used for semester,m1,m2,m3,total marks and also float variable used for 
             avg_marks and percentage */

{
    string enrollment, name, branch, mobile;
    int semester,m1,m2,m3,Total_marks;
    float avg_marks, p;

    //here cout used for print pattens and message and also endl used for end for your any massage and sentence

    // here part take input student rocord management system and give output like enrollment numbers,student name,semester,branch,mobail numbers// 

    cout << "************************************************" << endl;
    cout << "      STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "************************************************" << endl;

    cout <<"software version 1.1" << endl;


     cout << "--------------------------------" << endl;
    cout << "      STUDENT REGISTRATION" << endl;
    cout << "---------------------------------" << endl;

     // here cin is used for input value 


    cout << "Enter Enrollment Number : ";
    cin >> enrollment;

    // here cin.ignore use for ignore specific numbers of characts or a delimitar from the input bufferer
    // here getline used to read an entire line of text(including sapce) from an input stream and store it into a string variable
   

    cout << "Enter Student Name" ":" ;
    cin.ignore();
    getline(cin, name);

    cout << "Enter Branch" ":" ;
    cin >> branch;

    cout  << "Enter Semester" ":" ;
    cin >> semester;

    cout << "Enter Mobile Number" ":" ;
     cin >> mobile;

     // this part take input subject marks//

     cout << "-----------------------------------" << endl;
     cout << "Academic information" << endl;
     cout << "-----------------------------------" << endl;

     cout << "Enter mathemetic marks" ":";
     cin >> m1;

     cout <<"Enter physics marks" ":";
     cin >> m2;

     cout << "Enter programing foundation marks" ":";
     cin >> m3;

    // this part take input marks and calculate total marks,average marks,percentage and output disply perfectly//

      cout << "-----------------------------------" << endl;
     cout << "Academic Summary" << endl;
     cout << "-----------------------------------" << endl;


    Total_marks=m1+m2+m3;
    cout << left << setw(16) << "Total marks" <<":" << Total_marks << endl;



     avg_marks=(m1+m2+m3)/3.00;
     cout << left << setw(16) << "average marks"<<":" << avg_marks <<endl;


     p=((m1+m2+m3)/300.00)*100;
     cout << left << setw(16) << "percentage" << ":" << p <<"%"<<endl;

     // this part also output printed student record management system//





    cout << "------------------------------------------" << endl;
    cout << "Student Information" << endl;
    cout << "------------------------------------------" << endl;

     // here use for left command it works aligement left side output and setw command use for set width input and output value

    cout << left << setw(20)<< "Enrollment Number "<<":" <<setw(10)<< enrollment << endl;
    cout << left << setw(20)<< "Student Name "<<":" <<setw(10)<< name << endl;
    cout << left << setw(20)<< "Branch " <<":"<<setw(10)<< branch << endl;
    cout << left << setw(20)<< "Semester  " <<":"<<setw(10)<< semester << endl;
    cout << left << setw(20)<< "Mobile Number  "<<":" <<setw(10)<< mobile << endl;
    cout << "------------------------------------------" << endl;

    return 0;
}
// here practical3_1 code give output like softwere version,student ragistation,academic information,academic summary,and last student information

