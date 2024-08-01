#ifndef CHECK_H
#define CHECK_H

typedef int (*CheckFunc)(float);

int isTemperatureInRange(float temperature);
int isSocInRange(float soc);
int isChargeRateInRange(float chargeRate);

int checkTemperature(float temperature);
int checkSoc(float soc);
int checkChargeRate(float chargeRate);

int batteryIsOk(float temperature, float soc, float chargeRate);

#endif // CHECK_H
