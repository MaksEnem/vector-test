#include <iostream>
#include <vector>

int main() {

	std::vector <int> vec;
	int n;
	std::cin >> n;

	while (n != -1) {

		if (n == 1) {

			std::cin >> n;
			vec.push_back(n);
		}
		else if (n == 2) {
			if (vec.empty()) {
				std::cout << "Vector empty" << std::endl;
			}
			else {
				vec.pop_back();
			}
		}
		std::cin >> n;
	}
}
