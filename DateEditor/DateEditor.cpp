// SPDX-License-Identifier: MIT
#include <ctime>
#include <iostream>

int
main(int argc, char* argv[])
{
	struct tm date_time = { 0 };

	date_time.tm_year = atoi(argv[1]);
	date_time.tm_mon = atoi(argv[2]);
	date_time.tm_mday = atoi(argv[3]);
	time_t time_value = mktime(&date_time);
	char str[128] = { 0 };
	strftime(str, sizeof str, "%c", &date_time);
	std::cout << str;
	return 0;
}