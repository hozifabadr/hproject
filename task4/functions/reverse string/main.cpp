#include <iostream>
#include <bits/stdc++.h>
#include<string>
using namespace std;
string reverse(string str)
{
  string str2 = str;
  int c=0,n = (int) str.size()-1;
  while(c<n)
  {
      char temp = str2[n];
      str2[n] = str2[c];
      str2[c] = temp;
      c++,n--;
  }
  return str2;
}
int main()
{
   cout<< reverse("hozifa");
    return 0;
}
