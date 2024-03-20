#include <iostream>
#include <string>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int test_case,index;
	std::string text,result;
	std::cin >> test_case;
	while (test_case--) {
		std::cin >> index >> text;
		result = text.substr(0, index-1);
		result += text.substr(index, text.length()-(index));
		std::cout << result << "\n";
	}
}