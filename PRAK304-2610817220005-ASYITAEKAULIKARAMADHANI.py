angka = int(input("Masukkan bilangan: "))

if angka == 0:
    print("Nol")
elif angka >= 1 and angka <= 9:
    print("Satuan")
elif angka >= 11 and angka <= 19:
    print("Belasan")
elif (angka >= 10 and angka < 11) or (angka >= 20 and angka < 100):
    print("Puluhan")
else:
    print("Anda Menginput Melebihi Limit Bilangan")