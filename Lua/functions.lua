function sum(num1, num2)
    local s = num1 + num2
    return s
end

io.write("Number 1? ")
num1 = tonumber(io.read())
io.write("Number 2? ")
num2 = tonumber(io.read())
print("The sum is " .. sum(num1, num2) .. '.')