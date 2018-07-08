#!/usr/bin/lua

age = io.read("*n")
sex = io.read()

if age == 40 and sex == "Male" then
    print("男人四下一枝花")

elseif age > 60 and sex ~= "Female" then
    print("old man without country!")

elseif age < 20 then
    io.write("too young, too native!\n")

else
    -- local age = io.read()
    print("Your age is "..age)

end


-- ========================
-- "*n"：读取一个数字






