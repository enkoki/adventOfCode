s = "TCATAGTAACAGAGTGGAGATCATAGTAACAGACGGGGAGAAGGGTCATAGTAACCGTCTCAATACCCCGAGACTCTAGT"
# print(len(s))
checked = []
repeated = []
# print(help(s))
for x in range(len(s)-9): 
    holder = s[x:x+10]

    if holder in checked and holder not in repeated:
        repeated.append(holder)
    else:
        checked.append(holder)
repeated.sort()
print(", ".join(repeated))