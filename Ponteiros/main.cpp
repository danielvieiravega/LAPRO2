#include <iostream>
#include <iomanip>

using namespace std;

void exibirChar();
int main()
{
	int nums[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };
	int* ptr = nums;
	int bytes;
	for(int i=0, bytes=0; i<10; i++, bytes+=4)
		cout << i << ":"  << ptr << " + " << setw(2) << bytes << " = " << (ptr+i) << " ==> " << *(ptr+i) << endl;

	for(int i=0, bytes=0; i<10; i++, bytes+=4)
		cout << i << ":"  << ptr << " + " << setw(2) << bytes << " = " << (ptr+i) << " ==> " << *(ptr+i) << endl;

	exibirChar();
	return 0;
}

void exibirChar()
{
	char* texto = "Laboratorio de Prog. II";
	int v[] = { 0, 1, 2, 3, 4 };
	int matriz[4][4] = {
		0, 1, 2, 3,
		4, 5, 6, 7,
		8, 9, 10, 11,
		12, 13, 14, 15
	};
}