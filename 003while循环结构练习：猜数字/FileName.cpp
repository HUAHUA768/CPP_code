#include <iostream>
using namespace std;
//如何包含系统时间头文件
#include <ctime>
int main()
{
	//要添加随机数种子，防止每次生成数字都一样
	srand((unsigned int)time(NULL));
	int num = 0;
	num = rand()%100 + 1;//生成1~100的随机数 
	int n = 0;
	cout << "小伙汁，来猜数字吧！" << endl << "请你输入一个自然数" << endl;
	cin >> n;
	while (n != num)
	{
		if (n > num)
		{
			cout << "您猜的数字太大" << endl << "请重新输入一个数字" << endl;
			cin >> n;
		}
		else
		{
			cout << "您猜的数字太小" << endl << "请重新输入一个数字" << endl;
			cin >> n;
		}
	}
	cout << "恭喜您猜对了" << endl;

	system("pause");
	return 0;
}