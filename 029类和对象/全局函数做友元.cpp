#include <iostream>
using namespace std;
#include <string>
class buliding
{
	friend void goodguy(buliding* p);
public:
	string living_room;
	buliding()
	{
		living_room = "客厅";
		bedroom = "卧室";
	}
private:
	string bedroom;
};
void goodguy(buliding* p)
{
	cout << "好朋友正在访问： " << p->living_room << endl;
	cout << "好朋友正在访问： " << p->bedroom << endl;

}
int main()
{
	buliding p;
	goodguy(&p);

	return 0;
}
