#ifndef CRYPT_H
#define CRYPT_H

#include <iostream>
#include <fstream>
#include <cstring>
#include <windows.h>
using namespace std;

class Crypt
{
    int abcLength;
    char *abc;
public:
    Crypt();
    void ReadFileABC(char *fileName);
    void OutData();

    void Encryption(char *stringData, int stringDataLength);
    void Decryption();
};

#endif
