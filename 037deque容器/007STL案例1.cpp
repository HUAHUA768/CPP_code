//案例1：评委打分
#include<iostream>
#include<deque>
#include<vector>
#include <string>
#include<algorithm>
#include<ctime>
using namespace std;
class Person
{
public:
	string name;
	int score;//平均分
	Person(string name, int score)
	{
		this->name = name;
		this->score = score;
	}
};
//选手放进vector，分数放进deque
void CreatePerson(vector<Person>& v)
{
	string NameSeed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "选手";
		name += NameSeed[i];
		int score = 0;
		Person p(name, score);
		v.push_back(p);
	}
}
void setScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		deque<int>d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;//60~100
			d.push_back(score);
		}
		sort(d.begin(),d.end());
		d.pop_back();
		d.pop_front();
		int sum = 0;
		for (deque<int>::iterator it1=d.begin();it1!=d.end();it1++)
		{
			sum += (*it1);
		}
		int avg = sum / d.size();
		it->score = avg;
		//(*it).score = avg;
	}
}
void PrintResult(const vector<Person>& v)
{
	for (vector<Person>::const_iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名：" << (*it).name << "\t分数：" << (*it).score << endl;
	}
}

int main()
{
	//随机数种子
	srand((unsigned int)time(NULL));
	//1.创建五名选手
	vector<Person>v;
	CreatePerson(v);

	//2.给五人打分
	setScore(v);

	//3.显示得分
	PrintResult(v);
	return 0;
}