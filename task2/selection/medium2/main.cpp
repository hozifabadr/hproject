#include <iostream>

using namespace std;

int main()
{
    int n,a;

    int big;
    cin>>n;//number of values;
    int i=1; //counter
      if(i<=n){i++;  cin>>a;  big=a;}
        if(i<=n){i++;  cin>>a; if(a>big) {big=a;}
        if(i<=n){i++;  cin>>a; if(a>big) { big=a;} }
        if(i<=n){i++;  cin>>a;  if(a>big) { big=a;} }
        if(i<=n){i++;  cin>>a;   if(a>big) { big=a;}}
        if(i<=n){i++;  cin>>a;   if(a>big) { big=a;}}
        if(i<=n){i++;  cin>>a;   if(a>big) { big=a;}}
        if(i<=n){i++;  cin>>a;   if(a>big) { big=a;}}
        if(i<=n){i++;  cin>>a;   if(a>big) { big=a;}}
        if(i<=n){i++;  cin>>a;   if(a>big) { big=a;}}


    cout<<big;
    return 0;
}
}
