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
    

    cout << "************************************************" << endl;
    cout << "      STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "************************************************" << endl;



   

    // this part take input student registration and give output student enrollment number,student name,branch,semester,mobail numbers//


     cout << "--------------------------------" << endl;
    cout << "      STUDENT REGISTRATION" << endl;
    cout << "---------------------------------" << endl;

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

           // this part take input subject marks//

     cout << "-----------------------------------" << endl;
     cout << "Academic information" << endl;
     cout << "-----------------------------------" << endl;

           

     cout << "Enter mathemetic marks : ";
     cin >> m1;

     cout << "Enter physics marks : ";
     cin >> m2;

     cout << "Enter programing foundation marks : ";
     cin >> m3;

// this part also take input student acedemic marks and calculate total marks,avg marks,percentage //
           
     



     cout << "-----------------------------------" << endl;
     cout << "Academic Summary" << endl;
     cout << "-----------------------------------" << endl;


      // here use for left command it works aligement left side output and setw command use for set width input and output value



 Total_marks=m1+m2+m3;
    cout << left << setw(16) << "Total marks" <<":"<< Total_marks << endl;



     avg_marks=(m1+m2+m3)/3.00;
     cout << left << setw(16) <<"average marks" <<":"<< avg_marks << endl;


     p=((m1+m2+m3)/300.00)*100;
     cout << left << setw(16) << "percentage" <<":"<< p <<"%"<< endl;

           // this part give output academic result also give massage pass and fail wishes massage// 


     cout << "-----------------------------------" << endl;
     cout << "Academic Result" << endl;
     cout << "-----------------------------------" << endl;

     if (p >= 40.0)
    {
     cout << left << setw(18) << "Result" << ":"<<"pass"<< endl ;
     cout <<"Congratulation! You have succesfully passeed"<< endl;
    }
    
     else if (p <=40.00)
     {
          cout << left << setw(18) << "Result" << ":"<<"fail"<< endl;
          cout <<"Better luck next time"<< endl;
     }
return 0;
  }
  /* here practical4_1 code is give output student registration student record like acedemic summary like total marks,average marks and percentage and also give that acedemic
    result like pass or fail and send massage congratulation! you have succesfully passed and if you are fail then also send massage like batter luck next time..*/
    
    