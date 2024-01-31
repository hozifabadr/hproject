#include <iostream>

using namespace std;

int main()
{
    	int a = 10, b = 20, c = 30, d = 40;

	cout << (a + b == c) << "\n";//20+30=50==50 true /output= 1
	cout << (a + b + c >= 2 * d) << "\n";//false output=0

	cout << (a > 5 || d < 30) << "\n";//true output=1
	cout << (a > 5 && d < 30) << "\n";//false output=0
	cout << (a <= b && b <= c) << "\n";//true output=1

	cout << (a > 5 && d < 30 || c - b == 10) << "\n";//true output=1
	cout << (a <= b && b <= c && c <= d) << "\n";//true output=1

	cout << (a > 5 && d < 30 || c > d || d % 2 == 0) << "\n";//true output=1
	cout << (a > 5 && d < 30 || c > d && d % 2 == 0) << "\n";//false output=0

	cout << ( a == 10 || b != 20  && c != 30 || d != 40) << "\n";//true output=1
	cout << ((a == 10 || b != 20) && c != 30 || d != 40) << "\n";//false output=0
    return 0;
}
