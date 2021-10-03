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

int toggleBit(int num, int i) {
	return (num ^ (1 << i));
}

int divideByTwo(int num) {
	return (num >> 1);
}

int multiplyByTwo(int num) {
	return (num << 1);
}

int coutSetBits(int num) {
	// Brian Kernighan's Algorithmn
	int count = 0;
    while (num) {
        num &= (num-1);
        count++;
    }
    return count;
}

string evenOrOdd(int num) {
	if ((num & 1) == 0) {
	  return "Even";
	}
	else {
	  return "Odd";
	}
}

int findLog2(int num) {
	int res = 0;
    while (num >>= 1) {
        res++;
    }
    return res;
}

int isPowerOf2(int num) {
	return (num && !(num & num-1));
}

int swap(int &x, int &y) {
    x = x ^ y; // x now becomes 15 (1111)
    y = x ^ y; // y becomes 10 (1010)
    x = x ^ y; // x becomes 5 (0101)

    // x = x ^ y ^ (y = x)
}

char upperToLower(char alphabet) {
	return (alphabet | ' ');
}

char lowerToUpper(char alphabet) {
	return (alphabet & '_');
}

void main() {
	int num = 101011;
	int i = 3;
	int x = 10;
	int y = 5;
	char lower = 'a';
	char upper = 'A';

	cout << getBit(num, i) << endl;
	cout << setBit(num, i) << endl;
	cout << clearBit(num, i) << endl;
	cout << clearBitsMSBthroughI(num, i) << endl;
	cout << clearBitsIthrough0(num, i) << endl;
	cout << toggleBit(num, i) << endl;

	cout << divideByTwo(num) << endl;
	cout << multiplyByTwo(num) << endl;

	cout << findLog2(num) << endl;
	cout << isPowerOf2(num) << endl;

	cout << "x: " << x << ", y: " << y << endl;
	swap(x, y);
	cout << "x: " << x << ", y: " << y << endl;

	cout << coutSetBits(num) << endl;
	cout << evenOrOdd(num) << endl;

	cout << upperToLower(upper) << endl;
	cout << lowerToUpper(lower) << endl;
}
