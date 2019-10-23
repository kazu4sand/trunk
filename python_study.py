#1つめのinputをoutputリストに入れる
input_line = input()
mappedData = map(int, input_line.split(" "))
output1 = list(mappedData)

#2つめはoutputリストの後ろに追加
＃~.extendはリストの最後尾に追加
input_line = input()
mappedData = map(int, input_line.split(" "))
output1.extend(mappedData)

print(output1[0] * output1[3] - output1[1] * output1[2])
