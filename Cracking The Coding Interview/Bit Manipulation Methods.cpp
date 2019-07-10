#include<bits/stdc++.h>
using namespace std;

bool getBit(int num, int i) {
	// Shift 1 by i positions to get a number like 001000
	// AND it with the num to set all the bits except ith position to 0
    return ((num & (1 << i)) != 0);
}

int setBit(int num, int i) {
	// Shift 1 by i positions to get a number like 001000
	// OR it with the num to update ith bit and leave rest as it is
	return (num | (1 << i));
}

int clearBit(int num, int i) {
	// Shift 1 by i positions and NOT it to get a number like 110111
	// AND it with the num to clear ith bit and leave rest as it is
	return (num & ~(1 << i));
}

int clearBitsMSBthroughI(int num, int i) {
	// Shift 1 by i positions and minus 1 to get a number starting with 0s then i number of 1s like 000111
	// AND it with the num to clear starting bits and leave i bits as it is
	return (num & ((1 << i) - 1));
}

int clearBitsIthrough0(int num, int i) {
	// Shift -1 (sequence of all 1s) by i+1 positions to get a number starting with i 1s and then 0s like 111000
	// AND it with the num to leave i bits as it is and clear next bits
	return (num & (-1 << (i + 1)));
}

int main() {
	int num = 101011;
	int i = 3;

	cout << getBit(num, i) << endl;
	cout << setBit(num, i) << endl;
	cout << clearBit(num, i) << endl;
	cout << clearBitsMSBthroughI(num, i) << endl;
	cout << clearBitsIthrough0(num, i) << endl;

	return 0;
}