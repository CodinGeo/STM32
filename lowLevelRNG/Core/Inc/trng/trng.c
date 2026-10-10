#include "main.h"
#include "trng.h"

uint32_t *trng_cr = (uint32_t *)TRNG_CR_ADDR;
uint32_t *trng_sr = (uint32_t *)TRNG_SR_ADDR;
uint32_t *trng_dr = (uint32_t *)TRNG_DR_ADDR;

uint32_t trng_get(){
    TRNG_DBG("TRNG get\n");
    while ((*trng_sr & TRNG_SR_DRDY) == 0) {
    }
    return *trng_dr;
}

void trng_init(){
    TRNG_DBG("TRNG Init...\n");
    __HAL_RCC_RNG_CLK_ENABLE();

    TRNG_DBG("TRNG Initial values\n");
    TRNG_DBG("Cr = 0x%08lx\n", *trng_cr);
    TRNG_DBG("Sr = 0x%08lx\n", *trng_sr);

    *trng_cr |= TRNG_CR_RNGEN;

    TRNG_DBG("Cr = 0x%08lx\n", *trng_cr);
    TRNG_DBG("Sr = 0x%08lx\n", *trng_sr);

    trng_get();
}