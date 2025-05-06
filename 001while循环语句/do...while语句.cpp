#include <iostream>
using namespace std;
int main()
{
	//输出0~9
	int n = 0;
	do
	{
		cout << n << endl;
		n++;
	} while (n < 10);
	//问：如何产生死循环？
	//while(n)即可
	system ("pause");
	return 0;
}