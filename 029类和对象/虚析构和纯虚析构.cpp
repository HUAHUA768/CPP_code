#include <iostream>
using namespace std;
#include <string>
class Animal
{
public:
	Animal()
	{
		cout << "Animal构造函数的调用" << endl;
	}
	/*virtual ~Animal()
	{
		cout << "Animal析构函数的调用" << endl;
	}*/
	virtual ~Animal() = 0;
	//纯虚析构，需要声明，也需要实现
	virtual void speak() = 0;
};
Animal::~Animal()
{
	cout << "Animal纯虚析构函数的调用" << endl;
}

class Cat :public Animal
{
public:
	virtual void speak()
	{
		cout <<*name<< "小猫牢第怎么叫" << endl;
		
	}
	Cat(string name)
	{
		cout << "Cat构造函数的调用" << endl;
		this->name = new string(name);
		/*  *this->name = name;*/
		//应当在析构函数中释放堆区的内存
	}
	string* name;//在堆区上面创建成员变量，父类的析构函数是无法释放这一块
	//内存的
	~Cat()
	{
		cout << "Cat析构函数的调用" << endl;
		if (name != NULL)
		{
			delete name;
			name = NULL;
		}
	}
};
int main()
{
	Animal* abc = new Cat("Coke");
	abc->speak();
	delete abc;

	//有了纯虚析构后，这个类也属于抽象类，也无法实例化对象
	return 0;
}