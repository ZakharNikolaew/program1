#include <iostream>
#include <cstdlib>
#include <random>

using namespace std;

int main () {
	default_random_engine generator;
	uniform_int_distribution<int> distribution(1,6);
	return distribution(generator);
}
