#include <iostream>
using namespace std;
int main()
{
	//�����ַ��ͱ���
	char ch = 'a';//�����˵�����
	cout << ch << endl;
	//�ַ��ͱ�����ռ�ڴ��С
	cout << sizeof(char) << endl;

	//�ַ���ת����(ASCII����)
	cout << (int)ch << endl;
	//����A��ASCII��
	char ch2 = 'A';
	cout << (int)ch2 << endl;
	system("pause");
	return 0;


}