#include <iostream>
using namespace std;
class Person
{
friend ostream& operator<<(ostream& cout, Person& p);
friend int main();
private:
	int a;
	int b;
};
ostream& operator<<(ostream& cout, Person& p)
{
	//���ú�������private�����ַ�����get��������Ԫ
	cout << p.a << " " << p.b;
	//operate<<(cout,p)  �� cout<<p;
	return cout;
}
int main()
{
	Person p;
	p.a = 20;
	p.b = 30;
	//main����Ҳ��������Ϊ��Ԫ
	cout << p<<endl;//����������������

	return 0;
}