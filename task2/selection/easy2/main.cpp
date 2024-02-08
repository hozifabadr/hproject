#include <iostream>

using namespace std;

int main()
{
    int n1,n2,n3,second,third;
    cin>>n1>>n2>>n3;
    if(n1<n2&&n1<n3)
    {
        cout<<n1<<" ";
        if(n2<n3)
        {
            second=n2;
            third=n3;
        }
        else
            {
                second=n3;
                third=n2;
            }
            cout<<second<<" ";
            cout<<third;
    }
      else if(n2<n1&&n2<n3)
    {
        cout<<n2<<" ";
        if(n1<n3)
        {
            second=n1;
            third=n3;
        }
        else
            {
                second=n3;
                third=n1;
            }
            cout<<second<<" ";
            cout<<third;
    }
          else if(n3<n1&&n3<n2)
    {
        cout<<n3<<" ";
        if(n2<n1)
        {
            second=n2;
            third=n1;
        }
        else
            {
                second=n1;
                third=n2;
            }
            cout<<second<<" ";
            cout<<third;
    }


    return 0;
}
//another solution
/*
#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int a,b,c,temp;
    cin>>a>>b>>c;
    if(n1>n2)
    {
        temp=a;
        a=b;
        b=temp;
    }
    if(b>c)
    {
        temp=b;
        b=c;
        c=temp;
    }
    if(a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }

        cout<<a<<" "<<b<<" "<<c;





    return 0;
}*/

