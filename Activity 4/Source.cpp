#include <iostream>

int main()
{
	constexpr int SECS_PER_MINUTE = 60;
	constexpr int SECS_PER_HOUR = 3600;
	constexpr int SECS_PER_DAY = 86400;

	int seconds;
	std::cout << "total seconds?";
	if (std::cin >> seconds && seconds > 0)
	{
		const int days = seconds / SECS_PER_DAY;
		if (days > 0)
		{
			std::cout << days << "day(s)";
			seconds = seconds % SECS_PER_DAY;
		}
		const int hours = seconds / SECS_PER_HOUR;

		if (hours > 0)
		{

			std::cout << hours << "hour(s),";
			seconds = seconds % SECS_PER_HOUR;

		}
		const int minutes = seconds / SECS_PER_MINUTE;
		if (minutes > 0)
		{
			std::cout << minutes << "minute(s),";
			seconds = seconds % SECS_PER_MINUTE;
		}

		std::cout << seconds << "seconds(s).\n";
	}
	


}