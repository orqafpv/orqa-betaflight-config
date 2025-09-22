/*
 * This file is part of Betaflight.
 *
 * Betaflight is free software. You can redistribute this software
 * and/or modify this software under the terms of the GNU General
 * Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later
 * version.
 *
 * Betaflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define FC_TARGET_MCU     STM32F405

#define BOARD_NAME        ORQAF4WHOOP
#define MANUFACTURER_ID   ORQA

#define USE_ACC_SPI_MPU6000
#define USE_GYRO_SPI_MPU6000
#define USE_GYRO_SPI_ICM42688P
#define USE_ACCGYRO_BMI270
#define USE_ACC_SPI_ICM42688P
#define USE_FLASH_W25Q128FV
#define USE_MAX7456
#define USE_MAG
#define USE_MAG_QMC5883
#define USE_BARO
#define USE_BARO_DPS310

#define MOTOR1_PIN           PE11
#define MOTOR2_PIN           PE9
#define MOTOR3_PIN           PA2
#define MOTOR4_PIN           PD15

#define UART1_TX_PIN         PA10
#define UART1_RX_PIN         PB7

#define UART2_TX_PIN         PD5
#define UART2_RX_PIN         PD6

#define LED0_PIN             PD11
#define LED1_PIN             PD8

#define SPI1_SCK_PIN         PA5
#define SPI1_SDI_PIN         PA6
#define SPI1_SDO_PIN         PA7
#define MAX7456_SPI_CS_PIN   PA4

#define SPI2_SCK_PIN         PB13
#define SPI2_SDI_PIN         PB14
#define SPI2_SDO_PIN         PB15
#define GYRO_1_CS_PIN        PB12

#define SPI3_SCK_PIN         PC10
#define SPI3_SDI_PIN         PB4
#define SPI3_SDO_PIN         PC12
#define FLASH_CS_PIN         PA15

#define ADC_VBAT_PIN         PC2
#define ADC_CURR_PIN         PC0

#define ADC1_DMA_OPT        0

#define USE_SERIALRX_GHST
#define SERIALRX_UART SERIAL_PORT_USART1
#define MAG_I2C_INSTANCE (I2CDEV_1)
#define BARO_I2C_INSTANCE (I2CDEV_2)
#define DEFAULT_BLACKBOX_DEVICE     BLACKBOX_DEVICE_FLASH
#define DEFAULT_CURRENT_METER_SOURCE CURRENT_METER_ADC
#define DEFAULT_VOLTAGE_METER_SOURCE VOLTAGE_METER_ADC
#define DEFAULT_VOLTAGE_METER_SCALE 112
#define DEFAULT_VOLTAGE_METER_DIVIDER 1
#define DEFAULT_VOLTAGE_METER_MULTIPLIER 12
#define DEFAULT_CURRENT_METER_SCALE 108
#define SYSTEM_HSE_MHZ 8
#define MAX7456_SPI_INSTANCE SPI1
#define FLASH_SPI_INSTANCE SPI3
#define GYRO_1_SPI_INSTANCE SPI2
#define GYRO_1_ALIGN CW180_DEG
