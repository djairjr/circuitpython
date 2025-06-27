// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: 2025 Stella Schwankl
//
// SPDX-License-Identifier: MIT

#pragma once

// Micropython setup

#define MICROPY_HW_BOARD_NAME       "M5Stack Stam PLC"
#define MICROPY_HW_MCU_NAME         "ESP32-S3FN8"

#define MICROPY_HW_NEOPIXEL     (&pin_GPIO21)

#define DEFAULT_I2C_BUS_SCL     (&pin_GPIO15)
#define DEFAULT_I2C_BUS_SDA     (&pin_GPIO13)

#define DEFAULT_UART_BUS_RX     (&pin_GPIO44)
#define DEFAULT_UART_BUS_TX     (&pin_GPIO43) // CAN

#define CIRCUITPY_BOARD_SPI         (1)
#define CIRCUITPY_BOARD_SPI_PIN     {{.clock = &pin_GPIO7, .mosi = &pin_GPIO8, .miso = &pin_GPIO9}}