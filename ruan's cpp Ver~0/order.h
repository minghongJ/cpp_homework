#ifndef order_h
#define order_h
#include<iostream>
using namespace std;
enum class orderArray
{
	serialNumber,
	vendorName,
	goodsName,
	model,
	unitprice,
	unitofMesurement,
	count,
	price,
	requirement
};
const int orderAttributeCount = 9;
class order {
public:
	order() {};
	order(std::string serialNumber, std::string vendorName, std::string goodsName, std::string model,
		std::string unitprice, std::string unitofMesurement, std::string price, std::string count, std::string requirement) :serialNumber(serialNumber)
		, vendorName(vendorName), goodsName(goodsName), model(model), unitprice(unitprice), requirement(requirement), price(price)
		, unitofMesurement(unitofMesurement) {
		this->information = serialNumber + "," + vendorName + "," + goodsName + "," +
			model + "," + unitprice + "," + unitofMesurement + "," + count +","+ price + "," + requirement;
	};
	void showInfo() {
		cout << information;
	}
private:
	std::string serialNumber;
	std::string vendorName;
	std::string goodsName;
	std::string model;
	std::string unitprice;
	std::string unitofMesurement;
	std::string count;
	std::string price;
	std::string requirement;
	std::string information;
};
class order :
#endif // !order_h