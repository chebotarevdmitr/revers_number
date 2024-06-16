#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	cout<<"\thello revers numbers\n";
  int n=0, reversedNumber =0, remainder=0;
  cout<<"enter intenger number\n";
  cin >>n;
  
  while (n !=0)	{
  	remainder =n%10;
  	reversedNumber = reversedNumber*10 + remainder;
  	n/=10;
  }
  cout<<"Revers number = "<<reversedNumber<<endl;
	return 0;
}