#include <iostream>
using namespace std;
int main()
{
	int a = 10;
	int b = 3;
	cout << a % b << endl;
	//取模时除数不可为0
	//小数之间不可取模
	int c = 3.14;
	int d = 2;
	cout << c % d << endl;

	system("pause");
	return 0;
}