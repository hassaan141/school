disp("Hello World");

t = -5:0.01:5;
x = 3*cos(4*t+pi/3);

figure(1);
clf;
hold on;

plot(t,x,'b');
plot([0,0],[-4,4],'r');
plot([pi/2,pi/2],[-4,4],'r');