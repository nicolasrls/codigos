-- Projeto Realizado por: Nicolas Ribeiro e Leandro Alencar. Data:19/11/19
-- Entradas A,B,C,D
-- Saída : Sa,Sb,Sc,Sd,Se,Sf,Sg
-- Modelagem: Fluxo de Dados 

entity meudisplay is
	port (A,B,C,D:in bit;
				 Sa,Sb,Sc,Sd,Se,Sf,Sg: out bit);
end meudisplay;

--------------------------------------
architecture dataflow of meudisplay is
begin 
	Sa<= not((A or C) or (B xnor D));
	Sb<= not((not B) or (C xnor D));
	Sc<= not(B or(not C) or D);
	Sd<= not(A or((not B) and (not D))or((not B) and C) or (C and (not D)) or (B and (not C) and D));
	Se<= not(((not B) and (not D)) or (C and (not D)));
	Sf<= not(A or ((not C) and (not D)) or (B and (not C)) or (B and (not D)));
	Sg<= not(A or (B xor C) or (C and (not D)));
	end dataflow;