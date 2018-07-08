#!/usr/bin/lua

local sum = 0
local n = 0

while n <= 100 do
    sum = sum + n
    n = n + 1
end

print("while sum = ",sum..' n='..n)
