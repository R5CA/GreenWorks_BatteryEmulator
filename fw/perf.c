#include <avr/io.h>
#include <util/delay.h>
#include <avr/pgmspace.h>

#define OmegaDDR DDRB
#define OmegaPIN PINB
#define OmegaPort PORTB
#define OmegaPINnum PB0

#define imp 25 // Количество импульсов в коде
#define impHi 93 // Длительность высокого уровня импульса в микросекундах
#define impLo0 399 // Длительность низкого уровня импульса 3-го типа в микросекундах
#define impLo1 206 // Длительность низкого уровня импульса 2-го типа в микросекундах
#define impLo2 107 // Длительность низкого уровня импульса 1-го типа в микросекундах

const PROGMEM uint8_t code1[imp] = {0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2}; // Комбинация импульсов 1-го кода
const PROGMEM uint8_t code2[imp] = {0,1,2,1,2,2,2,2,2,2,1,1,2,2,2,2,2,1,1,2,1,2,2,2,2}; // Комбинация импульсов 2-го кода
const PROGMEM uint8_t code3[imp] = {0,2,1,1,2,2,2,2,2,2,1,2,2,2,2,2,2,2,2,2,1,2,2,2,2}; // Комбинация импульсов 3-го кода
const PROGMEM uint8_t code4[imp] = {0,2,2,1,1,2,2,2,2,1,2,1,1,2,1,2,2,1,2,2,1,1,1,2,2}; // Комбинация импульсов 4-го кода
const PROGMEM uint8_t code5[imp] = {0,1,1,1,2,2,2,2,2,1,2,2,1,1,2,2,2,2,2,2,2,2,1,2,2}; // Комбинация импульсов 5-го кода

