#include <iostream>

using namespace std;

int main()
{
   int arr[1000];
   int n;
   cin>>n;
   for(int i=0; i<n; i++)
    cin>>arr[i];
    bool palindrome = true;
    for(int i=0;i<n/2;i++)
    {

        if(arr[i] != arr[n-i-1])
        {
            palindrome = false;
            break;
        }

    }
    if(palindrome)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
