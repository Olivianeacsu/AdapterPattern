################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Duck.cpp \
../MallardDuck.cpp \
../Turkey.cpp \
../TurkeyAdapter.cpp \
../WildTurkey.cpp \
../adapterPatternPrj.cpp 

OBJS += \
./Duck.o \
./MallardDuck.o \
./Turkey.o \
./TurkeyAdapter.o \
./WildTurkey.o \
./adapterPatternPrj.o 

CPP_DEPS += \
./Duck.d \
./MallardDuck.d \
./Turkey.d \
./TurkeyAdapter.d \
./WildTurkey.d \
./adapterPatternPrj.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


