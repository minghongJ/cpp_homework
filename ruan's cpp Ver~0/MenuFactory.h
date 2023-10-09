#pragma once
#include "MenuType.h"

//²Ëµ¥¹¤³§
class Menu;
class MenuFactory {
public:
	virtual ~MenuFactory() = default;
	virtual Menu* createMenu(MenuType menuType) = 0;
};

class MyMenuFactory :public MenuFactory {
public:
	virtual Menu* createMenu(MenuType menuType);
};
