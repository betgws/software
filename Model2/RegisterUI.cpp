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
 * 함수 이름 :startInterface
 * 기능 : 이번 과제에서는 파일 입출력이기 때문에 아무런 기능을 하지 않음.
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
void RegisterUI::startInterface() {

}

/*
 * 함수 이름 : join
 * 기능 : 결과 출력
 * 전달 인자 : AddMember*,File*
 * 반환값 : 없음
 */
void RegisterUI::join(AddMember* addMember, File* file) {


	string userId = "";
	string password = "";
	string phoneNumber = "";

	file->ifs.seekg(file->readed);
	file->ifs >> userId >> password >> phoneNumber;
	file->readed = file->ifs.tellg();

	addMember->addNewMember(userId, password, phoneNumber);

	file->ofs << "1.1. 회원가입" << '\n';
	file->ofs << "> " << userId << " "  << password << " " << phoneNumber << " " << '\n' << '\n';
}

