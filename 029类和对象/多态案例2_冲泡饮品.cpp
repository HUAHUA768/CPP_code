#include <iostream>
using namespace std;
//��ˮ  ���ݲ���  ���뱭��  ������
class AbstractDrinking
{
public:
	//��ˮ
	virtual void Boil() = 0;
	//����
	virtual void Brew() = 0;
	//���뱭��
	virtual void PourInCup() = 0;
	//����
	virtual void AddFlavoring() = 0;

	//�ϳɴ���Ʒ
	void MakeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		AddFlavoring();
	}
};
//��������
class Coffee :public AbstractDrinking
{
	void Boil()
	{
		cout << "��ˮ" << endl;
	}
	void Brew()
	{
		cout << "���ݿ��ȷ�" << endl;
	}
	void PourInCup()
	{
		cout << "�����մɱ���" << endl;
	}
	void AddFlavoring()
	{
		cout << "����ţ�̺ͷ���" << endl;
	}
};
//��������
class FruitTea:public AbstractDrinking
{
public:
	//��ˮ
	virtual void Boil()
	{
		cout << "���Ȫˮ" << endl;
	}
	//����
	virtual void Brew()
	{
		cout << "���ݲ�Ҷ" << endl;
	}
	//���뱭��
	virtual void PourInCup()
	{
		cout << "����豭��" << endl;
	}
	//����
	virtual void AddFlavoring()
	{
		cout << "�����ʼӽ��ճȼ�������" << endl;
	}
};

void doDrink(AbstractDrinking* abc)//AbstractDrinking* abc = new Coffee
{
	abc->MakeDrink();
	delete abc;
}
int main()
{
	doDrink(new Coffee);
	cout << "-------------" << endl;
	doDrink(new FruitTea);
	return 0;
}