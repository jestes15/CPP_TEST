#include <cmath>
#include <iostream>
#include <string>
#include <thread>

double sum(double const num1, double const num2) {
	auto const sum = num1 + num2;
	return sum;
}
double subtraction(double const num1, double const num2) {
	auto const subtract = num1 - num2;
	return subtract;
}
double multiplication(double const num1, double const  num2) {
	auto const multiple = num1 * num2;
	return multiple;
}
double division(double const num1, double const num2) {
	auto const divisor = num1 / num2;
	return divisor;
}
int mod(int const num1, int const num2) {
	auto const mod = num1 % num2;
	return mod;
}
double usr_sin(double const num) {
	return sin(num);
}
double usr_cos(double const num) {
	return cos(num);
}
double usr_tan(double const num) {
	return tan(num);
}
double a_sin(double const num) {
	return asin(num);
}
double a_cos(double const num) {
	return acos(num);
}
double a_tan(double const num) {
	return atan(num);
}
void uah_logo() {

	std::string msg = "UUUUUUUU         UUUUUUUU          AA            HHHHHHHH           HHHHHHHH\n"
		"  UUUU             UUUU           AAAA             HHHH               HHHH\n"
		"  UUUU             UUUU          AA  AA            HHHH               HHHH\n"
		"  UUUU             UUUU         AA    AA           HHHH               HHHH\n"
		"  UUUU             UUUU        AAAAAAAAAA          HHHHHHHHHHHHHHHHHHHHHHH\n"
		"  UUUU             UUUU       AAAAAAAAAAAA         HHHHHHHHHHHHHHHHHHHHHHH\n"
		"  UUUU             UUUU      AA          AA        HHHH               HHHH\n"
		"  UUUU             UUUU     AA            AA       HHHH               HHHH\n"
		"      UUUUUUUUUUUUU        AA              AA      HHHH               HHHH\n"
		"        UUUUUUUUU        AAAAA            AAAAA  HHHHHHHH           HHHHHHHH\n";

	std::cout << msg;
}
void c_arrays() {
	int array[100], sum = 0;
	auto* ptr = array;

	for (auto i = 0; i < 100; i++) {
		*(ptr + i) = 0;
	}

	for (auto x = 0; x < 100; x++) {
		if (x != 0) {
			if ((x + 1) % 10 == 0)
				printf("%d\n", *(ptr + x));
			else
				printf("%d, ", *(ptr + x));
		}
		else {
			printf("%d, ", *ptr);
		}
	}
	printf("\n");
	for (auto x = 0; x < 100; x++) {
		*(ptr + x) = x;
	}
	for (auto x = 0; x < 100; x++) {
		if (x != 0) {
			if ((x + 1) % 10 == 0)
				printf("%d\n", *(ptr + x));
			else
				printf("%d, ", *(ptr + x));
		}
		else
			printf("%d, ", *(ptr + x));
	}

	for (auto x = 0; x < 100; x++) {
		sum += *(ptr + x);
	}
	printf("\nThe sum of all the values in the array is: %d\n", sum);
}