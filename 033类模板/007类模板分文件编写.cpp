#include "Person.hpp"
#include <iostream>
using namespace std;
//类模板分文件编写的问题及其解决方法

int main()
{
	Person<string, int>p("大西", 20);
	p.ShowPerson();

	return 0;
}