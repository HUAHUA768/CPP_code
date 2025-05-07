#include <iostream>
using namespace std;
//不同零件封装成不同基类，各个厂商分别生产出不同子类Intel或Lenovo
//创建电脑类，写调用各个零件的函数，并调用每个零件工作的接口

//CPU抽象类和子类
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
	virtual void storage() = 0;//存储
};

//具体厂商
class IntelCPU :public CPU
{
	void Calculate()
	{
		cout << "Intel牌CPU开始计算" << endl;
	}
};
class IntelVideoCard :public VideoCard
{
	void display()
	{
		cout << "Intel牌显卡开始呈现画面" << endl;
	}
};
class IntelMemoryModule :public MemoryModule
{
	void storage()
	{
		cout << "Intel牌内存条开始运行程序" << endl;
	}
};

//Lenovo厂商
class LenovoCPU :public CPU
{
	void Calculate()
	{
		cout << "Lenovo牌CPU开始计算" << endl;
	}
};
class LenovoVideoCard :public VideoCard
{
	void display()
	{
		cout << "Lenovo牌显卡开始呈现画面" << endl;
	}
};
class LenovoMemoryModule :public MemoryModule
{
	void storage()
	{
		cout << "Lenovo牌内存条开始运行程序" << endl;
	}
};

class Computer
{
public:
	//初始化
	Computer(CPU* c, VideoCard* vc, MemoryModule* mem)
	{
		m_c = c;
		m_vc = vc;
		m_mem = mem;
		//父类指针指向子类对象
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
	//提供工作函数
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
	//第一台电脑
	cout << "第一台电脑" << endl;
	CPU* intelCpu = new IntelCPU;
	VideoCard* intelVC = new IntelVideoCard;
	MemoryModule* intelMem = new IntelMemoryModule;
	//可以在Computer的析构函数中释放这三块堆区空间

	Computer* c1 = new Computer(intelCpu, intelVC, intelMem);
	c1->dowork();
	delete c1;
	c1 = NULL;
	cout << endl << endl;   

	cout << "第二台电脑" << endl;
	Computer* c2 = new Computer(new LenovoCPU,new LenovoVideoCard,new LenovoMemoryModule);
	c2->dowork();
	delete c2;
	c2 = NULL;
	cout << endl << endl;

	cout << "第三台电脑" << endl;
	Computer* c3 = new Computer(new LenovoCPU, new IntelVideoCard, new LenovoMemoryModule);
	c3->dowork();
	delete c3;
	c3 = NULL;
	return 0;
}