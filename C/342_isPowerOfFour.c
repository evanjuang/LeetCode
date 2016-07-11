// check if "1" in odd position
bool isPowerOfFour(int num) {
    return (num > 0) && ((num & (num - 1)) == 0) && ((num & 0x55555555) == num); 
}

bool isPowerOfFour_2(int num) {
    return ((num - 1) & num) == 0 && (num - 1) % 3 == 0; 
}
