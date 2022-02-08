require "narray"

science = NArray.to_na( [65, 80, 67, 35, 58, 60, 72 ,75, 68, 92, 36, 50, 25, 85, 46, 42, 78, 62, 84, 70] )

english = NArray.to_na( [44, 87, 100, 63, 52, 60, 58, 73, 55, 86, 29, 56, 89, 23, 65, 84, 64, 27, 86, 84] )

print "理科の平均:"
ave_s = science.mean
p ave_s
print "英語の平均:"
ave_e = english.mean
p ave_e

print "理科の標準偏差:"
std_s = science.stddev
p std_s
print "英語の標準偏差:"
std_e = english.stddev
p std_e

print "理科の合計点:"
p science.sum
print "英語の合計点:"
p english.sum

print "理科の偏差値\n"
for i in 0..19 do
  p (science[i] - ave_s) / std_s * 10 + 50
end
print "\n"
print "英語の偏差値\n"
for i in 0..19 do
  p (english[i] - ave_e) / std_e * 10 + 50
end

print "理科の降順ソート\n"
p science.sort.reverse

print "英語の降順ソート\n"
p english.sort.reverse

