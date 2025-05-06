#include <iostream>
using namespace std;
int main()
{
	//break的三种用法
	//1.switch
	/*cout << "请选择副本难度" << endl;
	cout << "1.简单难度" << endl<<"2.普通难度" <<endl<< "3.困难难度"<<endl;
	int num = 0;
	cin >> num;
	switch (num)
	{
	case 1:cout << "您选择了简单难度" << endl;
		break;
	case 2:cout << "您选择了普通难度" << endl;
		break;
	case 3:	cout << "您选择了困难难度" << endl;
		break;
	}*/
	//2.for或while:输出一半满天星
	/*for (int i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			break;
		}

		for (int j = 0; j < 10; j++)
		{
			cout << "★ ";
		}
		cout << endl;
	}*/
	//3.
	system("pause");
	return 0;
}