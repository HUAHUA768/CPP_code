#include <iostream>
using namespace std;
//��ģ����̳�
template<class T>
class Base
{
public:
	T m;
};
/*class Son :public Base*///���󣬱���Ҫ֪��������T�����Ͳ��ܼ̳и�����
class Son:public Base<int>
{

};

//��������ָ��������T�����ͣ���ô����Ҳ��Ҫ�����ģ��
template<class T1,class T2>
class Son2 :public Base<T2>
{
public:
	T1 obj;
	Son2()
	{
		cout << "T1������Ϊ��" << typeid(T1).name() << endl;
		cout << "T2������Ϊ��" << typeid(T2).name() << endl;
	}
};


//void test01()
//{
//	Son s1;
//}

void test02()
{
	Son2<int, char>S2;
}
int main()
{
	test02();
	return 0;
}