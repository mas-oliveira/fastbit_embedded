/*
 * main.h
 *
 *  Created on: 26/01/2026
 *      Author: marcooliveira
 */

#ifndef MAIN_H_
#define MAIN_H_

uint32_t RCC_AHB1ENR_RST = (uint32_t) 0x00000000;

typedef union {
	uint32_t REG;

	struct {
		uint32_t GPIOAEN     :1; // GPIO A ENABLE
		uint32_t GPIOBEN     :1; // GPIO B ENABLE
		uint32_t GPIOCEN     :1; // GPIO C ENABLE
		uint32_t GPIODEN     :1; // GPIO D ENABLE
		uint32_t GPIOEEN     :1; // GPIO E ENABLE
		uint32_t GPIOFEN     :1; // GPIO F ENABLE
		uint32_t GPIOGEN     :1; // GPIO G ENABLE
		uint32_t GPIOHEN     :1; // GPIO H ENABLE
		uint32_t RESERVED0   :4;
		uint32_t CRCEN       :1; // CRC ENABLE
		uint32_t RESERVED1   :5;
		uint32_t BKPSRAMEN   :1; // BACKUP SRAM ENABLE
		uint32_t RESERVED2   :2;
		uint32_t DMA1EN      :1; // DMA1 ENABLE
		uint32_t DMA2EN      :1; // DMA2 ENABLE
		uint32_t RESERVED3   :6;
		uint32_t OTGHSEN     :1; // USB OTG HS ENABLE
		uint32_t OTGHSULPIEN :1; // USB OTG HS ULPI (UTMI + LPI) ENABLE
	} RCC_AHB1ENR_BITS;

} RCC_AHB1ENR_t;             // AHB1 (bus) Peripheral Clock Enable Register


uint32_t GPIO_MODER_PORT_A_RST = (uint32_t) 0xA8000000;
uint32_t GPIO_MODER_PORT_B_RST = (uint32_t) 0x00000280;
uint32_t GPIO_MODER_RST 	   = (uint32_t) 0x00000000;

typedef union {
	uint32_t REG;

	struct {
		uint32_t MODER0  :2; // PIN 0 Mode Register
		uint32_t MODER1  :2; // PIN 1 Mode Register
		uint32_t MODER2  :2; // PIN 2 Mode Register
		uint32_t MODER3  :2; // PIN 3 Mode Register
		uint32_t MODER4  :2; // PIN 4 Mode Register
		uint32_t MODER5  :2; // PIN 5 Mode Register
		uint32_t MODER6  :2; // PIN 6 Mode Register
		uint32_t MODER7  :2; // PIN 7 Mode Register
		uint32_t MODER8  :2; // PIN 8 Mode Register
		uint32_t MODER9  :2; // PIN 9 Mode Register
		uint32_t MODER10 :2; // PIN 10 Mode Register
		uint32_t MODER11 :2; // PIN 11 Mode Register
		uint32_t MODER12 :2; // PIN 12 Mode Register
		uint32_t MODER13 :2; // PIN 13 Mode Register
		uint32_t MODER14 :2; // PIN 14 Mode Register
		uint32_t MODER15 :2; // PIN 15 Mode Register
	} GPIO_MODER_BITS;

} GPIO_MODER_t; // GPIO Port Mode (I/O) Register

typedef union {
	uint32_t REG;

	struct {
		uint32_t IDR0  :1; // PIN 0 Input Data Register
		uint32_t IDR1  :1; // PIN 1 Input Data Register
		uint32_t IDR2  :1; // PIN 2 Input Data Register
		uint32_t IDR3  :1; // PIN 3 Input Data Register
		uint32_t IDR4  :1; // PIN 4 Input Data Register
		uint32_t IDR5  :1; // PIN 5 Input Data Register
		uint32_t IDR6  :1; // PIN 6 Input Data Register
		uint32_t IDR7  :1; // PIN 7 Input Data Register
		uint32_t IDR8  :1; // PIN 8 Input Data Register
		uint32_t IDR9  :1; // PIN 9 Input Data Register
		uint32_t IDR10 :1; // PIN 10 Input Data Register
		uint32_t IDR11 :1; // PIN 11 Input Data Register
		uint32_t IDR12 :1; // PIN 12 Input Data Register
		uint32_t IDR13 :1; // PIN 13 Input Data Register
		uint32_t IDR14 :1; // PIN 14 Input Data Register
		uint32_t IDR15 :1; // PIN 15 Input Data Register
	} GPIO_IDR_BITS;

} GPIO_IDR_t; // GPIO Input Data Register

uint32_t GPIO_ODR_RST = (uint32_t) 0x00000000;

typedef union {
	uint32_t volatile *const REG;

	struct {
	uint32_t ODR0  :1; // PIN 0 Input Data Register
	uint32_t ODR1  :1; // PIN 1 Input Data Register
	uint32_t ODR2  :1; // PIN 2 Input Data Register
	uint32_t ODR3  :1; // PIN 3 Input Data Register
	uint32_t ODR4  :1; // PIN 4 Input Data Register
	uint32_t ODR5  :1; // PIN 5 Input Data Register
	uint32_t ODR6  :1; // PIN 6 Input Data Register
	uint32_t ODR7  :1; // PIN 7 Input Data Register
	uint32_t ODR8  :1; // PIN 8 Input Data Register
	uint32_t ODR9  :1; // PIN 9 Input Data Register
	uint32_t ODR10 :1; // PIN 10 Input Data Register
	uint32_t ODR11 :1; // PIN 11 Input Data Register
	uint32_t ODR12 :1; // PIN 12 Input Data Register
	uint32_t ODR13 :1; // PIN 13 Input Data Register
	uint32_t ODR14 :1; // PIN 14 Input Data Register
	uint32_t ODR15 :1; // PIN 15 Input Data Register
	} GPIO_ODR_BITS;

} GPIO_ODR_t; // GPIO Output Data Register

#endif /* MAIN_H_ */
