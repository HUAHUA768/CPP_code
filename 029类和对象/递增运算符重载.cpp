#include <iostream>
using namespace std;
class Person
{
public:
	Person()
	{
		my_int = 0;
	}
	int getmy_int() const
	{
		return my_int;
	}
	//���ص��������
	//����ǰ��++�����
	Person& operator++()
	{
		my_int++;
		return *this;
	}

	//���غ���++�����
	//�����㺯������������������int
	Person operator++(int)
	{
		Person tmp = *this;
		my_int++;
		return tmp;
	}
private:
	int my_int;
};
ostream& operator<<(ostream& cout, const Person& p)
{
	cout << p.getmy_int();
	return cout;
}
int main()
{
	Person p;
	/*cout << ++(++p) << endl;
	cout << p << endl;*/

	cout << p++ << endl;
	cout << p << endl;
	return 0;
}