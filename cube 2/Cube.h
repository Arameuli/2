#pragma once
#include<string>
#include<iostream>
using namespace std;
class Cube
{
	friend int zedFartob(Cube t);
private: int gverdi;
public:
	Cube() {

	}
	Cube(int gverdi) {
		this->gverdi = gverdi;
	}
	void setgverdi() {
		this->gverdi = gverdi;
	}
	int getgverdi() {
		return this->gverdi;
	}
	int mocul() {
		return gverdi * gverdi * gverdi;
	}
};

