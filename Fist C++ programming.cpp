#include <iostream>
using namespace std;

int main() {
	cout << "Please enter the width.\n";

	int width;
	cin >> width; // Receive the width from the keyboard and save it to the width variable.

	cout << "Please enter the height.\n";

	int height;
	cin >> height; // Receive the height from the keyboard and save it to the height variable.

	int area = width * height;
	cout << "width is " << area << ".\n"; // Output the area and move over the next line.
