#include <iostream>
using namespace std;
int main()
{
	//用switch语句给电影打分
	int score = 0;
	cout << "请给电影《落凡尘》打分" << endl;
	cin >> score;
	cout << "您打的分数为：" << score << endl;
	switch (score)
	{
	case 10:cout << "经典封神，感谢支持" << endl;
		break;
	case 9:cout << "经典封神，感谢支持" << endl;
		break;
	case 8:cout << "非常好看，感谢支持" << endl;
		break;
	case 7:cout << "非常好看，感谢支持" << endl;
		break;
	default:cout << "你这评分认真的？母零请来的水军吧？" << endl;
		break;
	}

	system("pause");
	return 0;
}