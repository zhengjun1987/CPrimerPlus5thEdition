/**
 *  Author:Zheng Jun
 *  Date:2018/3/20 00:52
 *  E-mail:zhengjun1987@outlook.com
 *  Desc:
 */
#include <math.h>
#include <stdio.h>

#define RAD_TO_DEG (180/(4*atan(1)))

typedef struct polar_v {
    double magnitude;
    double angle;
} POLAR_V;

typedef struct rect_v {
    double x;
    double y;
} RECT_V;


POLAR_V rect_to_polar(RECT_V rect_v);

int rctpl() {
    RECT_V input;
    POLAR_V result;
    puts("Enter x,y coordinates:enter q to quit :");
    while (scanf("%lf %lf", &input.x, &input.y) == 2) {
        result = rect_to_polar(input);
        printf("Magnitude = %0.2F,angle = %0.2f\n", result.magnitude, result.angle);
    }
    puts("Bye!");
    return 0;
}
//    Enter x,y coordinates:enter q to quit :
//    10 10
//    Magnitude = 14.14,angle = 45.00
//    -12 -5
//    Magnitude = 13.00,angle = -157.38
//    q
//    Bye!
//
//    Process finished with exit code 0

POLAR_V rect_to_polar(RECT_V rect_v) {
    POLAR_V result;
    result.magnitude = sqrt(rect_v.x * rect_v.x + rect_v.y * rect_v.y);
    if (result.magnitude == 0) {
        result.angle = 0;
    } else {
        result.angle = RAD_TO_DEG * atan2(rect_v.y, rect_v.x);
    }
    return result;
}