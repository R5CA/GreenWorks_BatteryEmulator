#include <avr/io.h>
#include <util/delay.h>
#include <avr/pgmspace.h>

#define OmegaDDR DDRB
#define OmegaPIN PINB
#define OmegaPort PORTB
#define OmegaPINnum PB0

#define imp 25
#define impHi 93
#define impLo0 399
#define impLo1 206
#define impLo2 107

const PROGMEM uint8_t code1[imp] = {0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2};
const PROGMEM uint8_t code2[imp] = {0,1,2,1,2,2,2,2,2,2,1,1,2,2,2,2,2,1,1,2,1,2,2,2,2};
const PROGMEM uint8_t code3[imp] = {0,2,1,1,2,2,2,2,2,2,1,2,2,2,2,2,2,2,2,2,1,2,2,2,2};
const PROGMEM uint8_t code4[imp] = {0,2,2,1,1,2,2,2,2,1,2,1,1,2,1,2,2,1,2,2,1,1,1,2,2};
const PROGMEM uint8_t code5[imp] = {0,1,1,1,2,2,2,2,2,1,2,2,1,1,2,2,2,2,2,2,2,2,1,2,2};

int main(void)
{
	OmegaDDR &= ~(1<<OmegaPINnum);
	OmegaPort &= ~(1<<OmegaPINnum);
	while(1)
	{
//******************************************************************* 1
				OmegaDDR |= (1<<OmegaPINnum);
				OmegaPort |= (1<<OmegaPINnum);	
				_delay_ms(3);
				for(uint8_t i = 0; i < imp; i++)
				{
					if(pgm_read_byte(&code1[i]) == 1)
					{
						OmegaPort &= ~(1<<OmegaPINnum);
						_delay_us(impLo1);
						OmegaPort |= (1<<OmegaPINnum);
						_delay_us(impHi);
					}
					else if(pgm_read_byte(&code1[i]) == 2)
					{
						OmegaPort &= ~(1<<OmegaPINnum);
						_delay_us(impLo2);
						OmegaPort |= (1<<OmegaPINnum);
						_delay_us(impHi);
					}
					else if(pgm_read_byte(&code1[i]) == 0)
					{
						OmegaPort &= ~(1<<OmegaPINnum);
						_delay_us(impLo0);
						OmegaPort |= (1<<OmegaPINnum);
						_delay_us(impHi);
					}
				}
				OmegaDDR &= ~(1<<OmegaPINnum);
				_delay_ms(100);

//******************************************************************* 2
				OmegaDDR |= (1<<OmegaPINnum);
				OmegaPort |= (1<<OmegaPINnum);	
				_delay_ms(3);
				for(uint8_t i = 0; i < imp; i++)
				{
					if(pgm_read_byte(&code2[i]) == 1)
					{
						OmegaPort &= ~(1<<OmegaPINnum);
						_delay_us(impLo1);
						OmegaPort |= (1<<OmegaPINnum);
						_delay_us(impHi);
					}
					else if(pgm_read_byte(&code2[i]) == 2)
					{
						OmegaPort &= ~(1<<OmegaPINnum);
						_delay_us(impLo2);
						OmegaPort |= (1<<OmegaPINnum);
						_delay_us(impHi);
					}
					else if(pgm_read_byte(&code2[i]) == 0)
					{
						OmegaPort &= ~(1<<OmegaPINnum);
						_delay_us(impLo0);
						OmegaPort |= (1<<OmegaPINnum);
						_delay_us(impHi);
					}
				}
				OmegaDDR &= ~(1<<OmegaPINnum);
				_delay_ms(100);
//******************************************************************* 3
				OmegaDDR |= (1<<OmegaPINnum);
				OmegaPort |= (1<<OmegaPINnum);	
				_delay_ms(3);
				for(uint8_t i = 0; i < imp; i++)
				{
					if(pgm_read_byte(&code3[i]) == 1)
					{
						OmegaPort &= ~(1<<OmegaPINnum);
						_delay_us(impLo1);
						OmegaPort |= (1<<OmegaPINnum);
						_delay_us(impHi);
					}
					else if(pgm_read_byte(&code3[i]) == 2)
					{
						OmegaPort &= ~(1<<OmegaPINnum);
						_delay_us(impLo2);
						OmegaPort |= (1<<OmegaPINnum);
						_delay_us(impHi);
					}
					else if(pgm_read_byte(&code3[i]) == 0)
					{
						OmegaPort &= ~(1<<OmegaPINnum);
						_delay_us(impLo0);
						OmegaPort |= (1<<OmegaPINnum);
						_delay_us(impHi);
					}
				}
				OmegaDDR &= ~(1<<OmegaPINnum);
				_delay_ms(120);
//******************************************************************* 4
				OmegaDDR |= (1<<OmegaPINnum);
				OmegaPort |= (1<<OmegaPINnum);	
				_delay_ms(3);
				for(uint8_t i = 0; i < imp; i++)
				{
					if(pgm_read_byte(&code4[i]) == 1)
					{
						OmegaPort &= ~(1<<OmegaPINnum);
						_delay_us(impLo1);
						OmegaPort |= (1<<OmegaPINnum);
						_delay_us(impHi);
					}
					else if(pgm_read_byte(&code4[i]) == 2)
					{
						OmegaPort &= ~(1<<OmegaPINnum);
						_delay_us(impLo2);
						OmegaPort |= (1<<OmegaPINnum);
						_delay_us(impHi);
					}
					else if(pgm_read_byte(&code4[i]) == 0)
					{
						OmegaPort &= ~(1<<OmegaPINnum);
						_delay_us(impLo0);
						OmegaPort |= (1<<OmegaPINnum);
						_delay_us(impHi);
					}
				}
				OmegaDDR &= ~(1<<OmegaPINnum);
				_delay_ms(200);
//******************************************************************* 5
				OmegaDDR |= (1<<OmegaPINnum);
				OmegaPort |= (1<<OmegaPINnum);	
				_delay_ms(3);
				for(uint8_t i = 0; i < imp; i++)
				{
					if(pgm_read_byte(&code5[i]) == 1)
					{
						OmegaPort &= ~(1<<OmegaPINnum);
						_delay_us(impLo1);
						OmegaPort |= (1<<OmegaPINnum);
						_delay_us(impHi);
					}
					else if(pgm_read_byte(&code5[i]) == 2)
					{
						OmegaPort &= ~(1<<OmegaPINnum);
						_delay_us(impLo2);
						OmegaPort |= (1<<OmegaPINnum);
						_delay_us(impHi);
					}
					else if(pgm_read_byte(&code5[i]) == 0)
					{
						OmegaPort &= ~(1<<OmegaPINnum);
						_delay_us(impLo0);
						OmegaPort |= (1<<OmegaPINnum);
						_delay_us(impHi);
					}
				}
				OmegaDDR &= ~(1<<OmegaPINnum);
				_delay_ms(200);				
					
	}
}
