#include <iostream>
using namespace std;
int main()
{
	int score = 0;
	cout << "请输入林直播的高考分数" << endl;
	cin >> score;
	cout << "林纸币的高考分数为"<< score << endl;
	if (score > 532)
	{
		cout << "林纸币考上了一本" << endl;
	}
	else if (score > 453)
	{
		cout << "林执笔可以去读民办二本" << endl;
	}
	else
	{
		cout << "下头男没考上本科，要读专科，毕业去陪母零当rapper，不吃有文化的亏"<< endl;
	};
	system("pause");
	return 0;

}