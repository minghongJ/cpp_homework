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
	std::string name;//供应商名称
	std::string address;//地址
	std::string enterpriseForm;//企业类型
	std::string contact;//联系人
	std::string phonenumber;//联系人电话
	std::string position;//联系人职务
	std::string level;//供应商评价星级
	std::string information;//供应商全局信息
};
#endif // !order_h