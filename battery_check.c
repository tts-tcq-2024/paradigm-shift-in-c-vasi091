#include "battery_check.h"
#include "language_support.h"
#include <stdio.h>

int isTemperatureInRange(float temperature) {
    return (temperature >= 0 && temperature <= 45);
}

int isSocInRange(float soc) {
    return (soc >= 20 && soc <= 80);
}

int isChargeRateInRange(float chargeRate) {
    return (chargeRate <= 0.8);
}

int checkTemperature(float temperature) {
    if (!isTemperatureInRange(temperature)) {
        const char *messages[NUM_LANGUAGES] = {
            "Temperature out of range!\n",
            "Temperatur außerhalb des Bereichs!\n"
        };
        printMessage(messages);
        return 0;
    }
    return 1;
}

int checkSoc(float soc) {
    if (!isSocInRange(soc)) {
        const char *messages[NUM_LANGUAGES] = {
            "State of Charge out of range!\n",
            "Ladezustand außerhalb des Bereichs!\n"
        };
        printMessage(messages);
        return 0;
    }
    return 1;
}

int checkChargeRate(float chargeRate) {
    if (!isChargeRateInRange(chargeRate)) {
        const char *messages[NUM_LANGUAGES] = {
            "Charge Rate out of range!\n",
            "Laderate außerhalb des Bereichs!\n"
        };
        printMessage(messages);
        return 0;
    }
    return 1;
}

int batteryIsOk(float temperature, float soc, float chargeRate) {
    int isTempOk = checkTemperature(temperature);
    int isSocOk = checkSoc(soc);
    int isChargeRateOk = checkChargeRate(chargeRate);
    return isTempOk && isSocOk && isChargeRateOk;
}
