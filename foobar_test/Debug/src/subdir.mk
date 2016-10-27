################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/foo_test.cpp \
../src/foobar_test.cpp 

OBJS += \
./src/foo_test.o \
./src/foobar_test.o 

CPP_DEPS += \
./src/foo_test.d \
./src/foobar_test.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/jsears/GIT_REPOS/swig/libfoobar/include" -I"/home/jsears/GIT_REPOS/swig/foobar_test/include" -O0 -g3 -ftest-coverage -fprofile-arcs -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


