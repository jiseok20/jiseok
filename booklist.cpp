#include<iostream>
#include<string>
#include"booklist.h"
#include<vector>
#include<fstream>
using namespace std;
void CBookList:: set(string managenum, string sortnum, string writer, int date) {
	this->managenum = managenum;
	this->sortnum = sortnum;
	this->writer = writer;
	this->date = date;
}
 string CBookList:: getmanagenum() {
	return managenum;
} // 도서관리번호 받기
string  CBookList::getsortnum() {
	return sortnum;
} // 분류 받기
string CBookList::getwriter() {
	return writer;
} // 저자 받기
int CBookList:: getbookdate() {
	return date;
}// 출판일 받기
ostream& operator<<(ostream& stream, CBookList a) {
	stream << "(" << a.managenum << "," << a.sortnum << "," << a.writer << "," << a.date << ")";
	return stream;
}
