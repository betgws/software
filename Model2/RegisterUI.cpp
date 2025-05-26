/**
 * Project Untitled
 */


#include "RegisterUI.h"
#include <string>
#include "AddMember.h"
#include "File.h"
#include <iostream>

using namespace std;

/*
 * �Լ� �̸� :startInterface
 * ��� : �̹� ���������� ���� ������̱� ������ �ƹ��� ����� ���� ����.
 * ���� ���� : ����
 * ��ȯ�� : ����
 */
void RegisterUI::startInterface() {

}

/*
 * �Լ� �̸� : join
 * ��� : ��� ���
 * ���� ���� : AddMember*,File*
 * ��ȯ�� : ����
 */
void RegisterUI::join(AddMember* addMember, File* file) {


	string userId = "";
	string password = "";
	string phoneNumber = "";

	file->ifs.seekg(file->readed);
	file->ifs >> userId >> password >> phoneNumber;
	file->readed = file->ifs.tellg();

	addMember->addNewMember(userId, password, phoneNumber);

	file->ofs << "1.1. ȸ������" << '\n';
	file->ofs << "> " << userId << " "  << password << " " << phoneNumber << " " << '\n' << '\n';
}

