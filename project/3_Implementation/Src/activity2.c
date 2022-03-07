#include "activity2.h"
#include <avr/io.h>
void Init_ADC()
{
    ADMUX=(1<<REFS0);
    ADCSRA=(1<<ADEN)|(7<<ADPS0);
}

uint16_t Read_ADC(uint8_t ch)
{
    ADMUX&=0xf8;
    ch = ch&0b00000111;
    ADMUX|=ch;

    ADCSRA|=(1<<ADSC);

    while(ADC_INTERRUPT_NOT);
    SET_ADC_INTERRUPT_FLAG;
    return(ADC);

}
