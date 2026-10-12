#include <iostream>
#include <string>
using namespace std;

int main()
{
    //here string is used to declare enrollmentno,name,branch,moblieno and int is used for semester
    string enrollment, name, branch, mobile;
    int semester;

    cout << "************************************************" << endl;
    cout << "      STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "************************************************" << endl;

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

    cout << "Enrollment Number : " << enrollment << endl;
    cout << "Student Name : " << name << endl;
    cout << "Branch : " << branch << endl;
    cout << "Semester : " << semester << endl;
    cout << "Mobile Number : " << mobile << endl;
    cout << "------------------------------------------" << endl;

    return 0;
}
// here practical2_1 code give output student record and student information.
