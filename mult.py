#!/usr/bin/env python

# Mikaels multiplikationstabell

def multiplication(rows, cols):
    out = ""

    for i in range(1, rows + 1):
        for j in range(1, cols + 1):
            out += (str(i*j) + '\t')

        out += '\n'

    return out

if __name__ == '__main__':
    print(multiplication(input("How many rows? "), input("Hur many columns? ")))
