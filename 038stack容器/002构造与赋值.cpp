#include <iostream>
#include <stack>
using namespace std;
void test1()
{
	stack<int>s1;
	s1.push(10);
	s1.push(20);
	s1.push(30);
	s1.push(40);

	stack<int>s2(s1);//øΩ±¥ππ‘Ï
	/*while (s2.empty() != true)
	{
		cout << s2.top() << " ";
		s2.pop();
	}*/

	stack<int>s3;
	s3 = s1;
	while (s3.empty() != true)
	{
		cout << s3.top() << " ";
		s3.pop();
	}
}
int main()
{
	test1();
	return 0;
}