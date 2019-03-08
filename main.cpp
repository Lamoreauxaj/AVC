#include "mbed.h"

DigitalOut myled(LED1);

void blink (double t) {
    myled = 1;
    wait(t);
    myled = 0;
    wait(t);
} 

int main() {
    while(1) {
        for (double t = 1; t > 0.001; t *= 0.7) {
            blink(t);
        }
    }
}
