#include <iostream>
using namespace std;
int main()
{
	int time = 0;
	cout << ("������nowmore�ж��ٸ�Сʱû�ظ�����Ϣ") << endl;
	cin >> time;
	cout << ("��ֽ�ҳ���") << time << ("��Сʱû�лظ���") << endl;
	if (time >= 24)
	{
		cout << ("��ֽ���ѱ�ĸ��ͬ������ĸ�����Ϸ���߻���ħ") << endl;
	}
	else
	{
		cout << ("��ֱ�����е�����") << endl;
	};

	system("pause");
	return 0;
}