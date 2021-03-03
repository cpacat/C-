#include<iostream>
#include<ctime>
#include<string>
using  namespace std;

const int NUMBER_OF_LETTERS=26;
const int NUMBER_OF_RANDOM_LETTERS=100;
void createArray(char[]);
void	displayArray(const char[]);
void countLetters(const char[],int[]);
void displayCounts(const int[]);

int main()
{
	char chars[NUMBER_OF_RANDOM_LETTERS];

	createArray(chars);

	cout<<"The lowercase letters are: "<<endl;
	displayArray(chars);

	int counts[NUMBER_OF_LETTERS];

	countLetters(chars,counts);

	cout<<"\nThe occurences of each letter are: "<<endl;
	displayCounts(counts);

	cout<<endl;
	return 0;
}

void createArray(char chars[])
{
	srand(time(0));
  for(int i=0;i<NUMBER_OF_RANDOM_LETTERS;i++)
  {
    chars[i]=static_cast<char>('a' +rand()%('z'-'a'+1));
  }
}

void	displayArray(const char chars[])
{
for(int i=1;i<=NUMBER_OF_RANDOM_LETTERS;i++)
	if(i%20==0)
		cout<<chars[i-1]<<endl;
	else
		cout<<chars[i-1]<<" ";
}

void countLetters(const char chars[],int counts[])
{
	for(int i=0;i<NUMBER_OF_LETTERS;i++)
		counts[i]=0;
	for(int i=0;i<NUMBER_OF_RANDOM_LETTERS;i++)
		counts[chars[i]-'a']++;
}

void displayCounts(const int counts[])
{
 for(int i=0;i<NUMBER_OF_LETTERS;i++)
 {
	 if((i+1)%10==0)
		 cout<<counts[i]<<" "<<static_cast<char>('a'+i)<<" "<<endl;
	 else
		 cout<<counts[i]<<" "<<static_cast<char>('a'+i)<<" ";
 }
}
