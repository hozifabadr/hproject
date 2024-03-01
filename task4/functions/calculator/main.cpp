#include <iostream>

using namespace std;
void options()
{
    cout<<"1- Add two numbers"<<endl;
    cout<<"2- subtract two numbers"<<endl;
    cout<<"3-multiply two numbers"<<endl;
    cout<<"4- divide two numbers"<<endl;
    cout<<"5- end two numbers"<<endl;
}
double Add(double&n,double&n2)
{
  double result = n+n2;
    return result;
}
double subtract(double&n,double&n2)
{
  double result = n-n2;
    return result;
}
double Multiply(double n,double n2)
{
   double result = n*n2;
    return result;
}
double divide(double n,double n2)
{
     double result = n/n2;
     return result;
}
int main()
{
    options();
    int choice,cnt =0;
    while(true)
    {
      cout<<"your choice: ";
      cin>>choice;
     if(choice <1 || choice>5)
     {
        cout<<"error"<<endl;
        continue;
     }
     else if(choice == 5)
        break;
     else if(choice == 4)
        cout<<"cant divide by 0";
    double n,n1;
    cin>>n>>n1;
    if(choice == 1)
        cout<<Add(n,n1);
    else if(choice == 2)
        cout<<subtract(n,n1);
    else if(choice == 3)
        cout<<Multiply(n,n1);
    else if(choice == 4)
        cout<<divide(n,n1);

      cnt++;
    }
    cout<<"you have done "<<cnt<<" operations";
    return 0;
}
