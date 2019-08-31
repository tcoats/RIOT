/*
 * Copyright (C) 2018 HAW Hamburg
 *               2019 Thomas Coats
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @ingroup     boards_wisnode
 * @brief       Support for RAK811 Wisnode
 * @{
 *
 * @file
 * @brief       Common pin definitions and board configuration options
 *
 * @author      Leandro Lanzieri <leandro.lanzieri@haw-hamburg.de>
 * @author      Thomas Coats <github@voodoolabs.net>
 */

#ifndef BOARD_H
#define BOARD_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @name    LED pin definitions and handlers
 * @{
 */
#define LED0_PORT           GPIOA
#define LED0_PIN            GPIO_PIN(PORT_A, 12)
#define LED0_MASK           (1 << 12)

#define LED0_ON             (LED0_PORT->BSRR = (LED0_MASK << 16))
#define LED0_OFF            (LED0_PORT->BSRR = LED0_MASK)
#define LED0_TOGGLE         (LED0_PORT->ODR  ^= LED0_MASK)

#define LED1_PORT           GPIOB
#define LED1_PIN            GPIO_PIN(PORT_B, 4)
#define LED1_MASK           (1 << 4)

#define LED1_ON             (LED1_PORT->BSRR = (LED1_MASK << 16))
#define LED1_OFF            (LED1_PORT->BSRR = LED1_MASK)
#define LED1_TOGGLE         (LED1_PORT->ODR  ^= LED1_MASK)

// #define EN3V3_PORT          GPIOA
// #define EN3V3_PIN           GPIO_PIN(PORT_A, 11)
// #define EN3V3_MASK          (1 << 11)

// #define EN3V3_ON            (EN3V3_PORT->BSRR = EN3V3_MASK)
// #define EN3V3_OFF           (EN3V3_PORT->BSRR = (EN3V3_MASK << 16))
// #define EN3V3_TOGGLE        (EN3V3_PORT->ODR  ^= EN3V3_MASK)
/** @} */

/**
 * @name        SX127X
 *
 * SX127X configuration.
 * @{
 */
// #define SX127X_PARAM_SPI_NSS            GPIO_PIN(PORT_B, 0)
// #define SX127X_PARAM_RESET              GPIO_PIN(PORT_A, 4)
// #define SX127X_PARAM_DIO0               GPIO_PIN(PORT_B, 1)
// #define SX127X_PARAM_DIO1               GPIO_PIN(PORT_B, 10)
// #define SX127X_PARAM_DIO2               GPIO_PIN(PORT_B, 11)
// #define SX127X_PARAM_DIO3               GPIO_PIN(PORT_B, 7)
/** @} */

/**
 * @brief Initialize board specific hardware, including clock, LEDs and std-IO
 */
void board_init(void);

#ifdef __cplusplus
}
#endif

#endif /* BOARD_H */
/** @} */
