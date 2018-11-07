#pragma once
#include "Transform.h"

class GameObject : public Transform
{
public:
	GameObject();
	~GameObject();
	void Init();
	void Update();

	void SetName(const std::string& name);
	const std::string& GetName();

	void SetTag(const std::string& tag);
	const std::string& GetTag();
protected:
	std::string mName;
	std::string mTag;
};

