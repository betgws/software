#include "User.h"
#include <iostream>

using namespace std;


/*
 * �Լ� �̸� : getUserId
 * ��� : ���� ���̵� ��ȯ
 * ���� ���� : ����
 * ��ȯ�� : string
 */
string User::getUserId() {
    return userId;
}

/*
 * �Լ� �̸� : getPassword
 * ��� : ���� ��й�ȣ
 * ���� ���� : ����
 * ��ȯ�� : string
 */
string User::getPassword() {
    return password;
}