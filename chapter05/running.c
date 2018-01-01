//  Author:Zheng Jun
//  Date:2018/1/1
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

void run() {
    const int S_PER_M = 60;
    const int S_PER_H = 3600;
    const double M_PER_K = 0.62137;
    double distk, distm;
    double rate;
    int min, sec;
    int time;
    double mtime;
    int mmin, msec;
    printf("This program converts your time for a metric race\n");
    printf("to a time for running for a mile and to your average\n");
    printf("speed in miles per hour\n");
    printf("Please enter ,in kilometers,the distance run.\n");
    scanf("%lf", &distk);
    printf("Next,enter the time in minutes and seconds.\n");
    printf("Begin by entering the minutes:\n");
    scanf("%d", &min);
    printf("Now enter the seconds.\n");
    scanf("%d", &sec);
    time = S_PER_M * min + sec;
    distm = distk * M_PER_K;
    rate = distm / time * S_PER_H;
    mtime = time / distm;
    mmin = (int) mtime / S_PER_M;
    msec = (int) mtime % S_PER_M;
    printf("You ran %1.2f km (%1.2f miles) in %d min,%d sec.\n",distk,distm,min,sec);
    printf("The pace corresponding to run a mile in %d min,",mmin);
    printf("%d sec.\nYour average speed was %1.2f mph.\n",msec,rate);

}
//This program converts your time for a metric race
//to a time for running for a mile and to your average
//speed in miles per hour
//Please enter ,in kilometers,the distance run.
//21.0975
//Next,enter the time in minutes and seconds.
//Begin by entering the minutes:
//149
//Now enter the seconds.
//49
//You ran 21.10 km (13.11 miles) in 149 min,49 sec.
//The pace corresponding to run a mile in 11 min,25 sec.
//Your average speed was 5.25 mph.
//
//Process finished with exit code 41