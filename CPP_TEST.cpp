#include "CPP_TEST.h"
using namespace std;

int main() {

	cout << "Initializing variables..." << endl;
	for (auto i = 0; i <= 100; i += 20) {
		cout << "\r";
		cout << "\r" << i << "% completed" << flush;
		sleep(100);
	}

	array_functions a_func;
	auto* a_func_ptr = &a_func;

	strings str;
	auto* string_ptr = &str;

	string usr_choice;
	auto loop = 1;
	double in1, in2, final_val;
	double (*op[4])(double, double);
	double (*sct[6])(double);
	void (*vd[6])();

	cout << "\nInitialization complete.\n\n\n";
	cout << "Setting up arrays with functions...\n";
	op[0] = sum;
	op[1] = subtraction;
	op[2] = multiplication;
	op[3] = division;

	sct[0] = usr_sin;
	sct[1] = usr_cos;
	sct[2] = usr_tan;
	sct[3] = a_sin;
	sct[4] = a_cos;
	sct[5] = a_tan;

	vd[0] = uah_logo;
	vd[1] = c_arrays;

	for (auto i = 0; i <= 100; i += 10) {
		cout << "\r";
		cout << "\r" << i << "% completed" << flush;
		sleep(50);
	}
	cout << "\nArray setup complete\n\n\n";
	cout << "Starting while loop...\n";
	sleep(1000);
	system(clear_msg);

	while (loop) {
		cout << string_ptr->get_string(1);
		cin >> usr_choice;

		auto const str_cmp = usr_choice.compare("exit");
		auto const str_cmp_cls = usr_choice.compare("clear");
		auto const str_cmp_hlp = usr_choice.compare("help");

		if (str_cmp != 0 && str_cmp_cls != 0 && str_cmp_hlp != 0) {
			auto usr_choice_int = std::stoi(usr_choice);
			if (usr_choice_int < 4) {
				cout << string_ptr->get_string(2) << endl;
				cin >> in1 >> in2;
				final_val = op[usr_choice_int](in1, in2);
				cout << string_ptr->get_string(5) << final_val << endl;
			}
			else if (usr_choice_int == 4) {
				cout << string_ptr->get_string(2) << endl;
				cin >> in1 >> in2;
				auto const in1_int = static_cast<int> (in1);
				auto const in2_int = static_cast<int> (in2);
				final_val = mod(in1_int, in2_int);
				cout << string_ptr->get_string(5) << final_val << endl;
			}
			else if (usr_choice_int > 4 && usr_choice_int < 11) {
				usr_choice_int -= 5;
				cout << string_ptr->get_string(3) << endl;
				cin >> in1;
				final_val = sct[usr_choice_int](in1);
				cout << string_ptr->get_string(5) << final_val << endl;
			}
			else if (usr_choice_int >= 11 && usr_choice_int != 13) {
				usr_choice_int -= 11;
				vd[usr_choice_int]();
			}
			else if (usr_choice_int == 13)
			{
				auto* usr_choice_str = new char;
				array<int, size_of_array> array{};
				cout << string_ptr->get_string(4) << endl;
				cin >> usr_choice_str[0];

				switch (usr_choice_str[0])
				{
				case 'A':
					for (auto x = 0; x < size_of_array; x++)
					{
						const auto max = 40;
						srand(rand());
						array[x] = rand() % max + 4 * (rand() % max * x);
					}
					break;

				case 'U':
					for (auto x = 0; x < size_of_array; x++)
					{
						string usr_in;
						cin >> usr_in;
						if (usr_in == "exit")
						{
							break;
						}
						array[x] = std::stoi(usr_in);
					}
					break;

				default:
					cout << "error" << endl;
				}

				a_func_ptr->set_size(array);
				auto const return_val = a_func_ptr->sum_array(array);
				cout << endl;

				cout << string_ptr->get_string(6) << return_val << endl;

			}
			else {
				cout << string_ptr->get_string(8);
			}
		}
		else {
			if (str_cmp == 0) {
				loop = 0;
				cout << "Exiting...\n";
				for (auto i = 0; i <= 100; i += 2) {
					cout << "\r";
					cout << "\r" << i << "% completed" << flush;
					sleep(50);
				}
				system(clear_msg);
			}
			else if (str_cmp_hlp == 0)
			{
				system(clear_msg);
				cout << string_ptr->get_string(7) << flush << endl;
				wait();
				cout << endl << endl;
				system(clear_msg);
			}
			else {
				system(clear_msg);
			}
		}
	}
}