#include <iostream>
using namespace std;
class Person 
{
public:
	void showname()
	{
		cout << "this is class Person" << endl;
	}
	int age;
	void showAge()
	{
		if (this == NULL)
		{
			return;
		}
		cout << "age = " << age << endl;
	}

};
int main()
{
	Person* p = NULL;
	/*p->showname();*/
	p->showAge();
	return 0;
}