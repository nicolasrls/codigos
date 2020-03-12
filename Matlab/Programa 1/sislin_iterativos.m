%IFPB 12/03/2020
% MÉTODOS NUMÉRICOS-SISTEMAS LINEARES
% MÉTODOS ITERATIVOS DE JACOBI E DE GAUSS-SEIDEL
clc, clear all, help sislin_iterativos.m
K = 10; EPSILON = 1E-2;
x1(1)=0; x2(1)= 0;
for k =1:K
    x1(k+1) = (1+x2(k))/2;
    x2(k+1) = (3 - x1(k))/2;
    epsilon = max(abs([(x1(k+1)-x1(k))*(x2(k+1)-x2(k))]));
    if epsilon < EPSILON, break; end
end
disp(' Metodo de JACOBI');
disp([(1:k+1)' x1' x2']);

clear all
K = 10; EPSILON =1E-2;
x1(1) = 0; x2(1)=0;
for k=1:K
    x1(k+1)=(1+x2(k))/2;
    x2(k+1) = (3-x1(k+1))/2;
    epsilon = max(abs([(x1(k+1)-x1(k))*(x2(k+1)-x2(k))]));
    if epsilon<EPSILON, break; end
end
disp(' METODO DE GAUSS-DEIDEL');
disp(' k x1(k) x2(k)');
disp([(1:k+1)' x1' x2']);