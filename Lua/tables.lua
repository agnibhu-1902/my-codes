local tbl = {true, 10, 4.5, "Hey there!"}

for i = 1, #tbl do
    print(tbl[i])
end

for index, value in pairs(tbl) do
    print(index, value)
end

tbl = {name = 'Mike', age = 12}
print(tbl["name"], tbl["age"])