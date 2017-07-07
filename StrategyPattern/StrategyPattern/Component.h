#pragma once
#include<iostream>
using namespace std;

class Component
{
public:
	virtual ~Component();

	virtual void Shoot()=0;
};

