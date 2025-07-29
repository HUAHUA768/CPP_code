#include <iostream>
#include <stack>
using namespace std;
void test1()
{
	stack<int>s;
	//入栈
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);

	while (s.empty() != 1)
	{
		//查看栈顶元素
		cout <<"栈顶元素为："<< s.top() << endl;
		s.pop();//出栈
	}
	cout << "栈的大小为：" << s.size() << endl;
}
int main()
{
	test1();
	return 0;
}