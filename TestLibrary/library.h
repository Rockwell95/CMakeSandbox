#ifndef TESTLIBRARY_LIBRARY_H
#define TESTLIBRARY_LIBRARY_H

#include <string>
#include <Version.h>
#include "exported.h"

class EXPORTED TestLibrary {
public:
    TestLibrary() = default;

    ~TestLibrary() = default;

    void setString(const std::string &newString);

    void setValue(int value);

    std::string getString();

    int getValue();

    std::string getVersionMajor();

    std::string getVersionMinor();

private:
    int value{};
    std::string versionMajor{VERSION_MAJOR};
    std::string versionMinor{VERSION_MINOR};
    std::string string;
};

#endif //TESTLIBRARY_LIBRARY_H
