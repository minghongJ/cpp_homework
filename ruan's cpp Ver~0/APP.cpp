#include "App.h"
#include "Menu.h"
#include "MenuMgr.h"

void App::init() {
}

void App::run() {
	bool running = true;
	while (running) {
		Menu* curMenu = MenuMgr::getInstance().currentMenu(); //ȡ��ǰ��˵�
		running = curMenu->process(); //����˵�
	}
}

void App::term() {
}