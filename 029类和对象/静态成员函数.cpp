#include <iostream>
using namespace std;
class Person
{
public:
	
	//静态成员变量
	static int M;
	int N;
private:
	static void func()
	{
		M = 200;
		/*N = 300;*/
		cout << "静态成员函数的调用" << endl;
	}
};

int Person::M = 100;
int main()
{
	//1.通过对象进行访问
	/*Person p1;
	p1.func();*/

	//2.通过类名进行访问
	Person::func();
	return 0;
}