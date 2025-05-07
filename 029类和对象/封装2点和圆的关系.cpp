#include <iostream>
using namespace std;
//点和圆的关系：算点与圆心距离，与半径比较
//跳过开根号：两边同时平方
class Point
{
private:
	int x;
	int y;
public:
	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}
	void setX(int X)
	{
		x = X;
	}
	void setY(int Y)
	{
		y = Y;
	}
};
class Circle
{
private:
	//半径
	int r;
	//圆心
	Point center;
public:
	int getR()
	{
		return r;
	}
	void setR(int R)
	{
		r = R;
	}
	void setCenter(const Point& c)
	{
		center = c;
	}
	Point getCenter()
	{
		return center;
	}

};

//is_InCircle
void Judge_Posi(Point& p, Circle c)
{
	int R_square = c.getR() * c.getR();
	int point_dest = (p.getX() - c.getCenter().getX()) *
		(p.getX() - c.getCenter().getX()) +
		(p.getY() - c.getCenter().getY()) *
			(p.getY() - c.getCenter().getY());
	if (R_square == point_dest)
	{
		cout << "点在圆上" << endl;
	}
	else if (R_square > point_dest)
	{
		cout << "点在圆内" << endl;
	}
	else
	{
		cout << "点在圆外" << endl;
	}
}
int main()
{
	//点
	Point p;
	p.setX(5);
	p.setY(10);

	Circle c1;
	c1.setR(5);
	Point p1;
	//圆心
	p1.setX(5);
	p1.setY(5);
	c1.setCenter(p1);
	Judge_Posi(p, c1);
	return 0;
}