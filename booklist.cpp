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
} // ����������ȣ �ޱ�
string  CBookList::getsortnum() {
	return sortnum;
} // �з� �ޱ�
string CBookList::getwriter() {
	return writer;
} // ���� �ޱ�
int CBookList:: getbookdate() {
	return date;
}// ������ �ޱ�
ostream& operator<<(ostream& stream, CBookList a) {
	stream << "(" << a.managenum << "," << a.sortnum << "," << a.writer << "," << a.date << ")";
	return stream;
}
