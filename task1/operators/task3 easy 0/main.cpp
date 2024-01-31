#include <iostream>

using namespace std;

int main()
{

    int a = 0, b = 1;

	cout<<a++<<"\n";//0
	cout<<++a<<"\n";//2
	a += 2*b+1;//5
	b = ++a * 2;//12
	cout<<a<<" "<<b<<"\n";//6 12

	b = a;//6
	a = 12 + a / 3 / 2 - 2 * 2;//12+1-4=9
	cout<<a<<"\n";//9

	a = b;//6
	a = ((12 + a) / 3 / 2 - 2) * 2;//18/3/2-2=6/2-2=3-2=1*2=2
	cout<<a<<"\n";//1
	//easy second

	int a = 1, b = 1, c;

	cout<<(c = a+b, a = b, b = c,
		   c = a+b, a = b, b = c,
		   c = a+b, a = b, b = c,
		   c = a+b, a = b, b = c) <<endl;
		   //c=8,a=5,b=8
    return 0;

    //easy third
    	int a = 210;

	a /= 2;//105
	cout<<a<<"\n";

	cout<<(a /= 3)<<"\n";//35
	cout<<(a /= 5)<<"\n";//7
	cout<<(a /= 7)<<"\n";//1

	cout<<(2+3) * (5-(-3)) / 5 / 8 <<"\n";//5*8/5/8=8/8=1

	a = 10;
	cout<<a++ + 10<<"\n";//20
	cout<<++a + 10<<"\n";//22
	cout<<a-- + 10<<"\n";//22
	cout<<--a + 10<<"\n";//20

	int b = 20;//a=10,b=20
	cout<<a++ + ++b<<"\n";	//10+21=31

	cout<<a<<"\n";//11
	++a+=10;	// 12+10=22
	cout<<a<<"\n";//22

}
