#include<iostream>
#include<iomanip>
using namespace std;

bool isPrime(int number)
{
 for(int n1=2;n1<=number/2;n1++)
	 {if(number%n1==0)
		 return false;
	 }
 return true;
}
void printPrimeNumbers(int numberOfPrimes)
{	
 const int NUMBER_OF_PRIME_PER_LINE=10;
 int count=0;
 int number=2;
	 while(count<numberOfPrimes)
	 {
	 if(isPrime(number))
	   {count++;
		if(count%10==0)
			cout<<setw(4)<<number<<endl;
		else
			cout<<setw(4)<<number;
	   }
	 number++;
	}
}
int main()
{
	cout<<"Enter the number of Prime that you need :";
		int number;
		cin>>number;
		cout<<endl;
		 printPrimeNumbers(number);
return 0;
}
