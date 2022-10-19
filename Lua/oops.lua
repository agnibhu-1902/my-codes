local function Pet(name, age)
    return {
        name = name or 'Charlie',
        age = age or 10,
        feed = function (self)
            print(self.name)
            print('eating...')
        end,
        speak = function (self)
            print('Meow')
        end
    }
end

cat = Pet()
dog = Pet('Jack', 20)

print(cat.name)
print(cat.age)

print(dog.name)
print(dog.age)

cat:speak()
dog:feed() -- Colon used to reference self inside function

-- Inheritance
local function Dog(name)
    local dog = Pet(name)
    dog.breed = 'poodle'
    dog.loyalty = 0
    dog.speak = function(self)
        print('Woof')
    end
    return dog
end

print()
local dog = Dog('Jessie')
print(dog.name, dog.breed, dog.loyalty)
print(dog.speak())