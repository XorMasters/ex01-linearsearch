#include <iostream>
#include "linearsearch.h"

int main(int argc, char *argv[]) {
	uint64_t values[] = {9, 1, 7, 2, 5, 4, 3, 6, 1, 8};
	int64_t index = edu::vcccd::vc::csv15::find<uint64_t>(0, values, 9);
	std::cout << index << std::endl;
}