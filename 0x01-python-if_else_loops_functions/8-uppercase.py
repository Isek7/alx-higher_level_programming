#!/usr/bin/python3
def uppercase(str):
    for a in range(len(str)):
        upp = str[a]
        if ord(str[a]) < 123 and ord(str[a]) > 96:
            upp = chr(ord(str[a]) - 32)
        print("{}".format(upp), end='')
    print()
