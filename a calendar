#include<iostream>
#include<iomanip>
using namespace std;

void printMonth(int year,int month);
void printMonthTitle(int year,int month);
void printMonthName(int month);
void printMonthBody(int year,int month);
int getStartDay(int year,int month);
int getTotalNumberOfDays(int year,int month);
int getNumberOfDaysInMonth(int year,int month);
bool isLeapYear(int year);
int main()
{
	cout<<"Enter full year(e.g.,2001): ";
	int year;
	cin>>year;

	cout<<"Enter month in number between 1 and 12: ";
	int month;
	cin>>month;

	printMonth(year,month);
	cout<<"\n";
	return 0;
}

void printMonth(int year ,int month)
{
	printMonthTitle(year,month);
	printMonthBody(year,month);
}
void printMonthTitle(int year,int month)
{cout<<"            ";
  printMonthName(month);
  cout<<" "<<year<<endl;
  cout<<"---------------------------------"<<endl;
  cout<<" Sun Mon Tue Wed Thu Fri Sat"<<endl;
}
void printMonthName(int month)
{
switch(month)
	{
		case 1:
			cout<<"January";
			break;
		case 2:
			cout<<"February";
			break;
		case 3:
			cout<<"March";
			break;
		case 4:
			cout<<"April";
			break;
		case 5:
			cout<<"May";
			break;
		case 6:
			cout<<"June";
			break;
		case 7:
			cout<<"July";
			break;
		case 8:
			cout<<"August";
			break;
		case 9:
			cout<<"September";
			break;
		case 10:
			cout<<"October";
			break;
		case 11:
			cout<<"November";
			break;
		case 12:
			cout<<"December";
			break;
	}
}

void printMonthBody(int year,int month)
{

 int  startDay=getStartDay(year,month);
 int  numberOfDaysInMonth= getNumberOfDaysInMonth(year,month);

	 int i=0;
 for(i=0;i<startDay;i++)
	 cout<<"   ";
 for(i=1;i<=numberOfDaysInMonth;i++)
	{
		cout<<setw(4)<<i;
		if((i+startDay)%7==0)
			cout<<endl;
	}
}

int getStartDay(int year,int month)
{
	int startDay1800=3;
	int totalNumberOfDays = getTotalNumberOfDays(year,month);
		return(totalNumberOfDays+startDay1800)%7;
}
int getTotalNumberOfDays(int year ,int month)
{
int total=0;
	for(int i=1800;i<year;i++)
		if(isLeapYear(i))
			total+=366;
		else
			total+=365;
	for(int i=1;i<month;i++)
		total=total + getNumberOfDaysInMonth(year,i);
	return total;
}
int getNumberOfDaysInMonth(int year,int month)
{
if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
	return 31;
if(month==4||month==6||month==9||month==11)
	return 30;
if(month==2)return isLeapYear(year)?29:28;
	return 0; //if month is incorrect
}
bool isLeapYear(int year)
{
return year%400==0||(year%4==0&&year%100!=0);
}
