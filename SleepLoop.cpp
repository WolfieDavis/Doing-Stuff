#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

void sleep(int);

int main()
{
	for (int i = 0; i < 10; i++)
	{
		cout << "Doing Stuff..." << endl;
		sleep(1000);
	}

	system("pause");
	return 0;
}

void sleep(int mili)
{
	this_thread::sleep_for(chrono::milliseconds(mili));
}
