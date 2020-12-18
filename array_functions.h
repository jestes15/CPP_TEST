#pragma once
#include <string>
#include <array>

constexpr auto size_of_array = 1000;

#ifndef ARRAY_FUNCTIONS_H
#define ARRAY_FUNCTIONS_H

class array_functions
{
public:
	array_functions();
	~array_functions();

	int sum_array(std::array<int, 1000> array);
	void set_size(std::array<int, 1000> array);

	void set_var1(std::string* str);
	std::string get_var1();

protected:

private:
	std::string var1 = "Hello";
	int SIZE_OF_ARRAY = 0;
	int ACTUAL_SIZE_OF_ARRAY = 0;
};
#endif

template<typename T> class array_with_size
{
private:
	T* data_;
	int size_;

public:
	array_with_size(int size);
	~array_with_size(void);
	T& operator[](int index);
	int size(void);
};