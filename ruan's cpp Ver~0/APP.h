#pragma once
class App {
public:
	virtual ~App() = default;
	virtual void init();	//初始化工作
	virtual void run();	//运行
	virtual void term();	//清理工作
};
