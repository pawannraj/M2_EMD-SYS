#ifndef ACTIVITY1_H_INCLUDED
#define ACTIVITY1_H_INCLUDED

#define F_CPU 16000000UL 	/**< Clock Frequency of MCU is 16 MHz */

#include <avr/io.h>
#include <util/delay.h>

/**
 * Function Definitions
 */

/**
 * @brief To blink the led when a person occuipes seat and switch on the heater
 *
 * @param state Pin level to which the LED Pin should be set
 */
void change_led_state(uint8_t state);

void delay_ms(uint32_t delay_time);
void peripheral_init(void);


#endif // ACTIVITY1_H_INCLUDED
