#include <iostream>
using namespace std;
class base
{
public:
	base()
	{
		cout << "base���캯��" << endl;
	}
	~base()
	{
		cout << "base����������" << endl;
	}

};
class son:public base
{
public:
	son()
	{
		cout << "son���캯��" << endl;
	}
	~son()
	{
		cout << "son��������" << endl;
	}
};
int main()
{
	son s1;
	
	
	return 0;
} 