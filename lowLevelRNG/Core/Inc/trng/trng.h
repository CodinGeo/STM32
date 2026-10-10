#define DEBUG

#ifndef TRNG_H_
    #define TRNG_H_
    #ifdef DEBUG
        #include <stdio.h>
        #define TRNG_DBG(...) printf(__VA_ARGS__)
    #endif // DEBUG

    #define TRNG_ADDR 0x50060800
    #define TRNG_CR_ADDR TRNG_ADDR
    #define TRNG_SR_ADDR (TRNG_ADDR + 4U)
    #define TRNG_DR_ADDR (TRNG_ADDR + 8U)

    #define TRNG_CR_TE (1 << 3)
    #define TRNG_CR_RNGEN (1 << 2)
    
    #define TRNG_SR_SEIS (1 << 6)
    #define TRNG_SR_CEIS (1 << 5)
    #define TRNG_SR_SECS (1 << 2)
    #define TRNG_SR_CECS (1 << 1)
    #define TRNG_SR_DRDY (1 << 0)
    
    void trng_init();
    uint32_t trng_get();

#endif // TRNG_H_