#include "User.h"
#include <iostream>

using namespace std;


/*
 * 함수 이름 : getUserId
 * 기능 : 유저 아이디 반환
 * 전달 인자 : 없음
 * 반환값 : string
 */
string User::getUserId() {
    return userId;
}

/*
 * 함수 이름 : getPassword
 * 기능 : 유저 비밀번호
 * 전달 인자 : 없음
 * 반환값 : string
 */
string User::getPassword() {
    return password;
}