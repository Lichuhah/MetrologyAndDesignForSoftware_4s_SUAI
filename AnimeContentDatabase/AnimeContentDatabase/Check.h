#pragma once
#ifndef CHECK_HEADER
#define CHECK_HEADER

#include <string>
#include <iostream>

class Check {
public:
	int inputOnlyNumber();
	int inputOnlyNumberInRange(int left, int right);
	double inputOnlyDouble();
	std::string inputText();
};

#endif 
