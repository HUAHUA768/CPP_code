#include <iostream>
using namespace std;
#include <string>
void test1()
{
	string str1 = "dsfasrgdaabcfedgyh";
	int pos = str1.find('f', 0);
	//也可以省略0，因为起始位置默认为0
	cout << "f第一次出现的位置：" << pos << endl;

	pos = str1.find("abc");//若没有，返回-1
	
	cout << "abc第一次出现的位置：" << pos << endl;


	pos = str1.find("fas", 0, 2);
	cout << "fas的前两位第一次出现的位置：" << pos << endl;

	string str2 = "fed";
	pos = str1.find(str2, 0);
	cout << "字符串str2第一次出现的位置：" << pos << endl;


}

void test2()
{
	string str1 = "abcggabc";
	int pos = str1.rfind("abc");
	//找到abc最后一次出现的位置
	cout << "pos = " << pos << endl;

}

//替换操作
void test3()
{
	string str1 = "abcdef";
	string str2 = "big west";
	/*str1.replace( 0, 2, "smwtr");*/
	str1.replace(1, 3, str2);
	cout << str1 << endl;
}
int main()
{
	/*test1();*/
	/*test2();*/
	test3();
	return 0;
}