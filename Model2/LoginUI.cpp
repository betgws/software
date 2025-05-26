
#include "LoginUI.h"
#include "Login.h"
#include <string>

using namespace std;


/*
 * �Լ� �̸� : input
 * ��� : ��� ���
 * ���� ���� : Login*, File*
 * ��ȯ�� : ����
 */
void LoginUI::input(Login* login, File* file) {

	string id = "";
	string password = "";

	file->ifs.seekg(file->readed);
	file->ifs >> id >> password;
	file->readed = file->ifs.tellg();

	login->login(id, password);

	file->ofs << "2.1. �α���" << '\n';
	file->ofs << "> " << id << " " << password << " " << '\n' << '\n';

}

/*
 * �Լ� �̸� :startInterface
 * ��� : �̹� ���������� ���� ������̱� ������ �ƹ��� ����� ���� ����.
 * ���� ���� : ����
 * ��ȯ�� : ����
 */
void LoginUI::startInterface() {

}