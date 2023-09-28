#include <stdio.h>

int main() {
    int angle;
    printf("Enter Number : ");
    scanf("%d", &angle);

    int modAngle = angle % 360;

    if (modAngle == 0 || modAngle == 180 || modAngle == -180) {
        printf("X-axis");
    } else if (modAngle == 90 || modAngle == 270 || modAngle == -90 || modAngle == -270) {
        printf("Y-axis");
    } else if ((modAngle > 0 && modAngle < 90) || (modAngle < -270 && modAngle > -360)) {
        printf("Quadrant 1");
    } else if ((modAngle > 90 && modAngle < 180) || (modAngle > -270 && modAngle < -180)) {
        printf("Quadrant 2");
    } else if ((modAngle > 180 && modAngle < 270) || (modAngle > -180 && modAngle < -90)) {
        printf("Quadrant 3");
    } else if ((modAngle > 270 && modAngle < 360) || (modAngle > -90 && modAngle < 0)) {
        printf("Quadrant 4");
    }

    return 0;
}
