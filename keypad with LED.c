/*
 * keypad_with_LED.c
 *
 * Created: 6/9/2024 11:58:41 AM
 *  Author: Ephraim
 */ 

#include <avr/io.h>

int main(void)
{
    DDRB = 0b11111111; // LED
    DDRC = 0b11111111; // Keypad Output
    DDRD = 0b00000000; // Keypad input

    while (1)
    {
        PORTC = 0b00000100;
        if (PIND & (1 << PD0))
        {
            PORTB = 1;
        }
        else if (PIND & (1 << PD1))
        {
            PORTB = 4;
        }
        else if (PIND & (1 << PD2))
        {
            PORTB = 7;
        }
        else if (PIND & (1 << PD3))
        {
            PORTB = '*';
        }
		
		                     PORTC = 0b00000010;
                              if (PIND & (1 << PD0))
                             {
                               PORTB = 2;
                             }
                              else if (PIND & (1 << PD1))
                               {
                                  PORTB = 5;
                                  }
                                else if (PIND & (1 << PD2))
                                {
                                  PORTB = 8;
                                 }
                                  else if (PIND & (1 << PD3))
                                   {
                                      PORTB = 0;
                                    }
       
	     PORTC = 0b00000001;
         if (PIND & (1 <<0))
           {
                PORTB = 3;
             }
              else if (PIND & (1 << PD1))
             {
                PORTB = 6;
              }
               else if (PIND & (1 << PD2))
              {
                PORTB = 9;
               }
                else if (PIND & (1 << PD3))
               {
                   PORTB = '#';
                }
    }
}
