################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Demo\ Week\ 1.c 

OBJS += \
./src/Demo\ Week\ 1.o 

C_DEPS += \
./src/Demo\ Week\ 1.d 


# Each subdirectory must supply rules for building sources it contributes
src/Demo\ Week\ 1.o: ../src/Demo\ Week\ 1.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Demo Week 1.d" -MT"src/Demo\ Week\ 1.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


