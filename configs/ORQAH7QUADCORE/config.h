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

#define FC_TARGET_MCU     STM32H743

#define BOARD_NAME        ORQAH7
#define MANUFACTURER_ID   ORQA

#define USE_RX_VTX_HYBRID

#define USE_GYRO
#define USE_ACCGYRO_BMI270
#define USE_GYRO_SPI_MPU6000
#define USE_GYRO_SPI_ICM42605
#define USE_GYRO_SPI_ICM42688P
#define USE_ACC
#define USE_ACC_SPI_MPU6000
#define USE_ACC_SPI_ICM42605
#define USE_ACC_SPI_ICM42688P
#define USE_SDCARD
#define USE_FLASH
#define USE_FLASH_W25Q128FV
#define USE_BARO
#define USE_BARO_DPS310
#define USE_MAG
#define USE_MAX7456
#define USE_BEEPER

#define BEEPER_PIN           PE9
#define MOTOR1_PIN           PD12
#define MOTOR2_PIN           PD13
#define MOTOR3_PIN           PA1
#define MOTOR4_PIN           PA0
#define MOTOR5_PIN           PA2 
#define MOTOR6_PIN           PA3
#define MOTOR7_PIN           PB1
#define MOTOR8_PIN           PB0
#define SERVO1_PIN           PE6
#define SERVO2_PIN           PE5

#define I2C1_SCL_PIN         PB6   
#define I2C1_SDA_PIN         PB7

#define I2C2_SCL_PIN         PB10
#define I2C2_SDA_PIN         PB11

#define UART3_TX_PIN         PD8  
#define UART3_RX_PIN         PD9        

#define UART6_TX_PIN         PC5         
#define UART6_RX_PIN         PC7

#define UART7_TX_PIN         PE8
#define UART7_RX_PIN         PE7

#define UART8_RX_PIN         PE0   

#define LED1_PIN             PA8                          
#define LED2_PIN             PA10

#define SPI1_SCK_PIN         PA5  
#define SPI1_SDI_PIN         PA6
#define SPI1_SDO_PIN         PA7
#define GYRO_1_CS_PIN        PA4
#define GYRO_1_EXTI_PIN      PC3

#define SPI2_SCK_PIN         PB13  
#define SPI2_SDI_PIN         PB14
#define SPI2_SDO_PIN         PB15
#define FLASH_CS_PIN         PB12

#define SPI3_SCK_PIN         PB3
#define SPI3_SDI_PIN         PB4
#define SPI3_SDO_PIN         PD6
#define MAX7456_SPI_CS_PIN   PA15

#define SPI4_SCK_PIN         PE12  
#define SPI4_SDI_PIN         PE13
#define SPI4_SDO_PIN         PE14
#define GYRO_2_CS_PIN        PE11
#define GYRO_2_EXTI_PIN      PE10

#define SDIO_CK_PIN          PC12
#define SDIO_CMD_PIN         PD2
#define SDIO_D0_PIN          PC8
#define SDIO_D1_PIN          PC9
#define SDIO_D2_PIN          PC10
#define SDIO_D3_PIN          PC11
#define SDCARD_DETECT_PIN    NONE

#define ADC_VBAT_PIN         PC0
#define ADC_CURR_PIN         PC1
                
#define USB_DETECT_PIN       PA9   

#define USE_PINIOBOX
#define PINIO1_PIN PD0
#define PINIO1_BOX 40
#define PINIO1_CONFIG 1

#define DEFAULT_VOLTAGE_METER_SCALE 112
#define DEFAULT_VOLTAGE_METER_DIVIDER 1
#define DEFAULT_VOLTAGE_METER_MULTIPLIER 12
#define DEFAULT_CURRENT_METER_SCALE 108
#define SERIALRX_UART SERIAL_PORT_USART3
#define USE_SERIALRX_GHST
#define GPS_UART SERIAL_PORT_USART3
#define ESC_SENSOR_UART SERIAL_PORT_USART8
#define BARO_I2C_INSTANCE (I2CDEV_2)
#define MAG_I2C_INSTANCE (I2CDEV_1)

#define DEFAULT_DSHOT_BURST DSHOT_DMAR_ON
#define DEFAULT_CURRENT_METER_SOURCE CURRENT_METER_ADC
#define DEFAULT_VOLTAGE_METER_SOURCE VOLTAGE_METER_ADC
#define BEEPER_INVERTED
#define BEEPER_PWM_HZ 4000
#define MAX7456_SPI_INSTANCE SPI3
#define USE_SPI_GYRO
#define GYRO_1_SPI_INSTANCE SPI1
#define GYRO_1_ALIGN CW180_DEG
#define GYRO_2_SPI_INSTANCE SPI4
#define GYRO_2_ALIGN CW90_DEG
#define DEFAULT_GYRO_TO_USE GYRO_CONFIG_USE_GYRO_1
#define FLASH_SPI_INSTANCE SPI2
#define SDIO_DEVICE SDIODEV_1
#define SDIO_USE_4BIT 1

#define ENSURE_MPU_DATA_READY_IS_LOW