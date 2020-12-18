#include <string>
#include "strings.h"

std::string strings::get_string(int choice)
{
	switch (choice)
	{
	case 1:
		return menu;
	case 2:
		return instruction_v1;
	case 3:
		return instruction_v2;
	case 4:
		return instruction_v3;
	case 5:
		return return_msg_v1;
	case 6:
		return return_msg_v2;
	case 7:
		return help_msg;
	case 8:
		return exit_msg;
	default:
		return switch_error;
	}
}

