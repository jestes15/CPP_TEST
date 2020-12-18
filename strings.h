#pragma once
#include <string>

#ifdef _WIN32
#include <Windows.h>
constexpr auto clear_msg = "cls";
#else
#include <unistd.h>
constexpr auto clear_msg = "clear";
#endif

#ifndef STRINGS_H
#define	STRINGS_H

class strings
{
public:
	std::string get_string(int choice);

private:
	std::string menu = "What kind of operation do you want to do?\n0: sum\n"
		"1: subtraction\n2: multiplication\n3: division\n4: modulus\n5: sin\n6: cos\n"
		"7: tan\n8: arc-sin\n9: arc-cos\n10: arc-tan\n11: UAH Logo\n12: CS 102 Array homework\n"
		"13: Sum of a user made array\nType exit to quit.\nmsr> ";

	std::string instruction_v1 = "Please enter your first number then your second.";
	std::string instruction_v2 = "Please enter your number";
	std::string instruction_v3 = "What kind of initialization of the array? A (auto)/U (User input)";

	std::string return_msg_v1 = "Your final value is: ";
	std::string return_msg_v2 = "The sum of all the components in the array is: ";

	std::string help_msg = "Commands:\nexit :: Exits the program\nclear :: Clears the screen and prints the help menu.";

	std::string exit_msg = "It appears you made an error, please try again.";
	std::string switch_error = "There is no option which was inputted into the function";
};
#endif