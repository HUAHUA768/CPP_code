#include "order_file.h"
Order_File::Order_File()
{
	ifstream ifs(ORDER_FILE,ios::in);
	if (!ifs.is_open())
	{
		cout << "文件不存在" << endl;
	}
	string date;
	string interval;//时间段
	string stuID;
	string stuName;
	string roomID;
	string status;
	this->m_size = 0;
	while (ifs >> date && ifs >> interval && ifs >> stuID && ifs >> stuName && ifs >> roomID
		&& ifs >> status)
	{
		//读到的是date:1  需要进行分割
		/*cout << date << endl;
		cout << interval << endl;
		cout << stuID << endl;
		cout << stuName << endl;
		cout << roomID << endl;
		cout << status << endl;
		cout << endl;*/

		//分割成key和value两个string  find和substr
		string key;
		string value;
		map<string, string>m;
		int pos = date.find(":");
		if (pos != -1)
		{
			key = date.substr(0, pos);//pos=4
			//size=6 "1"的下标为5  [5,6)刚好截到1
			value = date.substr(pos + 1, date.size());
			m.insert(make_pair(key, value));
		}
		pos = interval.find(":");
		if (pos != -1)
		{
			key = interval.substr(0, pos);//pos=4
			//size=6 "1"的下标为5  [5,6)刚好截到1
			value = interval.substr(pos + 1, interval.size());
			m.insert(make_pair(key, value));
		}
		pos = stuID.find(":");
		if (pos != -1)
		{
			key = stuID.substr(0, pos);//pos=4
			//size=6 "1"的下标为5  [5,6)刚好截到1
			value = stuID.substr(pos + 1, stuID.size());
			m.insert(make_pair(key, value));
		}

		pos = stuName.find(":");
		if (pos != -1)
		{
			key = stuName.substr(0, pos);//pos=4
			//size=6 "1"的下标为5  [5,6)刚好截到1
			value = stuName.substr(pos + 1, stuName.size());
			m.insert(make_pair(key, value));
		}

		pos = roomID.find(":");
		if (pos != -1)
		{
			key = roomID.substr(0, pos);//pos=4
			//size=6 "1"的下标为5  [5,6)刚好截到1
			value = roomID.substr(pos + 1, roomID.size());
			m.insert(make_pair(key, value));
		}

		pos = status.find(":");
		if (pos != -1)
		{
			key = status.substr(0, pos);//pos=4
			//size=6 "1"的下标为5  [5,6)刚好截到1
			value = status.substr(pos + 1, status.size());
			m.insert(make_pair(key, value));
		}
		//cout << key << "  " << value << endl;

		//插入m_order
		
		this->m_order.insert(make_pair(m_size, m));
		m_size++;
	}
	ifs.close();
}
//更新预约记录
void Order_File::update_Order()
{
	if (this->m_size == 0)
	{
		return;//预约记录为0，无需更新进文件
	}
	ofstream ofs(ORDER_FILE, ios::trunc);//清空记录并重新写入
	for (auto it = m_order.begin(); it != m_order.end(); it++)
	{
		ofs << "date:" << it->second["date"] << "\tinterval:" << it->second["interval"]
			<< "\tstuID:" << it->second["stuID"] << "\tstuName:" << it->second["stuName"]
			<< "\troomID:" << it->second["roomID"] << "\tstatus:" << it->second["status"]
			<< endl;
	}

	ofs.close();
}