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
	std::string serialNumber;//�ɹ��ڲ����
	std::string goodsName;//�ɹ����ڲ���
	std::string quantity;//����
	std::string type;//����ͺ�
	std::string requirement;//�ɹ�Ҫ��
	std::string information;//�ɹ���ȫ����Ϣ
};
#endif // !purchase_h

