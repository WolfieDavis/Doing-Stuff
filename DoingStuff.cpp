#include <iostream>

using namespace std;

void DoingStuff();

int main()
{
	for (int i = 0; i < 10; i++)
		DoingStuff();

	system("pause");
	return 0;
}

void DoingStuff()
{
	cout << "Doing Stuff..." << endl;

	system("timeout 3");
}
