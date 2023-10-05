#!/usr/bin/python3
if __name__ == '__main__':
    import sys
    res = 0
    for a in range(1, len(sys.argv)):
            n = int(sys.argv[a])
            res = res + n
    print(res)
