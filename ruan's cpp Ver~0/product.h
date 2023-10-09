#ifndef product_h
#define product_h
#include <utility>
#include<iostream>
using namespace std;
enum class productArray {
	vendorName,
	goodsName,
	model,
	goodsInfo
};
const int productAttributeCount = 4;
class product {
public:
	product() {};
	product(std::string vendorName, std::string goodsName, std::string model, std::string goodsInfo) :vendorName(vendorName)
		, goodsName(goodsName), model(model), goodsInfo(goodsInfo) {
		this->Information = vendorName+ "," + goodsName + "," + model + "," + goodsInfo;
	};
	void showInfo() {
		cout << this->Information;
	}
	std::string getVendor() { return vendorName; }
private:
	std::string vendorName;
	std::string goodsName;
	std::string	model;
	std::string	goodsInfo;
	std::string Information;
};
#endif // !product_h
