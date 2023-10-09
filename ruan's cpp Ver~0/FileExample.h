#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

class FileExample {
public:
	void readDataFile( const string & fileName ) {
		ifstream inFile( fileName, ios_base::in );
		string strRecord;
		//���ж��뵽strRecord�ַ�����
		while ( getline( inFile, strRecord ) ) {
			//���ַ������ָ����ָ��ɶ���ַ���
			splitByDelimiter( strRecord, ',' );
			cout << "-----------" << endl;
		}
	}

	//���ַ������ָ����ָ��ɶ���ַ���
	void splitByDelimiter( const string & str, char delimiter ) {
		istringstream sstream( str );
		string field;
		while ( getline( sstream, field, delimiter ) ) {
			cout << field << endl;
		}
	}

	//������ı��ļ�
	void writeDataFile( const string& fileName) {
		ofstream outFile( fileName, ios_base::out );
		outFile << "abc1" << endl;
		outFile << "abc2" << endl;
	}
};