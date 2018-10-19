#include<iostream>

using namespace std;

class point
{
	private:
		int x,y;
	public: 
		point()
		{
			x=0,y=0;
		}
		void getdata(int a,int b)
		{
			x=a;
			y=b;
		}
		void display()
		{
			cout<<endl<<x;
			cout<<endl<<y;
		}
};

int main()
{
	point p1,*p2;
	cout<<"The values of p1 are:";
	p1.getdata(10,20);
	p1.display();
	p2=&p1;
	cout<<"\nThe values of p1 have been updated by p2 pointer, so new values of p1 are:";
	p2->getdata(50,100);
	p2->display();
}

