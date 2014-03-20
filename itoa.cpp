#include <string.h>

std::string itoa(int n, unsigned char base = 10)
{

	char * s = new char[17];
	std::string u;

	if (n < 0) {
		n = (-1 * n);
		u = "-";
	}

	int i = 0;

	do {
		s[i++] = n % base + '0';
		n -= n % base;
	} while ((n /= base) > 0);

	for (int j = i - 1; j >= 0; j--) {
		u += s[j];
	}

	delete[] s;
	return u;
}