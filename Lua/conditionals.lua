io.write("Age? ")
local age = tonumber(io.read())

if age >= 18 then
    print("You are an adult")
elseif age >= 13 then
    print("You are a teenager")
else
    print("You are a child")
end
