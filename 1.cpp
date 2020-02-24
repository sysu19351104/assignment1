 #include<iostream>
using namespace std;
class student//定义学生类
{
public:
	void setdata();
	void showdata();//声明两个成员函数
private:
	int number, age;
	string name;
};

void student::setdata()//定义取值函数
{
	cout << "number" << "       " << "name" << "        " << "age" << endl;
	cin >> number >> name >> age;
}

void student::showdata()//定义打印函数并有错误提醒
{
	if (number > 0)
	{
		cout << number << "       " << name << "        " << age << endl;
	}
	else
	{
		cout << "the number is wrong!";
	}
}


int main()//主函数
{
	student Tony;
	student Bob;//定义两个对象
	Tony.setdata();
	cout << "show Tony's data" << endl;
	Tony.showdata();
	cout << "\n";
	Bob.setdata();
	cout << "show Bob's data" << endl;
	Bob.showdata();//打印两个对象的数据成员到屏幕
	return 0;
}
