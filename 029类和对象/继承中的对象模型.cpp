#include <iostream>
using namespace std;
class base
{
public:
	int a;
protected:
	int b;
private:
	int c;
};
class son :public base
{
public:
	int yy;
};
int main()
{
	son s1;
	cout << sizeof(s1) << endl;
	//16，说明父类的私有成员也继承了，只是无法访问
	return 0;
}