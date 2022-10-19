-- Modules return a table

Mod = {
    sum = function(x, y)
        return x + y
    end
}

function Mod.sayHello(name)
    print('Hello ' .. name)
end

return Mod