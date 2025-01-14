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
 * @{
 *
 * @file
 * @brief       Board initialization code for RAK811 Wisnode
 *
 * @author      Leandro Lanzieri <leandro.lanzieri@haw-hamburg.de>
 * @author      Thomas Coats <github@voodoolabs.net>
 * @}
 */

#include "board.h"
#include "periph/gpio.h"

void board_init(void)
{
    /* initialize the CPU */
    cpu_init();
    // gpio_init(LED0_PIN, GPIO_OUT);
    // gpio_init(EN3V3_PIN, GPIO_OUT);
}
