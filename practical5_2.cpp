#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
          /*here string is used to declare enrollmentno,name,branch,moblieno and int is used for semester,m1,m2,m3,total marks and also float variable used for
             avg_marks and percentage */
{
   
    string enrollment, name, branch, mobile;
    int semester,Y;
    char choice,Register_Another;
     

    //here cout used for print pattens and message and also endl used for end for your any massage and sentence

    cout << "************************************************" << endl;
    cout << "      STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "************************************************" << endl;

    



        

     
    cout << "STUDENT REGISTRATION" << endl;
    

   // here cin is used for input value

do
{
 
    

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
      cout <<"student Registation Successfully." << endl;
      cout <<"Register Another Student?(Y/N) :";
      cin>>choice;
      if (choice=='Y')
      {
      cout<< endl;
      cout << "------------------------------------------------" << endl;
     }
}
        while(choice=='Y');
        cout<< endl;
        cout<< "Returning to main Menu..."<< endl;
        return 0;
      }