#include <iostream>
using namespace std;
class base
{
public:
	base()
	{
		cout << "base构造函数" << endl;
	}
	~base()
	{
		cout << "base的析构函数" << endl;
	}

};
class son:public base
{
public:
	son()
	{
		cout << "son构造函数" << endl;
	}
	~son()
	{
		cout << "son析构函数" << endl;
	}
};
int main()
{
	son s1;
	
	
	return 0;
} 