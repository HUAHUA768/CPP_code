#include <iostream>
using namespace std;
int main()
{
	//单行if语句
	int score = 0;
	cout << "请输入您的分数" << endl;
	cin >> score;
	cout << "您的高考分数为：" << score << endl;
	if (score > 600)
	{
		cout << "恭喜恭喜恭喜你" << endl;
	}
	system("pause");
	return 0;
}