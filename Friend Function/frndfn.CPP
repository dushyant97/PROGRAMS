#include<iostream>

using namespace std;

class sample
{
	private:
		int a,b;
	public:
		void getdata();
		void display();
		friend int inverse(sample s);
};
void sample::getdata()
{
	cout<<"Enter the value of a";
	cin>>a;
}
void sample::display()
{
	cout<<"The value of a is"<<a<<endl;
}

int inverse(sample s)
{
	s.b=-(s.a);
	return s.b;
}
int main()
{
	sample s;
	s.getdata();
	s.display();
	cout<<inverse(s);
}
