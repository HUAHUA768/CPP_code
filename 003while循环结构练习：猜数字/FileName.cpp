#include <iostream>
using namespace std;
//��ΰ���ϵͳʱ��ͷ�ļ�
#include <ctime>
int main()
{
	//Ҫ�����������ӣ���ֹÿ���������ֶ�һ��
	srand((unsigned int)time(NULL));
	int num = 0;
	num = rand()%100 + 1;//����1~100������� 
	int n = 0;
	cout << "С��֭���������ְɣ�" << endl << "��������һ����Ȼ��" << endl;
	cin >> n;
	while (n != num)
	{
		if (n > num)
		{
			cout << "���µ�����̫��" << endl << "����������һ������" << endl;
			cin >> n;
		}
		else
		{
			cout << "���µ�����̫С" << endl << "����������һ������" << endl;
			cin >> n;
		}
	}
	cout << "��ϲ���¶���" << endl;

	system("pause");
	return 0;
}