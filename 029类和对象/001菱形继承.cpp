#include <iostream>
using namespace std;
class Animal
{
public:
	int age;
};
class Sheep :public virtual Animal
{

};
class Camel :public virtual Animal
{

};
class Alpaca :public Sheep, public Camel
{

};
int main()
{
	Alpaca a1;
	a1.Sheep::age = 100;
	a1.Camel::age = 200;
	cout << a1.Sheep::age << endl;
	cout << a1.Camel::age << endl;

	cout << "a1.age = " << a1.age << endl;
	return 0;
}