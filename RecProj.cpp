#include <iostream>
using namespace std;

int main()
{
	int area, perimeter;
	int length = 5;
	int width = 3;
	area = length * width;
	perimeter = (2 * length) + (2 * width);
	cout << "length = " << length << endl;
	cout << "width = " << width << endl;
	cout << "area = " << area << endl;
	cout << "perimeter = " << perimeter << endl;
	cin.get();
}