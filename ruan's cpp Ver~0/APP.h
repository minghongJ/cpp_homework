#pragma once
class App {
public:
	virtual ~App() = default;
	virtual void init();	//��ʼ������
	virtual void run();	//����
	virtual void term();	//������
};
