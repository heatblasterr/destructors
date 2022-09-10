// destructor called
#include<iostream>
using namespace std;
class area
{
	float pi;
	int r;
	float t;
	public:
		area()
		{
			pi=3.14;
			r=7;
		}
	void a()
	{
		t=pi*r*r;
		cout<<t;
	}
	~area()
	{ cout<<"destructor is";
	}
};
main()
{
	class area obj;
	obj.a();
}
