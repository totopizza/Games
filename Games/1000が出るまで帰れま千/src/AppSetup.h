#pragma once
#include "lib\framework.hpp"

// ���̃w�b�_��include�����
// �搶�̃��C�u�����̋@�\���ǂ��ł��g����悤�ɂ��Ă���
// �f�U�C���p�^�[���@�V���O���g��

#define WINDOW_WIDTH		(1024)
#define WINDOW_HEIGHT		(1664)
#define IS_FULL_SCREEN		(false)
#define ENABLE_WINDOW_SIZE	(true)

class App
{
public:
	static AppEnv& Get();

private:
	App();
};