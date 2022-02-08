# -*- coding: utf-8 -*-

science = [65,80,67,35,58,60,72,75,68,92,36,50,25,85,46,42,78,62,84,70]
english = [44,87,100,63,52,60,58,73,55,86,29,56,89,23,65,84,64,27,86,84]


#理科
sum = 0
for val in science:
    sum = sum + val
sci_ave = sum / 20
# sci_ave = statistics.mean(science)

sci_std_dev = 0
for val in science:
    sci_std_dev = sci_std_dev + (val - sci_ave) ** 2
sci_std_dev = (sci_std_dev / 20) ** 0.5
# sci_std_dev = statistics.pstdev(science)

print("理科")
print("平均点：" + str(sci_ave))
print("標準偏差：" + str(sci_std_dev))
print("合計点：" + str(sum))
print("")


#英語
sum = 0
for val in english:
    sum = sum + val
eng_ave = sum / 20

eng_std_dev = 0
for val in english:
    eng_std_dev = eng_std_dev + (val - eng_ave) ** 2
eng_std_dev = (eng_std_dev / 20) ** 0.5

print("英語")
print("平均点：" + str(eng_ave))
print("標準偏差：" + str(eng_std_dev))
print("合計点：" + str(sum))
print("")

#人ごとの偏差値
print("それぞれの人の偏差値")

for i in range(20):
	sci_dev = 10 * (science[i] - sci_ave) / sci_std_dev + 50
	eng_dev = 10 * (english[i] - eng_ave) / eng_std_dev + 50
	print("理科：" + str(sci_dev))
	print("英語：" + str(eng_dev))
print("")


#高い順にソート
print("点数の高い順に表示")
print("理科")

science.sort(reverse=True)
print(science)

print("英語")

english.sort(reverse=True)
print(english)
