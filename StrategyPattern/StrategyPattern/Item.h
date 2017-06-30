#pragma once
#include <iostream>
using namespace std;

class Item
{
public:
	Item();
	~Item();

	virtual void Usar() = 0;
};

