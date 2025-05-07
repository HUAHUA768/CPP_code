#include <iostream>
using namespace std;
//煮水  冲泡材料  倒入杯中  加佐料
class AbstractDrinking
{
public:
	//煮水
	virtual void Boil() = 0;
	//冲泡
	virtual void Brew() = 0;
	//倒入杯中
	virtual void PourInCup() = 0;
	//加料
	virtual void AddFlavoring() = 0;

	//合成大饮品
	void MakeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		AddFlavoring();
	}
};
//制作咖啡
class Coffee :public AbstractDrinking
{
	void Boil()
	{
		cout << "煮水" << endl;
	}
	void Brew()
	{
		cout << "冲泡咖啡粉" << endl;
	}
	void PourInCup()
	{
		cout << "倒入陶瓷杯中" << endl;
	}
	void AddFlavoring()
	{
		cout << "加入牛奶和方糖" << endl;
	}
};
//制作果茶
class FruitTea:public AbstractDrinking
{
public:
	//煮水
	virtual void Boil()
	{
		cout << "煮矿泉水" << endl;
	}
	//冲泡
	virtual void Brew()
	{
		cout << "冲泡茶叶" << endl;
	}
	//倒入杯中
	virtual void PourInCup()
	{
		cout << "倒入茶杯中" << endl;
	}
	//加料
	virtual void AddFlavoring()
	{
		cout << "加柠檬加今日橙加葡萄糖" << endl;
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