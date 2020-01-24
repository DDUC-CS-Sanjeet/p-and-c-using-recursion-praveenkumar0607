#include<iostream>
using namespace std;

int permutation(int n, int r)
{
	
	if(r>1)
	return n*permutation(n-1,r-1);
	if(r==1)
	return n;
	
}

int combination(int n, int r)
{
	if(r>1)
	{
		return n*combination(n-1,r-1)/r;
	}
	else if(r==1)
	{
		return n;
	}

}

int main()
{
	int choice;
	int n=0,r=0;
	cout<<" ENTER 1 TO FIND PERMUTATION "<<endl;
	cout<<" ENTER 2 TO FIND COMBINATION "<<endl;
	cout<<" enter your choice :: ";
	cin>>choice;
	cout<<endl;
	cout<<" enter value of n: ";
	cin>>n;
	cout<<" \n enter value of r : ";
	cin>>r;
	try
	{
		if(n<0||r<0)
		throw " 'n' and 'r' can not be negative ";
	}
	catch(char const  *str)
	{
		cout<<str;
		exit(1);
	}
	if(choice==1)
	{
		cout<<" permutation will be : "<<permutation(n,r);
	}
	else if(choice==2)
	{
		cout<<" combination will be : "<<combination(n,r);
	}
	else
	cout<<" WRONG CHOICE ";
  return 0;
}
