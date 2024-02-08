#include <iostream>

using namespace std;

int main()
{
    int s1,e1,s2,e2;
    cin>>s1>>e1>>s2>>e2;
    if(s1<=s2 && s2<=e1)
    {
        if(e1<=e2)
            cout<<"["<<s2<<","<<e1<<" ]";
        else
            cout<<"["<<s2<<","<<e2<<" ]";
    }
    else if(s2<=s1 && s1<=e2)
    {
        if(e1<=e2)
            cout<<"["<<s1<<","<<e1<<" ]";
        else
            cout<<"["<<s1<<","<<e2<<" ]";

    }
    else
        cout<<"-1";
    return 0;
}
