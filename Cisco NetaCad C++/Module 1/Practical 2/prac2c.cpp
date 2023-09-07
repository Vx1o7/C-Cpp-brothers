#include <iostream>

using namespace std;

int main()
{
	char character = 'X';
	int integer = character;
	cout << character << " " << static_cast<int>(character);
	cout << " " << integer << " " << static_cast<char>(integer);
}