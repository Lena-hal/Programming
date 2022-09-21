import tkinter

canvas = tkinter.Canvas()
canvas.pack()
a= int(input("strana 1 čtverce:"))
b= int(input("strana 2 čtverce:"))
canvas.create_rectangle(10,10,a,b)

textik = str(a*b,) + "pix^2"
Font = ("Comic Sans MS", 20, "bold")
canvas.create_text(150,150, text=textik,font=Font)

