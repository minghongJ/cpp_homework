#include "Menu.h"
#include "MenuMgr.h"
#include "MenuType.h"
#include "MenuFactory.h"

// ����
MenuMgr& MenuMgr::getInstance() {
	static std::shared_ptr<MenuMgr>  mgr(new MenuMgr());
	return *mgr;
}

// ���캯��
MenuMgr::MenuMgr() {
	std::shared_ptr<MenuFactory> fac = std::make_shared<MyMenuFactory>();
	for (int menuID = 0; menuID < MenuTypeCount; menuID++)
		mVctMenus.push_back(fac->createMenu(MenuType(menuID)));

	mCurrentMenu = mVctMenus[0]; //��ʼΪ���˵�
}

// ����ʱ���ͷ�ȫ��Menu
MenuMgr::~MenuMgr() {
	for (Menu* pMenu : mVctMenus)
		delete pMenu;
}