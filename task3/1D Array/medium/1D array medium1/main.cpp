#include <iostream>

using namespace std;

int main()
{
    int n;
    int min1=INT_MAX,min2=INT_MAX,min3=INT_MAX;
      int pos_min1 = 0,pos_min2=0,pos_min3=0;
    cin>>n;
    if(n<3)
        cout<<"must be more or equal three";
    else
    {
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];

        for(int i=0;i<n;i++)
        {

            if(arr[i]<min1)
            {
                min1 = arr[i];
                pos_min1 = i;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(i == pos_min1)
            {
             continue;
            }
            else
            {
                   if(arr[i]<min2 && arr[i]>min1)
                   {
                    min2 = arr[i];
                    pos_min2=i;
                   }
            }
        }
        for(int i =0;i<n;i++)
        {
            if(i == pos_min1 || i == pos_min2)
            {
               continue;
            }
            else
                 if(arr[i]>min1 && arr[i]>min2)
                {
                    min3 = arr[i];
                    pos_min3 = i;
                }
        }
    }
    cout<<min1<<" "<<min2<<" "<<min3;
    return 0;
}
