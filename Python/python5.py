
def mocnina(cislo,na_kolikatou):
    print(cislo**na_kolikatou)
    print(1/cislo)

def povrch_ctverce(a):
        return a**2


mocnina(int(input("zadej čislo\n")),int(input("zadej mocninu\n")))


print("povrch krychle je:", povrch_ctverce(10)*6)
print("povrch krychle je:", povrch_ctverce(20)*6)
print("povrch krychle je:", povrch_ctverce(30)*6)
