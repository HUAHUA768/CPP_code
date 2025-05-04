#include <iostream>
using namespace std;
int main()
{
	int score = 0;
	cout << "请输入您的高考分数" << endl;
	cin >> score;
	cout << "侬的高考分数系" << score << endl;
	if (score >= 600)
	{
		if (score >= 700)
		{
			cout << "恭喜考上北大" << endl;
		}
		else if (score >= 650)
		{
			cout << "恭喜考上清华" << endl;
		}
		else
		{
			cout << "恭喜考上一本大学" << endl;
		}

	}
	else if (score >= 500)
	{
		cout << "恭喜考上二本大学" << endl;
	}
	else if (score >= 400)
	{
		cout << "三本大学也不错嘞" << endl;
	}
	else
	{
		cout << "很遗憾呀，要么明年再战，要么跟着原铁火农零玩家去大专当rapper喽" << endl;
	}
	system("pause");
	return 0;
}