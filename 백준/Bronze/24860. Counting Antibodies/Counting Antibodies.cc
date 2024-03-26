#include <iostream>
using namespace std;
int main() {
	unsigned long long vk, jk;
	unsigned long long va, ja;
	unsigned long long vh, dh, jh;
	cin >> vk >> jk >> va >> ja >> vh >> dh >> jh;
	cout << vh * dh * jh * vk * jk + vh * dh * jh * va * ja;
}