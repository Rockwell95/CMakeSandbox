//
// Created by Nick Mancini on 2020-04-06.
//

#include "exported.h"
#include "library.h"

extern "C" {
std::shared_ptr<TestLibrary> ptr = nullptr;

EXPORTED void initLib() {
    ptr = std::make_shared<TestLibrary>();
}

EXPORTED void setString(char* newString) {
    ptr->setString(newString);
}
EXPORTED void setValue(int value) {
    ptr->setValue(value);
}

EXPORTED const char* getString() {
    return ptr->getString().c_str();
}
EXPORTED int getValue() {
    return ptr->getValue();
}

EXPORTED const char* getVersionMajor() {
    return ptr->getVersionMajor().c_str();
}

EXPORTED const char* getVersionMinor() {
    return ptr->getVersionMinor().c_str();
}

}