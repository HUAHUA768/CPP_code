#include <iostream>
using namespace std;
int main()
{
	int score = 0;
	cout << "��������ֱ���ĸ߿�����" << endl;
	cin >> score;
	cout << "��ֽ�ҵĸ߿�����Ϊ"<< score << endl;
	if (score > 532)
	{
		cout << "��ֽ�ҿ�����һ��" << endl;
	}
	else if (score > 453)
	{
		cout << "��ִ�ʿ���ȥ��������" << endl;
	}
	else
	{
		cout << "��ͷ��û���ϱ��ƣ�Ҫ��ר�ƣ���ҵȥ��ĸ�㵱rapper���������Ļ��Ŀ�"<< endl;
	};
	system("pause");
	return 0;

}