#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;

class CBookList {
	string managenum; //�������� ��ȣ
	string sortnum; //�з�
	string writer; //����
	int date; //������
public:

	void set(string managenum, string sortnum, string writer, int date);
	string getmanagenum();
	string getsortnum();
	string getwriter();
	int getbookdate();
	friend  ostream& operator<<(ostream& stream, CBookList a);
};