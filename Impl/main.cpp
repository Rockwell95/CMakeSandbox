//
// Created by Nick Mancini on 2020-04-06.
//

#include <library.h>
#include <iostream>
#include "Version.h"

int main(int argc, char** argv) {
    TestLibrary test;

    std::cout << "Test on " << SYSTEM_NAME << " version " << test.getVersionMajor() << "." << test.getVersionMinor() << "\n";

    test.setValue(22);

    test.setString("Hello Test!");

    std::cout << "Results: " << test.getValue() << " - " << test.getString() << "\n";

    return EXIT_SUCCESS;
}