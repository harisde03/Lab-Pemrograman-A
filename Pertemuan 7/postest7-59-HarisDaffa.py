# Meminta user input
batas_bawah = int(input("Batas Bawah: "))
batas_atas  = int(input("Batas Atas : "))

# Limit batas_bawah adalah 2
if batas_bawah <= 1:
    batas_bawah = 2

# Perulangan dan logika bilangan prima
for i in range(batas_bawah, batas_atas + 1):
    prima = 0

    for j in range(1, i+1):
        if i % j == 0:
            prima += 1

    if prima == 2:
        print(i)
