// -define a function
// -pass arguments by value to a function
// -pass arguments by reference to a function

#include <iostream>
using namespace std;
int Maximum(int x, int y)
{
	// Write your code here.
	if(x>y){
		return x;
	}
	else{
		return y;
	}
}
void Swap(int &x, int &y)
{
	// Write your code here.
	x=x+y;
	y=x-y;
	x=x-y;
	// cout<<x<<y;
}
int main()
{
	int test, a, b, r;
	cin >> test;
	cin >> a >> b;
	switch (test)
	{
	case 1:
		r = Maximum(a, b);
		cout << r;
		break;
	case 2:
		Swap(a, b);
		cout << a << " " << b;
		break;
	default:
		cout << "Invalid test option";
	}
	return 0;
}
