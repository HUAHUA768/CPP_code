#include <iostream>
using namespace std;
int main()
{
	int score = 0;
	cout << "���������ĸ߿�����" << endl;
	cin >> score;
	cout << "ٯ�ĸ߿�����ϵ" << score << endl;
	if (score >= 600)
	{
		if (score >= 700)
		{
			cout << "��ϲ���ϱ���" << endl;
		}
		else if (score >= 650)
		{
			cout << "��ϲ�����廪" << endl;
		}
		else
		{
			cout << "��ϲ����һ����ѧ" << endl;
		}

	}
	else if (score >= 500)
	{
		cout << "��ϲ���϶�����ѧ" << endl;
	}
	else if (score >= 400)
	{
		cout << "������ѧҲ������" << endl;
	}
	else
	{
		cout << "���ź�ѽ��Ҫô������ս��Ҫô����ԭ����ũ�����ȥ��ר��rapper�" << endl;
	}
	system("pause");
	return 0;
}