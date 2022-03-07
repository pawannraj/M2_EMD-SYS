/**
 * @file project1.h
 * @author pawan (pawanraj3706@gmail.com.com)
 * @brief 
 * @version 0.1
 * @date 2022-03-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef PROJECT1_H_INCLUDED
#define PROJECT1_H_INCLUDED

/**
 * @file project1.h
 * @author pawan (pawanraj3706@gmail.com.com)
 * @brief 
 * @version 0.1
 * @date 2022-03-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */


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


#endif // PROJECT1_H_INCLUDED
