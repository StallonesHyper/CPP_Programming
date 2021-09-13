#include<iostream>
#include<conio.h>
using namespace std;
class alpha
{
	int x;
	public:
		alpha(int i)
		{
			x=i;//5
			cout<<"alpha initialized\n";
		}
		void show_x()
		{
			cout<<"x="<<x<<"\n";
		}
};
class gamma : public alpha
{
	int m;
	public:
		gamma(int a):alpha(a)
		{
			m=a;//5
			cout<<"gamma initialized\n";
		}
		void show_mn()
		{
			cout<<"m="<<m<<"\n";
		
		}
};

int main()
{
	gamma g(5);
	g.show_x();
	g.show_mn();
	return 0;
}
