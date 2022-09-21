import math
import random

cislo = [0, 1]

def fibonaci():
    c = int(input("rozmezi fibonaciho "))
    for i in range(c):
        print(cislo[-1] + cislo[-2])
        cislo.append(cislo[-1] + cislo[-2])
    print()


def sum():
    x=0
    for i in range(int(input("suma cisla: " ))+1):
        x = x+i
    print(x)


def tabulka():
    max = int(input("max hodnota tabulky: "))
    print()
    for i in range(1,max+1):
        for j in range(max):
            print(i*j,end="||")
        print()
        print()

        
def factorial():
    x=1
    for i in range(1,int(input("faktorial cisla: " ))+1):
        x = x*i
        
    print(x)

factorial()
