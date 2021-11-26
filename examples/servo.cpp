#include <stdio.h>
#include <unistd.h>
#include <pigpio.h>

#define MIN_WIDTH 500
#define MAX_WIDTH 2500

int main(){
    if(gpioInitialize() < 0) return 1;
    else{
        gpioSetMode(18, PI_OUTPUT);
        for(int i = 0 ; i < 30 ; i++){
            gpioServo(18, MIN_WIDTH);
            sleep(1);
            gpioServo(18, MAX_WIDTH);
            sleep(1);
        }
    }
    return 0;
}