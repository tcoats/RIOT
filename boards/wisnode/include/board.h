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

#define LED0_PORT          GPIOA
#define LED0_PIN           GPIO_PIN(PORT_A, 12)
#define LED0_MASK          (1 << 12)

// #define EN3V3_PORT          GPIOA
// #define EN3V3_PIN           GPIO_PIN(PORT_A, 11)
// #define EN3V3_MASK          (1 << 11)

// #define EN3V3_ON            (EN3V3_PORT->BSRR = EN3V3_MASK)
// #define EN3V3_OFF           (EN3V3_PORT->BSRR = (EN3V3_MASK << 16))
// #define EN3V3_TOGGLE        (EN3V3_PORT->ODR  ^= EN3V3_MASK)
/** @} */

/**
 * @name    xtimer configuration
 * @{
 */
#define XTIMER_WIDTH        (16)
#define XTIMER_BACKOFF      (50)
#define XTIMER_ISR_BACKOFF  (40)
/** @} */

/**
 * @name        SX127X
 *
 * SX127X configuration.
 * @{
 */
#define SX127X_PARAM_SPI                (SPI_DEV(0))
#define SX127X_PARAM_SPI_NSS            GPIO_PIN(PORT_B, 0)
#define SX127X_PARAM_RESET              GPIO_PIN(PORT_B, 13)
#define SX127X_PARAM_DIO0               GPIO_PIN(PORT_A, 11)
#define SX127X_PARAM_DIO1               GPIO_PIN(PORT_B, 1)
#define SX127X_PARAM_DIO2               GPIO_PIN(PORT_A, 3)
#define SX127X_PARAM_DIO3               GPIO_PIN(PORT_H, 0)
#define SX127X_PARAM_DIO4               GPIO_PIN(PORT_C, 13)

#define RADIO_RF_CTX_PA                 GPIO_PIN(PORT_A, 4)
#define RADIO_RF_CBT_HF                 GPIO_PIN(PORT_B, 7)
#define RADIO_RF_CRX_RX                 GPIO_PIN(PORT_B, 6)
#define RADIO_OSC32_IN                  GPIO_PIN(PORT_C, 14)
#define RADIO_OSC32_OUT                 GPIO_PIN(PORT_C, 15)

//#define RADIO_TCXO_VCC_PIN                  GPIO_PIN(PORT_A, 12)
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
