/**
 * @file project2.h
 * @author pawan (pawanraj3706@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-03-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef __PROJECT_2_H__
#define __PROJECT_2_H__

#include <avr/io.h>

#define SET_ADC_INTERRUPT_FLAG ADCSRA|=(1<<ADIF)

#define ADC_INTERRUPT_NOT !(ADCSRA & (1<<ADIF))

void Init_ADC();

uint16_t Read_ADC(uint8_t ch);



#endif
