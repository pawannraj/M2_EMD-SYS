#ifndef __ACTIVITY_3_H__
#define __ACTIVITY_3_H__

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