int main(void)
{
	OmegaDDR &= ~(1<<OmegaPINnum); // Порт на вход
	OmegaPort &= ~(1<<OmegaPINnum);  // Порт в лог 1
	while(1)
	{
//******************************************************************* Передаем 1-й код
				OmegaDDR |= (1<<OmegaPINnum); // Порт на выход
				OmegaPort |= (1<<OmegaPINnum);  // Порт в лог 1
				_delay_ms(3); // Небольшая пауза
				for(uint8_t i = 0; i < imp; i++) // Цикл передачи
				{
					if(pgm_read_byte(&code1[i]) == 1) // Если импульс 1-го типа
					{
						OmegaPort &= ~(1<<OmegaPINnum); // Порт в лог 0
						_delay_us(impLo1); // Выжидаем длительность низкого уровня импульса 1-го типа
						OmegaPort |= (1<<OmegaPINnum); // Порт в лог 1
						_delay_us(impHi); // Выжидаем длительность высокого уровня импульса
					}
					else if(pgm_read_byte(&code1[i]) == 2) // Если импульс 2-го типа
					{
						OmegaPort &= ~(1<<OmegaPINnum); // Порт в лог 0
						_delay_us(impLo2); // Выжидаем длительность низкого уровня импульса 2-го типа
						OmegaPort |= (1<<OmegaPINnum); // Порт в лог 1
						_delay_us(impHi); // Выжидаем длительность высокого уровня импульса
					}
					else if(pgm_read_byte(&code1[i]) == 0) // Если импульс 3-го типа
					{
						OmegaPort &= ~(1<<OmegaPINnum); // Порт в лог 0
						_delay_us(impLo0); // Выжидаем длительность низкого уровня импульса 3-го типа
						OmegaPort |= (1<<OmegaPINnum); // Порт в лог 1
						_delay_us(impHi); // Выжидаем длительность высокого уровня импульса
					}
				}
				OmegaDDR &= ~(1<<OmegaPINnum); // Порт на вход
				_delay_ms(100); // Задержка перед передачей следующего кода

//******************************************************************* Передаем 2-й код
				OmegaDDR |= (1<<OmegaPINnum); // Порт на выход
				OmegaPort |= (1<<OmegaPINnum);  // Порт в лог 1	
				_delay_ms(3);
				for(uint8_t i = 0; i < imp; i++) // Цикл передачи
				{
					if(pgm_read_byte(&code2[i]) == 1) // Если импульс 1-го типа
					{
						OmegaPort &= ~(1<<OmegaPINnum); // Порт в лог 0
						_delay_us(impLo1); // Выжидаем длительность низкого уровня импульса 1-го типа
						OmegaPort |= (1<<OmegaPINnum); // Порт в лог 1
						_delay_us(impHi); // Выжидаем длительность высокого уровня импульса
					}
					else if(pgm_read_byte(&code2[i]) == 2) // Если импульс 2-го типа
					{
						OmegaPort &= ~(1<<OmegaPINnum); // Порт в лог 0
						_delay_us(impLo2); // Выжидаем длительность низкого уровня импульса 2-го типа
						OmegaPort |= (1<<OmegaPINnum); // Порт в лог 1
						_delay_us(impHi); // Выжидаем длительность высокого уровня импульса
					}
					else if(pgm_read_byte(&code2[i]) == 0) // Если импульс 3-го типа
					{
						OmegaPort &= ~(1<<OmegaPINnum); // Порт в лог 0
						_delay_us(impLo0); // Выжидаем длительность низкого уровня импульса 3-го типа
						OmegaPort |= (1<<OmegaPINnum); // Порт в лог 1
						_delay_us(impHi); // Выжидаем длительность высокого уровня импульса
					}
				}
				OmegaDDR &= ~(1<<OmegaPINnum); // Порт на вход
				_delay_ms(100); // Задержка перед передачей следующего кода
//******************************************************************* Передаем 3-й код
				OmegaDDR |= (1<<OmegaPINnum); // Порт на выход
				OmegaPort |= (1<<OmegaPINnum);  // Порт в лог 1
				_delay_ms(3);
				for(uint8_t i = 0; i < imp; i++) // Цикл передачи
				{
					if(pgm_read_byte(&code3[i]) == 1) // Если импульс 1-го типа
					{
						OmegaPort &= ~(1<<OmegaPINnum); // Порт в лог 0
						_delay_us(impLo1); // Выжидаем длительность низкого уровня импульса 1-го типа
						OmegaPort |= (1<<OmegaPINnum); // Порт в лог 1
						_delay_us(impHi); // Выжидаем длительность высокого уровня импульса
					}
					else if(pgm_read_byte(&code3[i]) == 2) // Если импульс 2-го типа
					{
						OmegaPort &= ~(1<<OmegaPINnum); // Порт в лог 0
						_delay_us(impLo2); // Выжидаем длительность низкого уровня импульса 2-го типа
						OmegaPort |= (1<<OmegaPINnum); // Порт в лог 1
						_delay_us(impHi); // Выжидаем длительность высокого уровня импульса
					}
					else if(pgm_read_byte(&code3[i]) == 0) // Если импульс 3-го типа
					{
						OmegaPort &= ~(1<<OmegaPINnum); // Порт в лог 0
						_delay_us(impLo0); // Выжидаем длительность низкого уровня импульса 3-го типа
						OmegaPort |= (1<<OmegaPINnum); // Порт в лог 1
						_delay_us(impHi); // Выжидаем длительность высокого уровня импульса
					}
				}
				OmegaDDR &= ~(1<<OmegaPINnum); // Порт на вход
				_delay_ms(120); // Задержка перед передачей следующего кода
//******************************************************************* Передаем 4-й код
				OmegaDDR |= (1<<OmegaPINnum); // Порт на выход
				OmegaPort |= (1<<OmegaPINnum); // Порт в лог 1
				_delay_ms(3);
				for(uint8_t i = 0; i < imp; i++) // Цикл передачи
				{
					if(pgm_read_byte(&code4[i]) == 1) // Если импульс 1-го типа
					{
						OmegaPort &= ~(1<<OmegaPINnum); // Порт в лог 0
						_delay_us(impLo1); // Выжидаем длительность низкого уровня импульса 1-го типа
						OmegaPort |= (1<<OmegaPINnum); // Порт в лог 1
						_delay_us(impHi); // Выжидаем длительность высокого уровня импульса
					}
					else if(pgm_read_byte(&code4[i]) == 2) // Если импульс 2-го типа
					{
						OmegaPort &= ~(1<<OmegaPINnum); // Порт в лог 0
						_delay_us(impLo2); // Выжидаем длительность низкого уровня импульса 2-го типа
						OmegaPort |= (1<<OmegaPINnum); // Порт в лог 1
						_delay_us(impHi); // Выжидаем длительность высокого уровня импульса
					}
					else if(pgm_read_byte(&code4[i]) == 0) // Если импульс 3-го типа
					{
						OmegaPort &= ~(1<<OmegaPINnum); // Порт в лог 0
						_delay_us(impLo0); // Выжидаем длительность низкого уровня импульса 3-го типа
						OmegaPort |= (1<<OmegaPINnum); // Порт в лог 1
						_delay_us(impHi); // Выжидаем длительность высокого уровня импульса
					}
				}
				OmegaDDR &= ~(1<<OmegaPINnum); // Порт на вход
				_delay_ms(200); // Задержка перед передачей следующего кода
//******************************************************************* Передаем 5-й код
				OmegaDDR |= (1<<OmegaPINnum); // Порт на выход
				OmegaPort |= (1<<OmegaPINnum); // Порт в лог 1
				_delay_ms(3);
				for(uint8_t i = 0; i < imp; i++) // Цикл передачи
				{
					if(pgm_read_byte(&code5[i]) == 1) // Если импульс 1-го типа
					{
						OmegaPort &= ~(1<<OmegaPINnum); // Порт в лог 0
						_delay_us(impLo1); // Выжидаем длительность низкого уровня импульса 1-го типа
						OmegaPort |= (1<<OmegaPINnum); // Порт в лог 1
						_delay_us(impHi); // Выжидаем длительность высокого уровня импульса
					}
					else if(pgm_read_byte(&code5[i]) == 2) // Если импульс 2-го типа
					{
						OmegaPort &= ~(1<<OmegaPINnum); // Порт в лог 0
						_delay_us(impLo2); // Выжидаем длительность низкого уровня импульса 2-го типа
						OmegaPort |= (1<<OmegaPINnum); // Порт в лог 1
						_delay_us(impHi); // Выжидаем длительность высокого уровня импульса
					}
					else if(pgm_read_byte(&code5[i]) == 0) // Если импульс 3-го типа
					{
						OmegaPort &= ~(1<<OmegaPINnum); // Порт в лог 0
						_delay_us(impLo0); // Выжидаем длительность низкого уровня импульса 3-го типа
						OmegaPort |= (1<<OmegaPINnum); // Порт в лог 1
						_delay_us(impHi); // Выжидаем длительность высокого уровня импульса
					}
				}
				OmegaDDR &= ~(1<<OmegaPINnum); // Порт на вход
				_delay_ms(200); // Задержка перед новым циклом	
					
	}
}
