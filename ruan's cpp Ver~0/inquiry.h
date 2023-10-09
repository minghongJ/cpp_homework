#ifndef inquiry_h
#define inquiry_h
#include<iostream>
using namespace std;
enum class inquiryArray
{
	serialNumber,
	vendorName,
	goodsName,
	model,
	goodsInfo,
	price,
	requirement,
	evaluate,
	level
};
const int inquiryAttributeCount = 9;
class inquiry {
public:
	inquiry() {};
	inquiry(std::string serialNumber, std::string vendorName, std::string goodsName, std::string model, std::string goodsInfo,
		std::string price, std::string requirement, std::string evaluate, std::string level, std::string information):serialNumber(serialNumber)
	,vendorName(vendorName),goodsName(goodsName),model(model),goodsInfo(goodsInfo),price(price),requirement(requirement),evaluate(evaluate)
	,level(level){
		this->information = serialNumber + ","+ vendorName + "," + goodsName + "," + 
		model + "," + goodsInfo + "," + price + "," + requirement + "," + evaluate + "," + level;
	};
	void showInfo() {
		cout << information;
	}
private:
	std::string serialNumber;
	std::string vendorName;
	std::string goodsName;
	std::string model;
	std::string goodsInfo;
	std::string price;
	std::string requirement;
	std::string evaluate;
	std::string level;
	std::string information;
};
#endif // !inquiry_h
