#include "AppSetup.h"

AppEnv& App::Get()
{
	// �E�B���h�E�̐ݒ�
	static AppEnv s_env(WINDOW_WIDTH, WINDOW_HEIGHT,
		IS_FULL_SCREEN, ENABLE_WINDOW_SIZE);

	return s_env;

}