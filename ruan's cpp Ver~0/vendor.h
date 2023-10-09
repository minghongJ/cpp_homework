#ifndef order_h
#define order_h
#include <utility>
#include<iostream>
using namespace std;
enum class venderArray {
	name,
	address,
	enterpriseForm,
	contact,
	phoneNumber,
	Position,
	level
};
const int VendorAttributeCount = 7;
class vendor {
public:
	vendor() {};
	vendor(std::string name, std::string address, std::string enterpriseForm, std::string contact,
		std::string phonenumber, std::string position, std::string level) :name(name), address(address),
		enterpriseForm(enterpriseForm), contact(contact), phonenumber(phonenumber), position(position), level(level) {
		this->information = name + "," + address + "," + enterpriseForm + "," + contact + "," + phonenumber + ","
			+ position + "," + level;
	}
	void showInfo() {
		cout << this->information;
	}
	std::string getInfo() {
		return this->information;
	}
	std::string getLevel() {
		return this->level;
	}
	std::string getName() {
		return this->name;
	}
private:
	std::string name;//��Ӧ������
	std::string address;//��ַ
	std::string enterpriseForm;//��ҵ����
	std::string contact;//��ϵ��
	std::string phonenumber;//��ϵ�˵绰
	std::string position;//��ϵ��ְ��
	std::string level;//��Ӧ�������Ǽ�
	std::string information;//��Ӧ��ȫ����Ϣ
};
#endif // !order_h