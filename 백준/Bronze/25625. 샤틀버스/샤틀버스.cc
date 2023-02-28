#include <iostream>
int main() {
	int time, bus_pre_time;
	std::cin >> time >> bus_pre_time;
	std::cout << (time > bus_pre_time ? time + bus_pre_time : bus_pre_time - time);
}