#include<iostream>

using namespace std;

class sample
{
	private:
		int x;
	public:
		sample()
		{
			x=0;
		}
		sample(int a)
		{
			x=a;
		}
		sample(sample &t)
		{
			x=t.x;
		}
		void display()
		{
			cout<<x;
		}
};

int main()
{
	sample s(45);
	sample q(s);
	sample r=q;
	sample b;
	b=r;
	cout<<"\nthe value of s";
	s.display();
	cout<<"\nthe value of q";
	q.display();
	cout<<"\nthe value of r";
	r.display();
	cout<<"\nthe value of b";
	b.display();
}
