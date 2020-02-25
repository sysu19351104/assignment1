#include<iostream>
#include<windows.h>
using namespace std;

enum mymonth { Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nove, Dec };//枚举月

class Timedate                                          //类的定义
{
public:
	void setdate();                                      //设置时间函数
	void printdate();                                    //打印函数       
private:                                                 //数据成员
	int year, day, hour, minute, second;
	mymonth month;                                    //声明枚举类型变量
	int m;
};


void Timedate::setdate()                                  //取值函数的实现
{
	cout << "please input the data" << endl;
	cout << "year(请输入2010到2015)"<<endl;                              //从键盘输入
	cin >> year;
	cout << "month" << endl;
	cin >> m;
	cout << "day" << endl;
	cin >> day;
	cout << "hour" << endl;
	cin >> hour;
	cout << "minute"<<endl;
	cin >> minute;
	cout << "second"<<endl;
	cin >> second;
}

void Timedate::printdate()                              //打印及设置函数的实现
{
	cout << "year  month  day  hour  minute  second" << endl;
	if ((hour > 24 || hour < 0) || (m == 2 && day > 29))                   //错误提醒，重新输入
	{
		cout << "the data is wrong,please input the data again";
		cout << "year  month  day  hour  minute  second" << endl;
		cin >> year >> m >> day >> hour >> minute >> second;
	}
	month = mymonth(m);                                 //类型强制转换
	cout << year << "  ";
	switch (month)
	{
	case Jan:cout << "Jan"; break;
	case Feb:cout << "Feb"; break;
	case Mar:cout << "Mar"; break;
	case Apr:cout << "Apr"; break;
	case May:cout << "May"; break;
	case Jun:cout << "Jun"; break;
	case Jul:cout << "Jul"; break;
	case Aug:cout << "Aug"; break;
	case Sep:cout << "Sep"; break;
	case Oct: cout << "Oct"; break;
	case Nove:cout << "Nove"; break;
	case Dec: cout << "Dec"; break;
	default:
		cout << "please input the right number";
		break;
	}
	cout << "    " << day << "    " << hour << "     " << minute << "       " << second;
}

int main()                                                   //主函数
{
	Timedate now;                                            //定义对象
	now.setdate();
	now.printdate();
	Sleep(500);
	return 0;
}
