/*
Created by monsij
Shaped by Keil c51

*/

#include<reg51.h>
#include<stdio.h>

#define LEDPORT   P2
void Delay();

void main(void)
{
	while(1)
	{
		LEDPORT = 0xFF;
		Delay();
		LEDPORT = 0x00;
		Delay();
	}
}


void Delay(void)
{
	int i,j;
	for(i=0; i<10; i++)
	{
		for(j=0; j<30000; j++)
		{
		}
	}
}
