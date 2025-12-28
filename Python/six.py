num = [43,2,57,72,523,22,8,778]
string_list = []
for i in range(0,8,1):
    string_list.append(str(num[i]))

for i in range(len(string_list)):
    for j in range(i+1, len(string_list)):
        if string_list[i] + string_list[j] < string_list[j] + string_list[i]:
            temp = string_list[i] 
            string_list[i] = string_list[j]
            string_list[j] = temp

for string in string_list:
    print(string, end="")
