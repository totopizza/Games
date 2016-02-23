#pragma once
#include "AppSetup.h"
#include "Utility.h"
#include <memory>

#include "SceneBase.h"
#include "Title.h"
#include "GameMain.h"
#include "SelectMode.h"

class SceneManager
{
public:

	void Update();

	/* Draw�֌W�͈ȉ��� */
	void Draw();

private:
	std::shared_ptr<SceneBase> base;


};