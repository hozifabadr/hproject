#include <iostream>

using namespace std;

int main()
{
    int days,years,months,rdays;
    cout<<"enter number of days: ";
    cin>>days;
    years=days/360;
    months = (days % 360)/30;
    rdays = days - (years * 360 + months * 30);
    cout<<"number of years = "<<years<<"\n";
    cout<<"number of months = "<<months<<"\n";
    cout<<"number of days = "<<rdays;

    return 0;
}
