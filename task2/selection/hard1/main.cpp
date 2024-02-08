#include <iostream>

using namespace std;

int main()
{
    int s1,e1,s2,e2,s3,e3,n,cnt=0;
    cout<<"enter first interval: ";
    cin>>s1>>e1;
    cout<<"enter second interval: ";
    cin>>s2>>e2;
    cout<<"enter third interval: ";
    cin>>s3>>e3;
    cout<<"enter number: ";
    cin>>n;
    if(n>=s1 && n<=e1)
        cnt += 1;
    if(n>=s2 && n<=e2)
       cnt += 1;
    if(n>=s3 && n<=e3)
        cnt += 1;
    cout<<cnt;

    return 0;
}
