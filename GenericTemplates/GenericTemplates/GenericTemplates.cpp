//Workshop 10 assessed task
#include <iostream>


using namespace std;

template <typename T> //Creating a new generic function

void swap_vars(T& a, T& b) //Pass by reference
{
	T c = a;
	a = b;
	b = c;
}
int main()
{
	int x = 10;
	int y = 20;
	swap_vars(x, y);
	cout << "x = " << x << ", y = " << y << endl;

	string s = "first";
	string t = "second";
	swap_vars(s, t); 
	cout << "s = " << s << ", t = " << t << endl;

	return 0;
}
