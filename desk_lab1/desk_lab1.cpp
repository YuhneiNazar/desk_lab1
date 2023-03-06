#include <iostream>
#include <string>

using namespace std;

void zavd1();
void zavd2();

int main()
{
	zavd1();
	zavd2();
}

void zavd1() {
	bool p, q;
	int i;

	do
	{
		cout << "1 - True 0 - False" << endl;
		cout << "Enter p: ";
		cin >> i;
		cout << endl;
	} while (i != 1 && i != 0);
	p = i == 1;

	do
	{
		cout << "1 - True 0 - False" << endl;
		cout << "Enter q: ";
		cin >> i;
		cout << endl;
	} while (i != 1 && i != 0);
	q = i == 1;

	cout << "AND" << endl;
	cout << (p && q) << endl;
	cout << endl;

	cout << "OR" << endl;
	cout << (p || q) << endl;
	cout << endl;

	cout << "XOR" << endl;
	cout << (p ^ q) << endl;
	cout << endl;

	cout << "p->q" << endl;
	cout << (!p || q) << endl;
	cout << endl;

	cout << "q->p" << endl;
	cout << (!q || p) << endl;
	cout << endl;

	cout << "p~q" << endl;
	cout << ((!p || q) && (!q || p)) << endl;
	cout << endl;

}

void zavd2() {
	string a = "11001100001",
		b = "10101010011";
	int n = a.length();
	string x = "", y = "", z = "";
	char c;
	bool aa, bb, cc;
	for (int i = 0; i < n; i++) {
		aa = (a[i] == '1');
		bb = (b[i] == '1');

		cc = (aa || bb);
		c = cc ? '1' : '0';
		x = x + c;
		cc = (aa && bb);
		c = cc ? '1' : '0';
		y = y + c;
		cc = (aa != bb);
		c = cc ? '1' : '0';
		z = z + c;
	}
	cout << "a =      " << a << endl;
	cout << "b =      " << b << endl;
	cout << "a || b = " << x << endl;
	cout << "a && b = " << y << endl;
	cout << "a ^ b =  " << z << endl;

}
