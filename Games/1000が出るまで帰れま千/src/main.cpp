#include "AppSetup.h"

int main()
{
	App::Get();

	Random random;
	random.setSeed(u_int(time(nullptr)));

	Font font = Font("res/font.ttf");

	int value = 0;

	int size = 50;

	int timer = 120;

	int count = 0;

	Vec2f position = Vec2f(0, 0);

	bool isWait = false;

	bool isPushKey = true;

	while (App::Get().isOpen()) {
		App::Get().begin();

		font.size(50);

		if (isPushKey){
			if (App::Get().isPushKey(GLFW_KEY_ENTER) || 
				App::Get().isPushKey(GLFW_KEY_SPACE)){
				value = random(0, 1000);
				count += 1;
			}
		}

		if (value == 11 || value == 22 || value == 33 || value == 44 || value == 55 || value == 66 || value == 77 || value == 88
			|| value == 99 || value == 111 || value == 222 || value == 333 || value == 555 || value == 666 || value == 888){
			drawPoint(-100, 100, size, Color::green);
		}
		else if (value == 777){
			drawPoint(-100, 100, size, Color::green);
			font.draw("ラッキーセブン！", Vec2f(0, 500), Color::yellow);
		}
		else if (value == 999){
			drawPoint(-100, 100, size, Color::green);
			font.draw("惜しいっ", Vec2f(0, 500), Color::white);
		}
		else if (value == 1000){
			drawPoint(100, -100, size, Color::yellow);
			font.draw("終わりっ", Vec2f(-200, 500), Color::white);
			font.draw("2秒後にしゅーりょー", Vec2f(-200, 400), Color::white);
			isWait = true;
			isPushKey = false;

		}
		else if (value % 2 == 0){
			drawPoint(-100, -100, size, Color::red);
		}
		else{
			drawPoint(100, 100, size, Color::blue);
		}

		if (isWait){
			timer -= 1;
		}

		if (timer < 0){
			break;
		}

		font.draw(std::to_string(value), Vec2f(-35, -30), Color::white);
		font.draw(std::to_string(count), Vec2f(-200, 600), Color::white);

		App::Get().end();
	}
}
