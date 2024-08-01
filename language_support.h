#ifndef LANGUAGE_H
#define LANGUAGE_H

typedef enum {
    ENGLISH,
    GERMAN,
    NUM_LANGUAGES
} Language;

extern Language currentLanguage;

void printMessage(const char *messages[NUM_LANGUAGES]);

#endif // LANGUAGE_H
