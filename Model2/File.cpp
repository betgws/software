#include "File.h"
#include <iostream>

/*
 * ��� : ���� ������� ���� �ʱ�ȭ
 * ���ڰ� : ����
 * ��ȯ�� : ����
 */
File::File() {	

	ifs.open("input.txt", std::ios::in);

	if (!ifs.is_open()) {
		std::cerr << "[ERROR] ���� �������� ���� �Ǵ� ���� ����\n";
	}
	else {
		std::cout << "[DEBUG] input.txt ���� ���� ����\n";
		int peek = ifs.peek();
		std::cout << "[DEBUG] ù ���� peek: " << peek << " (char: " << (char)peek << ")\n";
	}

	ofs.open("output.txt", std::ios::out);
	if (!ofs.is_open()) {
		std::cerr << "[ERROR] output.txt ���� ����\n";
	}
	else {
		std::cout << "[DEBUG] output.txt ���� ����\n";
	}
}