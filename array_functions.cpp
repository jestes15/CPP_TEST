#include "array_functions.h"
#include <iostream>
#include <array>
#include <chrono>
#include <thread>

#include "strings.h"
using namespace std;

void array_functions::set_var1(std::string* str)
{
	var1 = *str;
}

std::string array_functions::get_var1()
{
	return var1;
}

array_functions::array_functions()
{
	cout << "Array Functions ready!" << endl;
}

array_functions::~array_functions()
{
	cout << "Thank you for using me!" << endl;
	this_thread::sleep_for(chrono::milliseconds(5000));
	system(clear_msg);
}

int array_functions::sum_array(array<int, 1000> array)
{
	auto sum = 0;
	try
	{
		for (auto x = 0; x < ACTUAL_SIZE_OF_ARRAY; x++)
		{
			sum += array[x];
		}
	}
	catch (char* e)
	{
		cout << "An error occurred: " << e;
	}
	ACTUAL_SIZE_OF_ARRAY = 0;
	return sum;
}

void array_functions::set_size(array<int, 1000> array)
{
	SIZE_OF_ARRAY = array.size();
	for (auto x = 0; x < SIZE_OF_ARRAY; x++)
	{
		try {
			if (array[x] != NULL) { ACTUAL_SIZE_OF_ARRAY++; }
		}
		catch (...)
		{
			cout << "An error has occurred" << endl;
			throw;
		}
	}
}

template <typename T>
array_with_size<T>::array_with_size(int size)
{
	this->data_ = new T[size];
	this->size_ = size;
}

template <typename T>
array_with_size<T>::~array_with_size(void)
{
	delete[] this->data_;
}

template <typename T>
T& array_with_size<T>::operator[](int index)
{
	if (index < 0 || index >= this->size_)
	{
		throw "Error: index out of bounds.";
	}
	else
	{
		return this->data_[index];
	}
}

template <typename T>
int array_with_size<T>::size()
{
	return this->size_;
}
