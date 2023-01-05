c-bitwise-macros
================
- [Online C Compiler](https://www.programiz.com/c-programming/online-compiler/)

### Reference
- https://stackoverflow.com/questions/8004079/i-want-to-calculate-the-inverse-mask-for-an-unsigned-char
- https://stackoverflow.com/questions/21511533/reverse-integer-bitwise-without-using-loop
- https://stackoverflow.com/questions/19617248/how-to-flip-a-specific-bit-in-a-byte-in-c
- x = x ^ ((1<<i) | (1<<j));
- ```c
  #define reverse_8bit(num) ( \
    ((num & 0x01) << 7)  \
    | ((num & 0x02) << 5) \
    | ((num & 0x04) << 3) \
    | ((num & 0x08) << 1) \
    | ((num & 0x10) >> 1) \
    | ((num & 0x20) >> 3) \
    | ((num & 0x40) >> 5) \
    | ((num & 0x80) >> 7) \
  )
  ```
- ```javascript
  ~0x2 ^ ~(3)
  ```
