#include "File.h"
#include <iostream>

/*
 * 기능 : 파일 입출력을 위한 초기화
 * 인자값 : 없음
 * 반환값 : 없음
 */
File::File() {	

	ifs.open("input.txt", std::ios::in);

	if (!ifs.is_open()) {
		std::cerr << "[ERROR] 파일 존재하지 않음 또는 열기 실패\n";
	}
	else {
		std::cout << "[DEBUG] input.txt 파일 열기 성공\n";
		int peek = ifs.peek();
		std::cout << "[DEBUG] 첫 문자 peek: " << peek << " (char: " << (char)peek << ")\n";
	}

	ofs.open("output.txt", std::ios::out);
	if (!ofs.is_open()) {
		std::cerr << "[ERROR] output.txt 열기 실패\n";
	}
	else {
		std::cout << "[DEBUG] output.txt 열기 성공\n";
	}
}