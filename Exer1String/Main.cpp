#include "Pessoa.h"
#include <string>
#include <iostream>

using namespace std;
int main()
{
	Pessoa jose;
	int result;
	result = jose.SetCpf("398136146");

	cout << result << endl;
	cin.get();
}