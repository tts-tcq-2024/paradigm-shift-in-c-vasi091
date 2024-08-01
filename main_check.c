#include <assert.h>
#include <stdio.h>
#include "check.h"
#include "language.h"

void runTests() {
    assert(batteryIsOk(25, 70, 0.7));
    assert(!batteryIsOk(50, 85, 0));
    assert(!batteryIsOk(30, 85, 0));
    assert(!batteryIsOk(25, 70, 0.9));
    printf("All tests passed!\n");
}

int main() {
    // Set the language to German
    currentLanguage = GERMAN;
    runTests();
    
    // Set the language to English
    currentLanguage = ENGLISH;
    runTests();

    return 0;
}
