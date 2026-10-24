total_detik = int (input("Masukkan jumlah detik: "))

hari = total_detik // 86400
sisa_detik = total_detik % 86400

jam = sisa_detik // 3600
sisa_detik %= 3600

menit = sisa_detik // 60
detik = sisa_detik % 60

if hari > 0:
    print(f"{hari} hari {jam:02d}:{menit:02d}:{detik:02d}")
else:
    print(f"{jam:02d}:{menit:02d}:{detik:02d}")