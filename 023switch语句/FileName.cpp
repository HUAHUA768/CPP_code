#include <iostream>
using namespace std;
int main()
{
	//��switch������Ӱ���
	int score = 0;
	cout << "�����Ӱ���䷲�������" << endl;
	cin >> score;
	cout << "����ķ���Ϊ��" << score << endl;
	switch (score)
	{
	case 10:cout << "������񣬸�л֧��" << endl;
		break;
	case 9:cout << "������񣬸�л֧��" << endl;
		break;
	case 8:cout << "�ǳ��ÿ�����л֧��" << endl;
		break;
	case 7:cout << "�ǳ��ÿ�����л֧��" << endl;
		break;
	default:cout << "������������ģ�ĸ��������ˮ���ɣ�" << endl;
		break;
	}

	system("pause");
	return 0;
}