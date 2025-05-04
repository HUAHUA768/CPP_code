#include <iostream>
using namespace std;
int main()
{
	int time = 0;
	cout << ("请输入nowmore有多少个小时没回复你消息") << endl;
	cin >> time;
	cout << ("林纸币持续") << time << ("个小时没有回复你") << endl;
	if (time >= 24)
	{
		cout << ("林纸币已被母零同化，跟母零打游戏到走火入魔") << endl;
	}
	else
	{
		cout << ("林直播还有点人性") << endl;
	};

	system("pause");
	return 0;
}