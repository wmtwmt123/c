#include《iostream.h》
void mian（）
{
int x；
printf（“请输入一个整数”）；
scanf（“%d”，&x）；
if（x《10）
printf（“这个数小于10”）；
else
if（x<=99）
printf("这个数在10~99”)；
else
if（x《=999）
printf（“这个数在100~999”）；
else
if（x》=1000）
printf（“这个数在1000以上”）；
system（“pause”）；
}

