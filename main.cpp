#include<iostream>
#include"booklist.h"
#include<vector>
#include<string>
#include<fstream>
using namespace std;

int main() {
	vector<CBookList> book;
	CBookList A;
	const char* File = "CBookList.txt";
	book.push_back(A);
	cout << "-----도서관리 프로그램을 시작합니다-----" << endl;
	
	
	while (true) {
				
			cout << "(추가 : 1, 삭제 : 2, 검색 : 3, 파일저장 : 4, 파일열기 : 5, 종료 : 6)" << endl;
			int n;
			cin >> n;
			if (n < 1 || n > 6) {
				cout << "잘못 입력하셨습니다. 강제 종료 하겠습니다." << endl;
				n = 6;
			}
			int cnt = 0;
			string x, y, z;
			int d;
			
			
			switch (n) {
			case 1: //add //도서관리 번호, 분류, 저자, 출판일 전부 입력


				cout << "책을 추가 합니다>>" << endl;
				cout << "도서관리 번호, 분류, 저자, 출판일을 입력해주세요>> " << endl;

				cin >> x>> y >> z >> d;
				
					for (int k = 0; k < book.size(); k++) {
						if (book[k].getmanagenum() == x) {
							cout << "이미 입력되어 있습니다." << endl;
							cnt = 1;
						}
					}
				
					if (cnt == 0) {
						A.set(x, y, z, d);
						book.push_back(A);
					}
				
			break;

			case 2: 
				

				
					cout << "책을 삭제 합니다>>" << endl;
					cout << "도서관리 번호를 입력해주세요>>";

					cin >> x;

					for (int i = 0; i < book.size(); i++)
						if (book[i].getmanagenum() == x) {
							book.erase(book.begin() + i);
							cout << "책이 삭제 되었습니다" << endl;
							cnt = 1;
						}

					if (cnt == 0)
						cout << "책이 리스트에 존재하지 않습니다." << endl;
				

				break;

			case 3:
			{int count = 0;

			cout << "책을 검색합니다" << endl;
			cout << "책의 분류를 검색하시려면 1, 저자를 검색하시려면 2번을 누르십시오>>" << endl;
			int cek;

			cin >> cek;
			if (cek == 1) {
				cout << "검색할 책의 분류를 입력해주십시오>>" << endl;
				cin >> y;

				for (int k = 0; k < book.size(); k++) {
					if (book[k].getsortnum() == y) {
						cout << book[k] << endl;
						count++;
					}
				}
				if (count == 0)
					cout << "책이 없습니다" << endl;

			}
			else if (cek == 2) {
				cout << "검색할 책의 저자를 입력해주십시오>>" << endl;
				cin >> z;

				for (int k = 0; k < book.size(); k++)
					if (book[k].getwriter() == z) {
						cout << book[k] << endl;
						count++;
					}
				if (count == 0)
					cout << "책이 없습니다" << endl;

			}
			else
				cout << "잘못 입력하셨습니다" << endl;
			}
				break;

			case 4: 
			{
				fstream fout(File, ios::out|ios::binary);
				if (!fout)
					cout << File << "열 수 없습니다" << endl;
				else
				{
					for (int i = 1; i < book.size(); i++)
						fout << book[i];
					cout << "파일이 저장되었습니다" << endl;
				}
				
				fout.close(); 
			}
				break;

			case 5: {
				fstream fin(File, ios::in|ios::binary);
				if (!fin)
					cout << File << "열 수 없습니다" << endl;
				else
				{
					char buf[100];
					while(fin.getline(buf,100)){
						cout << buf << endl;
					}

					for (int i = 0; i < book.size(); i++)
						book.erase(book.begin()+i);
				
				}

				fin.close();
			}
				
				break;

			case 6:
				cout << "프로그램이 종료되었습니다. 감사합니다" << endl;
				return false;
			}

		}
	
	
	
}