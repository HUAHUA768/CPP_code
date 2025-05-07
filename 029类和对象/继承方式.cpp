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
class son1:public base
{
	//公共继承
public:
	void func1()
	{
		a = 10;//父类的公共权限成员，到子类中依然是公共权限
		b = 10;//父类的保护权限成员，到子类中依然是保护权限
		/*c = 10;*///父类的私有权限成员，子类无法访问
	}
};

//保护继承
class son2:protected base
{
public:
	void func2()
	{
		a = 10;//父类的公共权限成员，到子类中是保护权限
		b = 10;//父类的保护权限成员，到子类中依然是保护权限
		//c = 10;//父类的私有权限成员，子类无法访问
	}
};

//私有继承
class son3 :private base
{
public:
	void func3()
	{
		a = 10;//父类公共，子类私有权限
		b = 10;//父类保护，子类私有权限
		//c = 10;//父类的私有成员无法继承
	}
};
int main()
{
	/*son1 s1;
	s1.a = 100;*/
	//s1.b = 100;//到son1中，b为保护权限，类外无法访问

	/*son2 s2;*/
	//s2.a = 100;//到son2中，a为保护权限，类外无法访问
	/*s2.b = 100; 到son2中，b为保护权限，类外无法访问*/

	//son3 s3;
	//s3.a = 100;//私有权限，类外不可访问
	//s3.b = 100;//私有权限，类外不可访问
	
	return 0;
}