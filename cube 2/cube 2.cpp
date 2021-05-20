#include <iostream>
#include"Cube.h"
using namespace std;
int zedFartob(Cube t) {
	return t.gverdi * t.gverdi * 6;
}
int fudze(Cube t) {
	return t.getgverdi() * t.getgverdi();
}
int main()
{
	Cube t(4);
	cout << t.mocul() << "  " << zedFartob(t) << "  " << fudze(t);
}
