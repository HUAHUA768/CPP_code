#include <iostream>
using namespace std;
#include <string>
template<class Nametype,class Agetype>
class Person
{
public:
	Nametype name;
	Agetype age;
	Person(Nametype name, Agetype age)
	{
		this->name = name;
		this->age = age;
	}
	void ShowPerson()
	{
		cout << "ĞÕÃû£º" << this->name << "\t" << "ÄêÁä£º" << this->age << endl;
	}
};
int main()
{
	Person<string, int>p1("ËïÎò¿Õ", 999);
	p1.ShowPerson();
	return 0;
}