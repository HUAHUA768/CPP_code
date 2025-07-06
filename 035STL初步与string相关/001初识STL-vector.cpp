#include <iostream>
using namespace std;
//vector容器存放内置数据类型
#include <vector>
#include <algorithm>//标准算法头文件

void myPrint(int val)
{
	cout << val << endl;
}
int main()
{
	vector<int>v;
	//尾插法插入数据
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);


	////通过迭代器访问容器中的数据
	//vector<int>::iterator itBegin = v.begin();
	////起始迭代器，指向容器中第一个元素
	//vector<int>::iterator itEnd = v.end();
	////结束迭代器，指向容器中最后一个元素的下一个位置

	////第一种遍历方式
	//while (itBegin != itEnd)
	//{
	//	cout << *itBegin << endl;
	//	itBegin++;
	//}

	//第一种写法有点复杂，我们来看第二种遍历方式
	/*for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}*/

	//第三种遍历方式：STL提供的遍历算法
	//需要包含算法的头文件<algorithm>
	for_each(v.begin(),v.end(),myPrint);
	return 0;
}