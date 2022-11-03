Overflow occurs when the variable is increased beyond its capacity.

For example char has a memory space of 1 byte i.e. 8 bits and the MSB is used as the sign bit (2's complement)
    So range of char is from -128 to 127

    when the value of char is alreaady 127 and we add a one to it will overflow and rather than having 128 it will have -128 in it
    its more of a cyclic process
