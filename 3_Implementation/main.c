/*
 * GccApplication2.c
 *
 * Created: 4/22/2022 9:13:16 PM
 * Author : Rohit Khandait
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include <string.h>
#include <stdlib.h>
#define F_CPU 8000000UL
static volatile int pulse=0;
static volatile int i=0;


int main(void)
{	
	DDRB = 0xFF;         //PB as output
	PORTB= 0x00;         //keep all LEDs off
    DDRD=0b11111011;
	_delay_us(50);
	EIMSK|=(1<<INT0);
	MCUCR|=(1<<ISC00);
	int16_t COUNTA = 0;
	sei();
	
    while (1) 
    {
		PORTD|=(1<<PIND0);
		_delay_us(15);
		PORTD &=~(1<<PIND0);
		COUNTA =pulse/58;
		if (COUNTA <= 0.5)
		{
			PORTB &=(~(1 <<PINB5));     
			PORTB|=(1<<PINB4);
			
			
		}
		else 
		{
			PORTB &=(~(1 <<PINB4));      
			PORTB|=(1<<PINB5);
			
		}
		
    }
}
ISR(INT0_vect)
{
	if (i==1)
	{
		TCCR1B=0;
		pulse=TCNT1;
		TCNT1=0;
		i=0;
	}
	if (i==0)
	{
		TCCR1B|=(1<<CS10);
		i=1;
	}
}


