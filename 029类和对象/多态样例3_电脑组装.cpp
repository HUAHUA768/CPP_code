#include <iostream>
using namespace std;
//��ͬ�����װ�ɲ�ͬ���࣬�������̷ֱ���������ͬ����Intel��Lenovo
//���������࣬д���ø�������ĺ�����������ÿ����������Ľӿ�

//CPU�����������
class CPU
{
public:
	virtual void Calculate() = 0;
};

class VideoCard
{
public:
	virtual void display() = 0;
};
class MemoryModule
{
public:
	virtual void storage() = 0;//�洢
};

//���峧��
class IntelCPU :public CPU
{
	void Calculate()
	{
		cout << "Intel��CPU��ʼ����" << endl;
	}
};
class IntelVideoCard :public VideoCard
{
	void display()
	{
		cout << "Intel���Կ���ʼ���ֻ���" << endl;
	}
};
class IntelMemoryModule :public MemoryModule
{
	void storage()
	{
		cout << "Intel���ڴ�����ʼ���г���" << endl;
	}
};

//Lenovo����
class LenovoCPU :public CPU
{
	void Calculate()
	{
		cout << "Lenovo��CPU��ʼ����" << endl;
	}
};
class LenovoVideoCard :public VideoCard
{
	void display()
	{
		cout << "Lenovo���Կ���ʼ���ֻ���" << endl;
	}
};
class LenovoMemoryModule :public MemoryModule
{
	void storage()
	{
		cout << "Lenovo���ڴ�����ʼ���г���" << endl;
	}
};

class Computer
{
public:
	//��ʼ��
	Computer(CPU* c, VideoCard* vc, MemoryModule* mem)
	{
		m_c = c;
		m_vc = vc;
		m_mem = mem;
		//����ָ��ָ���������
	}
	~Computer()
	{
		if (m_c != NULL)
		{
			delete m_c;
			m_c = NULL;
		}
		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;

		}
		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}
		
	}
	//�ṩ��������
	void dowork()
	{
		m_c->Calculate();
		m_vc->display();
		m_mem->storage(); 
	}
private:
	CPU* m_c;
	VideoCard* m_vc;
	MemoryModule* m_mem;
};
int main()
{
	//��һ̨����
	cout << "��һ̨����" << endl;
	CPU* intelCpu = new IntelCPU;
	VideoCard* intelVC = new IntelVideoCard;
	MemoryModule* intelMem = new IntelMemoryModule;
	//������Computer�������������ͷ�����������ռ�

	Computer* c1 = new Computer(intelCpu, intelVC, intelMem);
	c1->dowork();
	delete c1;
	c1 = NULL;
	cout << endl << endl;   

	cout << "�ڶ�̨����" << endl;
	Computer* c2 = new Computer(new LenovoCPU,new LenovoVideoCard,new LenovoMemoryModule);
	c2->dowork();
	delete c2;
	c2 = NULL;
	cout << endl << endl;

	cout << "����̨����" << endl;
	Computer* c3 = new Computer(new LenovoCPU, new IntelVideoCard, new LenovoMemoryModule);
	c3->dowork();
	delete c3;
	c3 = NULL;
	return 0;
}