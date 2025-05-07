#include <iostream>
using namespace std;

//普通实现（每个类各写各的属性）
//class JAVA
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册（公共头部）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图（公共底部）" << endl;
//	}
//	void left()
//	{
//		cout << "JAVA、Python、C++...（公共分类列表）" << endl;
//	}

//};
//
//class Python
//{

//	void content()
//	{
//		cout << "Python学科视频" << endl;
//	}
//};
//两个类只有内容不一样
//我们用继承的写法减少重复代码

//公共页面类
class BasePage
{
public:
	void header()
	{
		cout << "首页、公开课、登录、注册（公共头部）" << endl;
	}
	void footer()
	{
		cout << "帮助中心、交流合作、站内地图（公共底部）" << endl;
	}
	void left()
	{
		cout << "JAVA、Python、C++...（公共分类列表）" << endl;
	}
};
class JAVA :public BasePage
{
public:
	void content()
	  {
		 cout << "JAVA学科视频" << endl;
	  }
};
class Python :public BasePage
{
public:
	void content()
	{
		cout << "Python学科视频" << endl;
	}
};
class CPP :public BasePage
{
public:
	void content()
	{
		cout << "C++学科视频" << endl;
	}
};
int main()
{
	cout << "JAVA页面" << endl;
	JAVA p1;
	p1.header();
	p1.footer();
	p1.left();
	p1.content();
	cout << endl;
	cout << "Python页面" << endl;
	Python p2;
	p2.header();
	p2.footer();
	p2.left();
	p2.content();


	return 0;
}