# STM32 Embedded Projects
This repository contains a collection of embedded projects developed for STM32 microcontrollers. It serves as my practical learning path, initially inspired by and loosely based on [this YouTube tutorial series](https://www.youtube.com/watch?v=EZqwBuRpdns&list=PLVfOnriB1RjWT_fBzzqsrNaZRPnDgboNI&index=1), and is continously growing. 

## Prerequisites

- Git
- VS Code, PlatformIO IDE extension
- STM32 Nucleo G474RE board

## Using a Project

Clone the repository and enter the directory of the project you want to work with:

```sh
git clone https://github.com/CodinGeo/STM32
cd STM/LEDBlinkNoDelay
```

Replace `LEDBlinkNoDelay` with another project directory, such as `interrupts`, `timer`, or `lowLevelRNG`. Build the firmware with PlatformIO:

```sh
pio run
```

Connect the project's configured Nucleo board over USB, then compile and upload the firmware:

```sh
pio run -t upload
```

## Hardware & Tools


### Development Boards: STM32 Nucleo-G474RE, STM32 Nucleo-G431KB

### IDE & Build System: VSCode + PlatformIO

### Language: C

### Libraries: STM32 HAL

### Covered Topics & Peripherals

- GPIO configuration (handling LEDs and user buttons)

- Basic UART communication

- Hardware Timers and Interrupts (EXTI)

### Status
This is an active repository, updated as I learn.