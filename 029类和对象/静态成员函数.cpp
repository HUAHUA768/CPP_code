#include <iostream>
using namespace std;
class Person
{
public:
	
	//��̬��Ա����
	static int M;
	int N;
private:
	static void func()
	{
		M = 200;
		/*N = 300;*/
		cout << "��̬��Ա�����ĵ���" << endl;
	}
};

int Person::M = 100;
int main()
{
	//1.ͨ��������з���
	/*Person p1;
	p1.func();*/

	//2.ͨ���������з���
	Person::func();
	return 0;
}