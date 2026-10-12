/*this practical is a sports event score analysis system*/
#include <iomanip>
#include <iostream>
using namespace std;
int main()
{

    int E_Score[50], total_score,Highest_score, Lowest_score, i;
    string P_Name[50], P_ID[50];
    int N_P, m, P_No;
    float Avg_score;

    cout << "*************************************************" << endl;
    cout << "        SPORTS EVENT SCORE ANALYSIS" << endl;
    cout << "*************************************************" << endl;

    cout << "Enter no of Participants:";
    cin >> N_P;
//this section is for taking input of various participants//
    for (m = 0; m < N_P; m++)
    {

        cout << "Enter Participant ID:";
        cin >> P_ID[m];
        cout << "Enter Participant Name:";
        cin >> P_Name[m];
        cout << "Enter Score:";
        cin >> E_Score[m];
    }
//this section is for printing the input taken is the above section in a perticular format
    cout << "---------------------------------------------" << endl;
    cout << "       Participant Performance" << endl;
    cout << "---------------------------------------------" << endl;

    cout << left << setw(6) << "ID" << setw(8) << "Name" << setw(5) << "Score" << endl;
    cout << "--------------------------------------------------" << endl;
    for (m = 0; m <N_P; m++)
    {
        cout << left << setw(6) << P_ID[m] << setw(8) << P_Name[m] << setw(5) << E_Score[m] << endl;
    }
    cout << "--------------------------------------------------" << endl;

// this section is fpr calculating the total score of participants//
    
    total_score = 0;

   

    for (m = 0; m < N_P; m++)
    {

        total_score = total_score + E_Score[m];

    }

// this section is for determining the highest and lowest score of event//

    Highest_score = E_Score[0];
    Lowest_score = E_Score[0];


for(i=1;i<N_P;i++)
{


        if(E_Score[i]>Highest_score)
        
       Highest_score=E_Score[i];
       

        if(E_Score[i]<Lowest_score)
        
        Lowest_score=E_Score[i];
        
           
        }

        // this section is for output
       Avg_score = total_score / (float) N_P;
       cout<<"total_score:"<<total_score<< endl;
       cout<<"Avg_score:"<<Avg_score<< endl;
       cout<<"Highest_score:"<<Highest_score<< endl;
       cout<<"Lowest_score:"<<Lowest_score<< endl;
return 0;
}
