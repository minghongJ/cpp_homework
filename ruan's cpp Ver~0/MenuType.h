#pragma once
enum class MenuType {
	MAIN_MENU = 0,
	VENDOR_MENU,	//��Ӧ�̹���˵�
	PRODUCT_MENU,	//��Ӧ����Ʒ�˵�
	PURCHASE_MENU,	//�ɹ���˵�
	INQUIRY_MENU,	//ѯ�۲˵�
	ORDER_MENU,		//�����˵�
	EXPORT_MENU		//�����˵�	
};
const int MenuTypeCount = (int)MenuType::EXPORT_MENU + 1;
