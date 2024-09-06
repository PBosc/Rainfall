# Bonus 3

This one is a joke, it looks like we can overflow on an address to make it so we can read the .pass file that is read using the read function somehow changing things but if we look closely we can see that there is an other part of the code that can just execute a shell. We can enter this "if" very easily giving it an empty string

```bash
./bonus3 
./bonus3 ""
cat /home/user/end/.pass 
```

**Flag:** `3321b6f81659f9a71c76616f606e4b50189cecfea611393d5d649f75e157353c`
