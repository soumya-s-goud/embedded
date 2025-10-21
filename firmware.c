// Minimal bare-metal entry for STM32F446RE (Cortex-M4).
void _start(void){ for(;;){ __asm__ volatile("wfi"); } }