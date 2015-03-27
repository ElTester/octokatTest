local N = 4000
local S = 1000

local t = {}

for i = 0, N do
    t[i] = {
        a = 0,
        b = 1,
        f = i * 0.25
    }
end

for j = 0, S-1 do
    for i = 0, N-1 do
        t[i].a = t[i].a + t[i].b * t[i].f
        t[i].b = t[i].b - t[i].a * t[i].f
    end
    print(string.format("%.6f", t[1].a))
end
