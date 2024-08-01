#include "language.h"
#include <stdio.h>

// Global variable for the current language
Language currentLanguage = ENGLISH;

void printMessage(const char *messages[NUM_LANGUAGES]) {
    printf("%s", messages[currentLanguage]);
}
