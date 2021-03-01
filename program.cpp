#include <string>
#include <iostream>
#include <map>

using namespace std;

std::string getRandomString();

const int keyLength = 32;

int main() {
    cout << getRandomString() << endl;
}

std::string decrypt(std::string message) {

}

std::string getRandomString() {
    char alphabet[] = {'a', 'b', 'c','d','e','f',
        'g','h','i','j','k','l','m','n','o','p','q',
        's','t','u','v','w','x','y','z'};
    std::string result;
    for (int i = 0; i < keyLength; i++) {
        result += alphabet[rand() % 25];
    }
    return result;
}

double metric(std::map<char, double> frequencyMap, std::map<char, double> frequencyMapOfCipherText) {
    for 
}

std::map<char, double> getFrequencyMapOfCipherText(string cipherText) {
    //todo
}

