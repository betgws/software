/**
 * Project Untitled
 */


#include "LogoutUI.h"
#include "Logout.h"
#include "File.h"


 /*
  * �Լ� �̸� :startInterface
  * ��� : �̹� ���������� ���� ������̱� ������ �ƹ��� ����� ���� ����.
  * ���� ���� : ����
  * ��ȯ�� : ����
  */
void LogoutUI::startInterface() {

}

/*
 * �Լ� �̸� :logout
 * ��� : ��� ���.
 * ���� ���� : Logout*, File*
 * ��ȯ�� : ����
 */
void LogoutUI::logout(Logout* logout, File* file) {

	string id = logout->logout();

	file->ofs << "2.2. �α׾ƿ�" << '\n';
	file->ofs << "> " << id << '\n' << '\n';

}