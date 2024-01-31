#include <iostream>

using namespace std;

int main()
{
    int n1,n2,n3,n4,n5;
    double average2,average3,average,sum,sum3,sum2;
    cout<<"enter five numbers: ";
    cin>>n1>>n2>>n3>>n4>>n5;
    sum=n1+n2+n3+n4+n5;
    average=sum/5;
    sum3=n1+n2+n3;
    average3=sum3/3;
    sum2=n4+n5;
    average2=sum2/2;
    cout<<"the average of all numbers = "<<average<<"\n";
    cout<<sum3/sum2<<"\n";
    cout<<average3/average2<<"\n";
    //c=2/3 * b;


    return 0;
}
