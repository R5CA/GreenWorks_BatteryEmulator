#include <avr/io.h>
#include <util/delay.h>

#define OmegaDDR DDRB
#define OmegaPIN PINB
#define OmegaPort PORTB
#define OmegaPINnum PB0

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
				OmegaPort &= ~(1<<OmegaPINnum); // 1
				_delay_us(399);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 2
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 3
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 4
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 5
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 6
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 7
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 8
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 9
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 10
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 11
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 12
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 13
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 14
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 15
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 16
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 17
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 18
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 19
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 20
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 21
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 22
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 23
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 24
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 25
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				OmegaDDR &= ~(1<<OmegaPINnum);
				_delay_ms(100);

//******************************************************************* 2
				OmegaDDR |= (1<<OmegaPINnum);
				OmegaPort |= (1<<OmegaPINnum);	
				_delay_ms(3);
				OmegaPort &= ~(1<<OmegaPINnum); // 1
				_delay_us(399);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 2
				_delay_us(206);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 3
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 4
				_delay_us(206);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 5
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 6
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 7
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 8
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 9
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 10
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 11
				_delay_us(206);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 12
				_delay_us(206);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 13
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 14
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 15
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 16
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 17
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 18
				_delay_us(206);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 19
				_delay_us(206);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 20
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 21
				_delay_us(206);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 22
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 23
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 24
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 25
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				OmegaDDR &= ~(1<<OmegaPINnum);
				_delay_ms(100);
//******************************************************************* 3
				OmegaDDR |= (1<<OmegaPINnum);
				OmegaPort |= (1<<OmegaPINnum);	
				_delay_ms(3);
				OmegaPort &= ~(1<<OmegaPINnum); // 1
				_delay_us(399);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 2
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 3
				_delay_us(206);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 4
				_delay_us(206);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 5
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 6
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 7
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 8
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 9
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 10
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 11
				_delay_us(206);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 12
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 13
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 14
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 15
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 16
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 17
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 18
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 19
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 20
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 21
				_delay_us(206);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 22
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 23
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 24
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 25
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				OmegaDDR &= ~(1<<OmegaPINnum);
				_delay_ms(120);
//******************************************************************* 4
				OmegaDDR |= (1<<OmegaPINnum);
				OmegaPort |= (1<<OmegaPINnum);	
				_delay_ms(3);
				OmegaPort &= ~(1<<OmegaPINnum); // 1
				_delay_us(399);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 2
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 3
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 4
				_delay_us(206);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 5
				_delay_us(206);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 6
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 7
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 8
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 9
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 10
				_delay_us(206);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 11
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 12
				_delay_us(206);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 13
				_delay_us(206);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 14
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 15
				_delay_us(206);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 16
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 17
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 18
				_delay_us(206);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 19
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 20
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 21
				_delay_us(206);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 22
				_delay_us(206);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 23
				_delay_us(206);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 24
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 25
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				OmegaDDR &= ~(1<<OmegaPINnum);
				_delay_ms(200);
//******************************************************************* 5
				OmegaDDR |= (1<<OmegaPINnum);
				OmegaPort |= (1<<OmegaPINnum);	
				_delay_ms(3);
				OmegaPort &= ~(1<<OmegaPINnum); // 1
				_delay_us(399);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 2
				_delay_us(206);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 3
				_delay_us(206);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 4
				_delay_us(206);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 5
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 6
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 7
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 8
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 9
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 10
				_delay_us(206);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 11
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 12
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 13
				_delay_us(206);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 14
				_delay_us(206);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 15
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 16
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 17
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 18
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 19
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 20
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 21
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 22
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 23
				_delay_us(206);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 24
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				_delay_us(93);
				OmegaPort &= ~(1<<OmegaPINnum); // 25
				_delay_us(107);
				OmegaPort |= (1<<OmegaPINnum);
				OmegaDDR &= ~(1<<OmegaPINnum);
				_delay_ms(200);				
					
	}
}
