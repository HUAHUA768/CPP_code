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
		living_room = "����";
		bedroom = "����";
	}
private:
	string bedroom;
};
void goodguy(buliding* p)
{
	cout << "���������ڷ��ʣ� " << p->living_room << endl;
	cout << "���������ڷ��ʣ� " << p->bedroom << endl;

}
int main()
{
	buliding p;
	goodguy(&p);

	return 0;
}
