#include <iostream>

using namespace std;

int main()
{
  string name,id,name1,id1;
  int grade,grade1;
  cout<<"enter first student name: ";
  cin>>name;
  cout<<"first student id: ";
  cin>>id;
  cout<<"enter his math grade: ";
  cin>>grade;
  cout<<"\n enter second student name: ";
  cin>>name1;
  cout<<"second student id: ";
  cin>>id1;
  cout<<"enter his math grade: ";
  cin>>grade1;
  cout<<endl;
  cout<<"students grades in math:";
  cout<<name<<"with id "<<id<<" got grade :"<<grade;
  cout<<endl;
    cout<<name1<<" with id "<<id1<<" got grade :"<<grade1;
    int avg=(grade+grade1)/2;
    cout<<"average of grades = "<<avg;
    return 0;
}
