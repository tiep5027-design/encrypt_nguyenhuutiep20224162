#include <iostream>
#include <string>
#include <vector>
#include "rc4_encrypt.h"

int main() {
    std::string plaintext, key;

    std::cout << "Nhap plaintext: ";
    std::getline(std::cin, plaintext);

    std::cout << "Nhap key: ";
    std::getline(std::cin, key);

    std::vector<uint8_t> encrypted = rc4_encrypt(
        std::vector<uint8_t>(plaintext.begin(), plaintext.end()),
        std::vector<uint8_t>(key.begin(), key.end())
    );

    std::cout << "Ciphertext (hex): ";
    for (uint8_t c : encrypted)
        std::cout << std::hex << (int)c << " ";
    std::cout << std::endl;
    return 0;
}
