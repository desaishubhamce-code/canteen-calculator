#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
     //here string is used to declare enrollmentno,name,branch,moblieno and int is used for semester
    string enrollment, name, branch, mobile;
    int semester;

    cout << "************************************************" << endl;
    cout << "      STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "************************************************" << endl;

    cout << left << setw(18) <<"softwere version" <<":"<< "1.1" << endl;
    cout << left << setw(18) <<"institute"<< ":" <<"charusat university" << endl;
    cout << left << setw(18) <<"acedamic year"<< ":"<< "2026-27" << endl;

     cout << "--------------------------------" << endl;
    cout << "      STUDENT REGISTRATION" << endl;
    cout << "---------------------------------" << endl;


     //here cout used for print pattens and message and also endl used for end for your any massage and sentence
     // here cin is used for input value 


    cout << "Enter Enrollment Number : ";
    cin >> enrollment;


    // here cin.ignore use for ignore specific numbers of characts or a delimitar from the input bufferer
    // here getline used to read an entire line of text(including sapce) from an input stream and store it into a string variable
   

 



    cout << "Enter Student Name : ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter Branch : ";
    cin >> branch;

    cout << "Enter Semester : ";
    cin >> semester;

    cout << "Enter Mobile Number : ";
     cin >> mobile;


    cout << "------------------------------------------" << endl;
    cout << "Student Information" << endl;
    cout << "------------------------------------------" << endl;

 // here use for left command it works aligement left side output and setw command use for set width input and output value



    cout << left << setw(18)<<"Enrollment Number"  << ":" <<enrollment << endl;
    cout << left << setw(18)<<"Student Name " << ":" << name << endl;
    cout << left << setw(18)<<"Branch "  <<":"<< branch << endl;
    cout << left << setw(18)<<"Semester "  <<":"<< semester << endl;
    cout << left << setw(18)<<"Mobile Number " <<":"<< mobile << endl;
    cout << "------------------------------------------" << endl;

    return 0;
}
//here practcal2_2 code give output student record, student information and student registation

