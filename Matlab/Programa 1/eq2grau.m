%Programa um
clear all
clc
close all
a = input('a = ');
b = input('b = ');
c = input('c = ');
delta = b^2 - 4*a*c;
x1 = (-b+sqrt(delta))/(2*a);
x2 = (-b-sqrt(delta))/(2*a);
x = [ x1,x2];
disp('A solução vale :');
disp(x);
