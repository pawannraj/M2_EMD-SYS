#ifndef __ACTIVITY_2_H__
#define __ACTIVITY_2_H__

#include <avr/io.h>

#define SET_ADC_INTERRUPT_FLAG ADCSRA|=(1<<ADIF)

#define ADC_INTERRUPT_NOT !(ADCSRA & (1<<ADIF))

void Init_ADC();

uint16_t Read_ADC(uint8_t ch);



#endif
