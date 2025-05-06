#include <iostream>
using namespace std;
int main()
{
	//水仙花数，例如：1^3+5^3+3^3=153
	//算出三位数里所有的水仙花数
	int n = 100;
	int a = 0;
	int b = 0;
	int c = 0;
	int num = 0;
	do
	{
		a = n / 100;
		b = n / 10 % 10;
		c = n % 10;
		if (n == a*a*a+ b*b*b + c*c*c)
		{
			cout << n << endl;
			n++;
			num++;
		}
		else
		{
			n++;
		}
	} while (n < 1000);
	cout << "三位数中水仙花的数量为：" << num << endl;
	system("pause");
	return 0;
}