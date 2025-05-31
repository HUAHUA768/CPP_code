#include <iostream>
using namespace std;
template <typename T>
void my_swap(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template<class T>
void func()
{
	cout << "func的调用" << endl;
}
int main()
{
	//1.自动类型推导，必须推导出一致的数据类型才可以使用
	int a = 10;
	int b = 20;
	/*my_swap(a, b);*/
	//正确
	/*cout << "a = " << a << endl;
	cout << "b = " << b << endl;*/

	char c = 'c';
	//my_swap(a, c);//错误，推导不出一致的T类型

	func<int>();//模板必须确定出T的数据类型，才可以使用
	return 0;
}