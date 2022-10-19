function fileread(file)
    io.input(file)
    local content = io.read("*all") -- *all: all lines, *line: single line
    print(content)
    io.close()
end

local file = "newfile.txt"

io.output(file)
io.write("Hello World!")
io.write("\nLua is cool!")

fileread("hello.txt")

nfl = io.open(file, 'a')
if nfl ~= nil then
    nfl:write('\nBye now.')
    nfl:close()
else
    print("Cannot open the file.")
end