################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Hall/LCD/LCD_Config.c \
../Hall/LCD/LCD_Prog.c 

OBJS += \
./Hall/LCD/LCD_Config.o \
./Hall/LCD/LCD_Prog.o 

C_DEPS += \
./Hall/LCD/LCD_Config.d \
./Hall/LCD/LCD_Prog.d 


# Each subdirectory must supply rules for building sources it contributes
Hall/LCD/%.o: ../Hall/LCD/%.c Hall/LCD/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega16 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


