uint32_t reverseBits(uint32_t n) {
    uint32_t rb = 0;
    int i;
    for (i = 0; i < 32; i++) {
        rb += (n >> i & 1) << (31 - i);
    }
    
    return rb;
}
