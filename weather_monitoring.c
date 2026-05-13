#include <stdio.h>

int main() {

    float temperature = 28.5;

    printf("Aircraft Weather Monitoring System\n");

    if(temperature > 40) {
        printf("Warning: High Temperature Detected\n");
        printf("Activating Self-Landing Assistance\n");
    }
    else {
        printf("Weather Conditions Normal\n");
    }

    return 0;
}
