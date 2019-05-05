#include <iostream>

using namespace std;
int main() {
	double length;
	double width;
	double area;
	double perimeter;
	
	cout << "Please enter length size: ";
	cin >> length;
	
	cout << "Please enter width size:";
	cin >> width;
	
	perimeter = 2*(length + width);
	area = length*width;
	
	cout << "Perimeter : " << perimeter << endl;
	cout << "Area: " << area << endl;
		
}
