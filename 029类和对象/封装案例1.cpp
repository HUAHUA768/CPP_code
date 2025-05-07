//分别利用全局函数和成员函数判断两个长方体是否相等
//由于长宽高可以是6 5 5和5 5 6，故无法根据长宽高判断
//我们用体积和面积是否都相等来判断
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
	//写入
	void Setwide(int w)
	{
		wide = w;
	}
	//读取
	int getWide()
	{
		return wide;
	}
	//写入
	void Setlong(int l)
	{
		len = l ;
	}
	//读取
	int getlong()
	{
		return len;
	}
	//写入
	void Setheigh(int h)
	{
		height = h;
	}
	//读取
	int getHeight()
	{
		return height;
	}
	//表面积
	int CalculateS()
	{
		return 2 * wide * len + 2 * wide * height + 2 * len * height;
	}
	//体积
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
		cout << "相同" << endl;

	}
	else
	{
		cout << "不相同" << endl;
	}
	return 0;
}