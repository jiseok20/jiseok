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
	cout << "-----�������� ���α׷��� �����մϴ�-----" << endl;
	
	
	while (true) {
				
			cout << "(�߰� : 1, ���� : 2, �˻� : 3, �������� : 4, ���Ͽ��� : 5, ���� : 6)" << endl;
			int n;
			cin >> n;
			if (n < 1 || n > 6) {
				cout << "�߸� �Է��ϼ̽��ϴ�. ���� ���� �ϰڽ��ϴ�." << endl;
				n = 6;
			}
			int cnt = 0;
			string x, y, z;
			int d;
			
			
			switch (n) {
			case 1: //add //�������� ��ȣ, �з�, ����, ������ ���� �Է�


				cout << "å�� �߰� �մϴ�>>" << endl;
				cout << "�������� ��ȣ, �з�, ����, �������� �Է����ּ���>> " << endl;

				cin >> x>> y >> z >> d;
				
					for (int k = 0; k < book.size(); k++) {
						if (book[k].getmanagenum() == x) {
							cout << "�̹� �ԷµǾ� �ֽ��ϴ�." << endl;
							cnt = 1;
						}
					}
				
					if (cnt == 0) {
						A.set(x, y, z, d);
						book.push_back(A);
					}
				
			break;

			case 2: 
				

				
					cout << "å�� ���� �մϴ�>>" << endl;
					cout << "�������� ��ȣ�� �Է����ּ���>>";

					cin >> x;

					for (int i = 0; i < book.size(); i++)
						if (book[i].getmanagenum() == x) {
							book.erase(book.begin() + i);
							cout << "å�� ���� �Ǿ����ϴ�" << endl;
							cnt = 1;
						}

					if (cnt == 0)
						cout << "å�� ����Ʈ�� �������� �ʽ��ϴ�." << endl;
				

				break;

			case 3:
			{int count = 0;

			cout << "å�� �˻��մϴ�" << endl;
			cout << "å�� �з��� �˻��Ͻ÷��� 1, ���ڸ� �˻��Ͻ÷��� 2���� �����ʽÿ�>>" << endl;
			int cek;

			cin >> cek;
			if (cek == 1) {
				cout << "�˻��� å�� �з��� �Է����ֽʽÿ�>>" << endl;
				cin >> y;

				for (int k = 0; k < book.size(); k++) {
					if (book[k].getsortnum() == y) {
						cout << book[k] << endl;
						count++;
					}
				}
				if (count == 0)
					cout << "å�� �����ϴ�" << endl;

			}
			else if (cek == 2) {
				cout << "�˻��� å�� ���ڸ� �Է����ֽʽÿ�>>" << endl;
				cin >> z;

				for (int k = 0; k < book.size(); k++)
					if (book[k].getwriter() == z) {
						cout << book[k] << endl;
						count++;
					}
				if (count == 0)
					cout << "å�� �����ϴ�" << endl;

			}
			else
				cout << "�߸� �Է��ϼ̽��ϴ�" << endl;
			}
				break;

			case 4: 
			{
				fstream fout(File, ios::out|ios::binary);
				if (!fout)
					cout << File << "�� �� �����ϴ�" << endl;
				else
				{
					for (int i = 1; i < book.size(); i++)
						fout << book[i];
					cout << "������ ����Ǿ����ϴ�" << endl;
				}
				
				fout.close(); 
			}
				break;

			case 5: {
				fstream fin(File, ios::in|ios::binary);
				if (!fin)
					cout << File << "�� �� �����ϴ�" << endl;
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
				cout << "���α׷��� ����Ǿ����ϴ�. �����մϴ�" << endl;
				return false;
			}

		}
	
	
	
}