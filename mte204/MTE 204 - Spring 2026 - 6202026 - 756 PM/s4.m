[x y] = meshgrid(-5:0.1:10)
z=x-y+5
surf(x, y, z)
hold on
z=x+y+1
surf(x, y, z)
hold on
z=3*x+2*y-10
surf(x, y, z)
hold on
title("Intersection of 3 Equations");
xlabel("x");
ylabel("y");
zlabel("z");
