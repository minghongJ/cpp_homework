#pragma once

// ����˵�
class Menu {
public:
	virtual ~Menu() = default;
	virtual bool process() {
		display();
		int choice = selectMenuItem();
		return doChoice(choice);
	}
protected:
	virtual void display() const = 0;
	virtual int  selectMenuItem();
	virtual bool doChoice(int choice) = 0;
};

//���˵�
class MainMenu :public Menu {
protected:
	virtual void display() const;
	virtual bool doChoice(int choice);
};
//��Ӧ�̹���˵�
class VendorMenu :public Menu {
protected:
	virtual void display() const;
	virtual bool doChoice(int choice);
};
//��Ӧ����Ʒ�˵�
class ProductMenu :public Menu {
protected:
	virtual void display() const;
	virtual bool doChoice(int choice);
};
//�ɹ���˵�
class PurchaseMenu :public Menu {
protected:
	virtual void display() const;
	virtual bool doChoice(int choice);
};
//ѯ�۲˵�
class InquiryMenu :public Menu {
protected:
	virtual void display() const;
	virtual bool doChoice(int choice);
};
//�����˵�
class OrderMenu :public Menu {
protected:
	virtual void display() const;
	virtual bool doChoice(int choice);
};
//�����˵�	
class ExportMenu :public Menu {
protected:
	virtual void display() const;
	virtual bool doChoice(int choice);
};
