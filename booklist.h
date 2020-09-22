#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;

class CBookList {
	string managenum; //도서관리 번호
	string sortnum; //분류
	string writer; //저자
	int date; //출판일
public:

	void set(string managenum, string sortnum, string writer, int date);
	string getmanagenum();
	string getsortnum();
	string getwriter();
	int getbookdate();
	friend  ostream& operator<<(ostream& stream, CBookList a);
};