#include<iostream>
#include<string>
using namespace std;

//通讯录容量
const int MAX=50;
//联系人结构体
struct Person
{
string name;
int sex;
int age;
string phoneNumber;
string address;
};
//通讯录结构体
struct AddressBooks
{
struct Person personArray[MAX];
int size;
};
//显示菜单栏
void showMenu()
{
cout<<"*********************"<<endl;
cout<<"***** 1、添加联系人 *****"<<endl;
cout<<"***** 2、显示联系人 *****"<<endl;
cout<<"***** 3、删除联系人 *****"<<endl;
cout<<"***** 4、查找联系人 *****"<<endl;
cout<<"***** 5、修改联系人 *****"<<endl;
cout<<"***** 6、清空联系人 *****"<<endl;
cout<<"***** 0、退出通讯录 *****"<<endl;
cout<<"*********************"<<endl;
}
//添加联系人
void addPerson(AddressBooks * abs)
{
	if(abs->size==MAX)
		cout<<"通讯录已满"<<endl;
	else
		{
		string name;
		cout<<"输入姓名："<<endl;
		cin>>name;
		abs->personArray[abs->size].name=name;
		
		int sex;
		cout<<"输入性别："<<endl;
		cout<<"1-----男"<<endl;
		cout<<"2-----女"<<endl;
		while(true)
			{
				cin>>sex;
				if(sex==1||sex==2)
					{abs->personArray[abs->size].sex=sex;break;}
				else
					cout<<"不好意思没有第三选项，请重新输入"<<endl;
			}

		int age;
		cout<<"请输入年龄："<<endl;
		while(true)
			{
				cin>>age;
				if(0<age&&age<150)
				{abs->personArray[abs->size].age=age;break;}
				else
					cout<<"不好意思不支持登记未出生人口或神仙，请重新输入"<<endl;
			}

		string number;
		cout<<"请输入电话："<<endl;
		cin>>number;
		abs->personArray[abs->size].phoneNumber=number;

		string adress;
		cout<<"请输入地址："<<endl;
		cin>>adress;
		abs->personArray[abs->size].address=adress;

		cout<<"您已添加成功"<<endl;
		system("pause");
		system("cls");
		abs->size++;
		}
}

//显示联系人
void showPerson(AddressBooks abs)
{
	if(abs.size==0)
		cout<<"啥都没有"<<endl;
	else
	{for(int i=0;i<abs.size;i++)
		{
			cout<<"姓名："<<abs.personArray[i].name<<"\t";
			cout<<"性别："<<(abs.personArray[i].sex==1?"男":"女")<<"\t";
			cout<<"年龄："<<abs.personArray[i].age<<"\t";
			cout<<"电话："<<abs.personArray[i].phoneNumber<<"\t";
			cout<<"地址："<<abs.personArray[i].address<<endl;
		}
	}
		system("pause");
		system("cls");
}

//检测是否存在
int isExist(AddressBooks *abs,string name)
{
	for(int i=0;i<abs->size;i++)
		if(abs->personArray[i].name==name)
			return i;
	return -1;
}

//删除联系人
void deletePerson(AddressBooks * abs)
{
	string name;
	cout<<"输入想要删除的人的姓名：";
	cin>>name;
	int rex;
	rex=isExist(abs,name);
	if(rex==-1)
		cout<<"查无此人"<<endl;
	else
		{
			for(int i=rex;i<abs->size;i++)
			abs->personArray[i]=abs->personArray[i+1];
			cout<<"删除成功！"<<endl;
		}
	abs->size--;
	system("pause");
	system("cls");
}

//查找联系人
void findPerson(AddressBooks * abs)
{
	string name;
	cout<<"输入想要查找的人的姓名：";
	cin>>name;
	int rex=isExist(abs,name);
	if(rex==-1)
	cout<<"查无此人"<<endl;
	else
	{
			cout<<"姓名："<<abs->personArray[rex].name<<"\t";
			cout<<"性别："<<(abs->personArray[rex].sex==1?"男":"女")<<"\t";
			cout<<"年龄："<<abs->personArray[rex].age<<"\t";
			cout<<"电话："<<abs->personArray[rex].phoneNumber<<"\t";
			cout<<"地址："<<abs->personArray[rex].address<<endl;
	}
	system("pause");
	system("cls");
}

//修改联系人
void correctPerson(AddressBooks *abs)
{
	cout<<"输入你要修改的人名：";
	string name;
	cin>>name;
	int rex=isExist(abs,name);
	if(rex==-1)
	cout<<"查无此人"<<endl;
	else
		{
		string name;
		cout<<"输入姓名："<<endl;
		cin>>name;
		abs->personArray[rex].name=name;
		
		int sex;
		cout<<"输入性别："<<endl;
		cout<<"1-----男"<<endl;
		cout<<"2-----女"<<endl;
		while(true)
			{
				cin>>sex;
				if(sex==1||sex==2)
					{abs->personArray[rex].sex=sex;break;}
				else
					cout<<"不好意思没有第三选项，请重新输入"<<endl;
			}

		int age;
		cout<<"请输入年龄："<<endl;
		while(true)
			{
				cin>>age;
				if(0<age&&age<150)
				{abs->personArray[rex].age=age;break;}
				else
					cout<<"不好意思不支持登记未出生人口或神仙，请重新输入"<<endl;
			}

		string number;
		cout<<"请输入电话："<<endl;
		cin>>number;
		abs->personArray[rex].phoneNumber=number;

		string adress;
		cout<<"请输入地址："<<endl;
		cin>>adress;
		abs->personArray[rex].address=adress;

		cout<<"您已修改成功"<<endl;
		}
	system("pause");
	system("cls");
}

//清空通讯录
void caleanPerson(AddressBooks *abs)
{
	cout<<"您拥有  "<<abs->size<<"  个联系人，确定要清空吗？"<<endl;
	cout<<"确认请按  1  "<<"   取消请按  0"<<endl;
	int a=0;
	cin>>a;
	if(a==1)
		{
				AddressBooks abs2;
				abs2.size=0;
				*abs=abs2;
				cout<<"清除成功！";
		}
	else
		cout<<"清除失败！";
	system("pause");
	system("cls");
}

int main()
{
	AddressBooks abs;
	abs.size=0;
	int select=0;
	while(true)
{
	showMenu();
	cin>>select;
	switch(select)
	{	
		case 1:
			addPerson(&abs);
			break;
		case 2:
			showPerson(abs);
			break;
		case 3:deletePerson(&abs);
			break;
		case 4:findPerson(&abs);
			break;
		case 5: correctPerson(&abs);
			break;
		case 6:caleanPerson(&abs);
			break;
		case 0:
			cout<<"欢迎下次使用"<<endl;
			return 0;
		default:
			break;
	}
}
return 0;
}
