#ifndef purchase_h
#define purchase_h
#include <iostream>
#include<utility>
using namespace std;
enum class purchaseArray {
	serialNumber,
	goodsName,
	quantity,
	type,
	requirement
};
const int VendorAttributeCount = 5;
class purchase {
public:
	purchase() {};
	purchase(std::string serialNumber, std::string goodsName, std::string quantity, std::string type, std::string requirement) :
		serialNumber(serialNumber), goodsName(goodsName), quantity(quantity), type(type), requirement(requirement) {
		this->information = serialNumber + "," + goodsName + "," + quantity + "," + type + "," + requirement;
	};
	void show() {
		cout << this->information;
	}
	std::string getInfo() {
		return this->information;
	}
	std::string getName() {
		return this->goodsName;
	}
private:
	std::string serialNumber;//采购内部编号
	std::string goodsName;//采购项内部名
	std::string quantity;//数量
	std::string type;//规格型号
	std::string requirement;//采购要求
	std::string information;//采购项全局信息
};
#endif // !purchase_h

