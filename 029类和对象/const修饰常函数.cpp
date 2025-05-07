#include <iostream>
using namespace std;
class Person
{
public:
	int a;
	mutable int b;
	void showPerson() const
	{
		/*a = 100;*/
		b = 100;
	}
	void func()
	{

	}
};
int main()
{

	const Person p;//≥£∂‘œÛ
	/*p.a = 100;*/
	p.b = 100;
	p.showPerson();
	p.func();
	return 0;
}