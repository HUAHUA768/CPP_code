#include "Person.hpp"
#include <iostream>
using namespace std;
//��ģ����ļ���д�����⼰��������

int main()
{
	Person<string, int>p("����", 20);
	p.ShowPerson();

	return 0;
}