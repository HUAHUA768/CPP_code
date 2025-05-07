#include <iostream>
using namespace std;
//���Բ�Ĺ�ϵ�������Բ�ľ��룬��뾶�Ƚ�
//���������ţ�����ͬʱƽ��
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
	//�뾶
	int r;
	//Բ��
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
		cout << "����Բ��" << endl;
	}
	else if (R_square > point_dest)
	{
		cout << "����Բ��" << endl;
	}
	else
	{
		cout << "����Բ��" << endl;
	}
}
int main()
{
	//��
	Point p;
	p.setX(5);
	p.setY(10);

	Circle c1;
	c1.setR(5);
	Point p1;
	//Բ��
	p1.setX(5);
	p1.setY(5);
	c1.setCenter(p1);
	Judge_Posi(p, c1);
	return 0;
}