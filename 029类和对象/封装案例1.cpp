//�ֱ�����ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����
//���ڳ���߿�����6 5 5��5 5 6�����޷����ݳ�����ж�
//���������������Ƿ�������ж�
#include <iostream>
using namespace std;
#include <string>
class Cube
{
private:
	int wide;
	int len;
	int height;
public:
	//д��
	void Setwide(int w)
	{
		wide = w;
	}
	//��ȡ
	int getWide()
	{
		return wide;
	}
	//д��
	void Setlong(int l)
	{
		len = l ;
	}
	//��ȡ
	int getlong()
	{
		return len;
	}
	//д��
	void Setheigh(int h)
	{
		height = h;
	}
	//��ȡ
	int getHeight()
	{
		return height;
	}
	//�����
	int CalculateS()
	{
		return 2 * wide * len + 2 * wide * height + 2 * len * height;
	}
	//���
	int calculateV()
	{
		return wide * height * len;
	}
};
bool isSame(Cube& c1, Cube& c2)
{
	if (c1.CalculateS() == c2.CalculateS() && c1.calculateV()
		== c2.calculateV())
	{
		return true;
	}
	else
		return false;
}
int main()
{
	Cube c1;
	Cube c2;
	c1.Setwide(5);
	c1.Setlong(5);
	c1.Setheigh(6);
	c2.Setwide(6);
	c2.Setlong(5);
	c2.Setheigh(5);
	bool ret = isSame(c1, c2);
	if (ret)
	{
		cout << "��ͬ" << endl;

	}
	else
	{
		cout << "����ͬ" << endl;
	}
	return 0;
}