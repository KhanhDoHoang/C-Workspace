################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Lab\ 4.c 

OBJS += \
./src/Lab\ 4.o 

C_DEPS += \
./src/Lab\ 4.d 


# Each subdirectory must supply rules for building sources it contributes
src/Lab\ 4.o: ../src/Lab\ 4.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Lab 4.d" -MT"src/Lab\ 4.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


