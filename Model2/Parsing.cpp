#include <stdio.h>
#include <iostream>
#include <string>

#include "AddMember.h"
#include "File.h"
#include "RegisterUI.h"
#include "Login.h"
#include "Logout.h"
#include "UserTable.h"
#include "BikeTable.h"
#include "AddBike.h"
#include "RentalBike.h"
#include "RentalList.h"
#include "RentalListUI.h"
#include "LoginUI.h"
#include "Admin.h"
using namespace std;

// 상수 선언
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"


// 함수선언
void doTask();
void join(UserTable* userTable, File* file);
void login(UserTable* userTable, File* file);
void logout(UserTable* userTable, File* file);
void registerBike(BikeTable* bikeTable, File* file);
void rentalBike(BikeTable* bikeTable, UserTable* userTable, File* file);
void showRentalList(BikeTable* bikeTable, UserTable* userTable,File* file);
void program_exit(File* file);


int main() {


    doTask();
    return 0;
}

void doTask() {

    File* file = new File();
    UserTable* userTable = new UserTable();
    BikeTable* bikeTable = new BikeTable();

    // 미리 저장
    userTable->addUser(new Admin("admin", "admin"));
    userTable->setLoginIndex(0);

    int Lev_1 = 0;
    int Lev_2 = 0;
    int is_program_exit = 0;
    while (!is_program_exit) {
        file->ifs >> Lev_1 >> Lev_2;
        file->readed = file->ifs.tellg();

        switch (Lev_1) {
        case 1: // 회원가입
            switch (Lev_2) {
            case 1:
                join(userTable, file);  // 1 1
                break;
            default:
                break;
            }
            break;

        case 2: // 로그인 / 로그아웃
            switch (Lev_2) {
            case 1:
                login(userTable, file);// 2 1
                break;
            case 2:
                logout(userTable, file); // 2 2
                break;
            default:
                break;
            }
            break;

        case 3: // 자전거 등록
            switch (Lev_2) {
            case 1:
                registerBike(bikeTable, file);
                break;
            default:
                break;
            }
            break;

        case 4: // 자전거 대여
            switch (Lev_2) {
            case 1:
                rentalBike(bikeTable, userTable, file);
                break;
            default:
                break;
            }
            break;

        case 5: // 대여 리스트 출력
            switch (Lev_2) {
            case 1:
                showRentalList(bikeTable, userTable, file);
                break;
            default:
                break;
            }
            break;

        case 6:
            switch (Lev_2) {
            case 1:
                program_exit(file);
                is_program_exit = 1;
                break;
            default:
                break;
            }
            break;

        default:
            break;
        }

    }
}

void join(UserTable* userTable, File* file) {

    AddMember* addMember = new AddMember(userTable);
    addMember->getRegisterUI()->join(addMember, file);
}

void login(UserTable* userTable, File* file) {
    Login* login = new Login(userTable);
    login->getLoginUI()->input(login, file);
}
void logout(UserTable* userTable, File* file) {
    Logout* logout = new Logout(userTable);
    logout->getLogoutUI()->logout(logout,file);
}
void registerBike(BikeTable* bikeTable, File* file) {
    AddBike* addBike = new AddBike(bikeTable);
    addBike->getBikeUI()->registerBike(addBike, file);

}
void rentalBike(BikeTable* bikeTable, UserTable* userTable, File* file) {
    RentalBike* rentalBIke = new RentalBike(bikeTable, userTable);
    rentalBIke->getRentalUI()->selectBike(rentalBIke, file);
}
void showRentalList(BikeTable* bikeTable, UserTable* userTable, File* file) {
    RentalList* rentalList = new RentalList(bikeTable, userTable);
    rentalList->getRentalListUI()->selectRentalList(rentalList, file);
}

void program_exit(File* file) {
    file->ofs << "6.1 종료";
    file->ifs.close();
    file->ofs.close();
}