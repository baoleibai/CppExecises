################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/ChapterFour.cpp \
../src/ChapterOne.cpp \
../src/ChaptersMain.cpp 

OBJS += \
./src/ChapterFour.o \
./src/ChapterOne.o \
./src/ChaptersMain.o 

CPP_DEPS += \
./src/ChapterFour.d \
./src/ChapterOne.d \
./src/ChaptersMain.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


