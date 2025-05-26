/**
 * Project Untitled
 */


#include "LogoutUI.h"
#include "Logout.h"
#include "File.h"


 /*
  * 함수 이름 :startInterface
  * 기능 : 이번 과제에서는 파일 입출력이기 때문에 아무런 기능을 하지 않음.
  * 전달 인자 : 없음
  * 반환값 : 없음
  */
void LogoutUI::startInterface() {

}

/*
 * 함수 이름 :logout
 * 기능 : 결과 출력.
 * 전달 인자 : Logout*, File*
 * 반환값 : 없음
 */
void LogoutUI::logout(Logout* logout, File* file) {

	string id = logout->logout();

	file->ofs << "2.2. 로그아웃" << '\n';
	file->ofs << "> " << id << '\n' << '\n';

}