
#include "LoginUI.h"
#include "Login.h"
#include <string>

using namespace std;


/*
 * 함수 이름 : input
 * 기능 : 결과 출력
 * 전달 인자 : Login*, File*
 * 반환값 : 없음
 */
void LoginUI::input(Login* login, File* file) {

	string id = "";
	string password = "";

	file->ifs.seekg(file->readed);
	file->ifs >> id >> password;
	file->readed = file->ifs.tellg();

	login->login(id, password);

	file->ofs << "2.1. 로그인" << '\n';
	file->ofs << "> " << id << " " << password << " " << '\n' << '\n';

}

/*
 * 함수 이름 :startInterface
 * 기능 : 이번 과제에서는 파일 입출력이기 때문에 아무런 기능을 하지 않음.
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
void LoginUI::startInterface() {

}