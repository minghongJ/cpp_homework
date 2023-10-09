#pragma once
#include <memory>
#include <vector>
#include "MenuType.h"
// ������MenuMgr
class Menu;
class MenuMgr {
public:
	static MenuMgr& getInstance();
protected:
	MenuMgr();
	~MenuMgr();
	MenuMgr(const MenuMgr&) = delete;	//��ֹ����
	MenuMgr(MenuMgr&&) = delete;			//��ֹת�ƿ���
	MenuMgr& operator=(const MenuMgr&) = delete;	//��ֹ��ֵ
public:
	// ��ǰ��˵��� getter/setter
	Menu* currentMenu() const { return mCurrentMenu; }
	void   setCurrentMenu(MenuType menuType)
	{
		mCurrentMenu = mVctMenus[(int)menuType];
	}
private:
	std::vector<Menu*>	mVctMenus = {}; //ȫ���˵�����
	Menu* mCurrentMenu = nullptr;	//��˵�
};
