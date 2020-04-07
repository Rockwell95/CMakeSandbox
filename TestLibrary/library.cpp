#include "library.h"

void TestLibrary::setString(const std::string &newString) {
    this->string = newString;
}

void TestLibrary::setValue(int value) {
    this->value = value;
}

std::string TestLibrary::getString() {
    return this->string;
}

int TestLibrary::getValue() {
    return this->value;
}

std::string TestLibrary::getVersionMinor() {
    return this->versionMinor;
}

std::string TestLibrary::getVersionMajor() {
    return this->versionMajor;
}
