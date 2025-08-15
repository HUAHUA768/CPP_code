#include <iostream>
#include <map>
#include <vector>
#include <ctime>
#include <string>
using namespace std;
class Worker
{
public:
	string name;
	int salary;
};
void CreateWorker(vector<Worker>& v)
{
	string Nseed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		Worker w;
		w.name = "员工";
		w.name += Nseed[i];
		w.salary = rand() % 10000 + 10000;//10000~199999
		v.push_back(w);
	}
}
//移v至m
void SetGroup(vector<Worker>& v, multimap<int, Worker>& m)
{
	//遍历v并随机产生分组数字，插入m中
	for (auto it = v.begin(); it != v.end(); it++)
	{
		//随机分组数字
		int num = rand() % 3 + 1;//1~3
		m.insert(make_pair(num, (*it)));
	}
}
//分组显示员工
void ShowWorkerByGroup(const multimap<int, Worker>& m)
{
	cout << "策划部门" << endl;
	auto pos = m.find(1);
	int num = m.count(1);
	int index = 0;
	for (; pos != m.end() && index < num; pos++, index++)
	{
		cout << "姓名：" << pos->second.name << "\t\t工资：" << pos->second.salary << endl;
	}
	cout << "--------------------------------------"<<endl;

	cout << "美术部门" << endl;
	num = m.count(2);
	index = 0;
	for (pos = m.find(2); pos != m.end() && index < num; pos++, index++)
	{
		cout << "姓名：" << pos->second.name << "\t\t工资：" << pos->second.salary << endl;
	}
	cout << "--------------------------------------" << endl;

	cout << "研发部门" << endl;
	num = m.count(3);
	index = 0;
	for (pos = m.find(3); pos != m.end() && index < num; pos++, index++)
	{
		cout << "姓名：" << pos->second.name << "\t\t工资：" << pos->second.salary << endl;
	}
	cout << "--------------------------------------" << endl;
}
int main()
{
	//随机数种子
	srand((unsigned int)time(NULL));
	//1.创建员工
	vector<Worker>v;
	CreateWorker(v);

	//2.员工分组
	multimap<int, Worker>m;
	SetGroup(v,m);

	//3.分组显示员工
	ShowWorkerByGroup(m);
	return 0;
}