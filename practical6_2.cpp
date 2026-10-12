#include <iostream>
#include <iomanip>

using namespace std;
int main()
{

    int E_Score[50], total_score,Highest_score, Lowest_score,i,j,t;
    string P_Name[50], P_ID[50];
    int N_P, m, P_No;
    float Avg_score;
    string n,k;

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
    
        //this section is for printing the input taken is the above section in a perticular format//
   

    cout << "---------------------------------------------" << endl;
    cout << "       Participant Performance" << endl;
    cout << "---------------------------------------------" << endl;

    cout << left << setw(6) << "ID" << setw(8) << "Name" << setw(5) << "Score" << endl;
    cout << "--------------------------------------------------" << endl;
    for (m = 0; m < N_P; m++)
    {
        cout << left << setw(6) << P_ID[m] << setw(8) << P_Name[m] << setw(5) << E_Score[m] << endl;
    }
    cout << "--------------------------------------------------" << endl;


// this section is fpr calculating the total score of participants//


    total_score = 0;

    // this section is for determining the highest and lowest score and avg score of event //


    Highest_score = E_Score[0];
    Lowest_score = E_Score[0];

    for (m =0; m < N_P; m++)
    {

        total_score = total_score + E_Score[m];
    
        if(E_Score[m]>Highest_score)
    
        
       Highest_score=E_Score[m];
       

        if(E_Score[m]<Lowest_score)

        Lowest_score=E_Score[m];
        
           
        }
        Avg_score = total_score / (float) N_P;

    // this part disply above section the highest and lowest score and avg score of event //


       cout<<"total_score:"<<total_score<< endl;
       cout<<"Avg_score:"<<Avg_score<< endl;
       cout<<"Highest_score:"<<Highest_score<< endl;
       cout<<"Lowest_score:"<<Lowest_score<< endl;


       // this section 2nd time take input participant id // 

        cout<<"Search Paricipant"<<endl;
     cout << "Enter Participant ID:";
        cin >>n;


      // this section work above you enter participant id and disply participant detail// 

      for(i=0; i< N_P; i++)
      {
        if(n==P_ID[i])
        {
     cout << "------------------------------------------------" << endl;
    cout << "        Participant Found" << endl;
    cout << "------------------------------------------------" << endl;

      cout<<left<<setw(6)<<"id :"<<P_ID[i]<< endl;
      cout<<left<<setw(6)<<"name :"<< P_Name[i]<< endl;
      cout<<left<<setw(6)<<"score :"<< E_Score[i]<< endl;
        }
    }

   // this section is for shorting the participants according to their score in decending order//

for(i=0; i< N_P; i++)
{
    for(j=i+1;j<N_P;j++)
    {
    if(E_Score[i]<E_Score[j])
    {
        t=E_Score[i];
        E_Score[i]= E_Score[j];
        E_Score[j]=t;


        k =P_Name[i];
        P_Name[i]=P_Name[j];
        P_Name[j]=k;
    }
    }
}

    // this section disply ranking list you given participants details in decending order in score//


cout << "------------------------------------------------" << endl;
    cout << "        Ranking List" << endl;
    cout << "------------------------------------------------" << endl;

cout<<left<<setw(5)<<"Rank"<<setw(9)<<"Name"<<setw(5)<<"Score"<<endl;

for(i=0; i< N_P; i++)
{
    cout<<left<<setw(5)<<i+1<<setw(9)<< P_Name[i]<<setw(5)<<E_Score[i]<<endl;
}
cout<<"------------------------------------------------------------"<< endl;


 // this section disply that disply top three performers details//


cout<<"Top Three Performers"<< endl;
cout<<"--------------------"<< endl;
cout<<left<<setw(5)<<"Rank"<<setw(9)<<"Name"<<setw(5)<<"Score"<<endl;
for(i=0;i<3;i++)
{
     cout<<left<<setw(5)<<i+1<<setw(9)<< P_Name[i]<<setw(5)<<E_Score[i]<<endl;
}
return 0;
}
