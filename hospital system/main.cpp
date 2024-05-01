#include <iostream>
using namespace std;
string names [20][5];
string statusarr[20][5];
int number_of_patints_in_specialization[20];
void  show()
{
    cout<<"Enter your choice: \n";
    cout<<"1-Add new patient";
    cout<<endl;
    cout<<"2-print all patient";
    cout<<endl;
     cout<<"3-Get next patient";
     cout<<endl;
     cout<<"4-Exit\n";
}
void read()
{
    cout<<"Enter specialization,name,status\n";
    int specialization; string name;bool status;
    bool place=false;
    cin>>specialization>>name>> status;
    int pos;
    for(int i=0;i<5;i++)
    {
        if(names[specialization][i] == "" )
        {
            place =true ;
             pos=i;
            number_of_patints_in_specialization[specialization]++;
            break;
        }
    }
        if(place)
        {
            if(status)
            {
                for(int i=pos;i>0;i--)
                {
                    names[specialization][i]=names[specialization][i-1];
                    names[specialization][i-1]=names[specialization][i-2];
                    statusarr[specialization][i]=statusarr[specialization][i-1];
                   statusarr[specialization][i-1]=statusarr[specialization][i-2];
                }
                names[specialization][0]=name;
                statusarr[specialization][0]="urgent";
            }
            else
            {
                 names[specialization][pos]=name;
                statusarr[specialization][pos]="regular";
            }
        }
        else
            cout<<"sorry we can not add more patients to this specialization\n";
    }
 void print()
 {
     for(int i=0;i<20;i++)
     {
         if( number_of_patints_in_specialization[i])
         {
             cout<<"There are "<<number_of_patints_in_specialization[i]<<" patients in specialization "<< i<<endl;
             for(int j=0;j<5;j++)
             {
                 if(names[i][j]!= "")
                  cout<<names[i][j]<<" "<<statusarr[i][j]<<endl;
             }
         }
     }
 }
 void get_next_patient(int n)
 {
     int copyy=number_of_patints_in_specialization[n];
     if(copyy)
     {
        cout<<names[n][0]<<" please go with the Dr\n";
        number_of_patints_in_specialization[n]--;
       string copyy_of_last_patient=names[n][copyy-1];
        string copyy_of_status_last_patient=statusarr[n][copyy-1];
        names[n][0]="";names[n][copyy-1]="";
        statusarr[n][0]="";statusarr[n][copyy-1]="";
        for(int i=0;i<copyy-2;i++)
        {
            names[n][i]=names[n][i+1];
            statusarr[n][i]=statusarr[n][i+1];
        }
        names[n][copyy-2]=copyy_of_last_patient;
        statusarr[n][copyy-2]=copyy_of_status_last_patient;
     }
     else
        cout<<"No patients at the moment , have rest Dr\n";

 }



int main()
{
    while(true)
    {
        show();
        int choice; cin>>choice;
         if(!(choice>=1 && choice<=4))
         {
             cout<<"invalid choice try again\n";
             show();
         }
         if(choice == 4)
            break;
         if(choice == 1)
            read();
         else if(choice == 2)
            print();
         else if(choice == 3)
         {
             cout<<"enter specialization: ";
             int n;cin>>n;
             get_next_patient(n);
         }
    }
    return 0;
}
