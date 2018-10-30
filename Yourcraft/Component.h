#pragma once
#include "Object.h"

class Component : public Object
{
public:
	Component();
	virtual ~Component() = 0;
	void Update(float dt);
};

