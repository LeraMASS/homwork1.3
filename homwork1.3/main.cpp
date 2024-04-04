#include <iostream>;
int main() {
	setlocale(LC_ALL, "Russian");
	int w, h;
	std::cout << "Введите высоту шахматной доски -> ";
	std::cin >> w;
	std::cout << "Введите ширину шахматной доски -> ";
	std::cin >> h;

	for (int i = 0; i < h + 2; i++) {
		for (int j = 0; j < w + 2; j++) {
			if (i == 0 || j == 0 || i == h + 1 || j == w + 1)
				std::cout << "* ";
			else if ((i + j) % 2 == 0)
				std::cout << "# ";
			else
				std::cout << "  ";
		}
		std::cout << std::endl;
	}
	

	




	return 0;
}