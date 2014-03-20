#include <string.h>

int getLunh(std::string code)
{
	int sum = 0;
	int tmp = 0;
	char bEven = 0;
	bEven = (char) code.length() % 2;
	for (int i = code.length() - 1; i >= 0; i--) {
		if (!((i + bEven) % 2)) { // четность номера цифры в зависимости от длинны числа
			sum += code[i] - '0';
		} else {
			tmp = 2 * (code[i] - '0');
			if (tmp > 9) {
				tmp -= 9;
			}
			sum += tmp;
		}
	}
	sum = 10 - (sum % 10);
	if (10 == sum) {
		sum = 0;
	}
}

std::string addLunh(std::string code)
{
	return code += '0' + getLunh(code);
}

bool checkLuhn(std::string code)
{
	return 0 == getLunh(code + "0") % 10;
}