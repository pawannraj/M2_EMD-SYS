/**
 * @file activity3.c
 * @author pawan (pawanraj3706@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-03-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef __activity_3_H__
#define __activity_3_H__

#include <avr/io.h>
#include <util/delay.h>


/**
 * @brief A function to setup timer1 with channel A for pulse width modulation with wave generation mode of PWM.
 * 
 */
void TimerWave(void);

/**
 * @brief A function which receives ADC input from temperature sensor and outputs as a PWM waveform.
 * 
 * @param ADC_val 
 */
void outputPWM(uint16_t ADC_val);

#endif
