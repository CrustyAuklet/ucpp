/**
 ******************************************************************************
 * @file    main.c
 * @author  Auto-generated by STM32CubeIDE
 * @version V1.0
 * @brief   Default main function.
 ******************************************************************************
 */

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
#warning                                                                                           \
    "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

#include "../../ucpp/register.hpp"
#include "../../ucpp/stm32/gpio.hpp"
#include "../../ucpp/stm32/rcc.hpp"
#include "../../ucpp/stm32/stm32f7.hpp"
#include "../../ucpp/strong_types.hpp"

using namespace ucpp::stm32;


int main(void)
{
   *((volatile uint32_t*)(0x40022800)) = 0x55555555;
    for (;;)
    {
    }
}
