#ifndef SEVENSEGMENTDISPLAY_H
#define SEVENSEGMENTDISPLAY_H

const int DISPLAY_LEDS = 7;
const int DISPLAY_DIGITS = 10;

static int digit[10][7] = {
    {HIGH,HIGH,HIGH,HIGH,HIGH,HIGH,LOW},
    {LOW, HIGH,HIGH,LOW, LOW, LOW, LOW},
    {HIGH,HIGH,LOW, HIGH,HIGH,LOW, HIGH},
    {HIGH,HIGH,HIGH,HIGH,LOW, LOW, HIGH},
    {LOW, HIGH,HIGH,LOW, LOW, HIGH,HIGH},
    {HIGH,LOW, HIGH,HIGH,LOW, HIGH,HIGH},
    {HIGH,LOW, HIGH,HIGH,HIGH,HIGH,HIGH}, 
    {HIGH,HIGH,HIGH,LOW, LOW, LOW, LOW}, 
    {HIGH,HIGH,HIGH,HIGH,HIGH,HIGH,HIGH}, 
    {HIGH,HIGH,HIGH,HIGH,LOW, HIGH,HIGH}
};

void showNumber(int* disp, int dig);

#endif
