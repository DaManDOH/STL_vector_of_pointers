// main.cpp

// Dan C. Wlodarski

#include <fstream>
#include <iostream>
#include <random>

#include "pointer_vector.h"

using namespace std;

int main(int argc, char * argv[]) {
	mt19937_64 generator;
	uniform_int_distribution<long> distribution(1,6);

	ofstream outfile("These-are-nums.txt",ios::app);
	for (int i = 0; i < 20; i++) {
		long long oneNum = distribution(generator);
		cout << "oneNum: " << oneNum << endl;
		outfile << "\"oneNum: " << oneNum << '\"' << endl;
	}
	outfile << endl;
	outfile.close();

	pointer_vector<long> onePV;
	vector<long*> stdVecOfP;

	return 0;
}