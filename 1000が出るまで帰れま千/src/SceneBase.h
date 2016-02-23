#pragma once
#include "AppSetup.h"

class SceneBase
{
public:

	virtual ~SceneBase(){}

	virtual void Setup(){}

	virtual void Update(){}

	virtual void Draw(){}

private:

};