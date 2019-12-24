-- Projeto: Mux 4.1 Nícolas e Leandro

Entity exemplomux is
Port(A, B, C, D : IN BIT;
	  sel1, sel2 : IN BIT;
					S: OUT BIT);
					
end exemplomux;

architecture dataflow of exemplomux is
begin 
	S <= A WHEN (sel1 = '0' AND sel2 = '0') ELSE
		  B WHEN (sel1 = '0' AND sel2 = '1') ELSE
		  C WHEN (sel1 = '1' AND sel2 = '0') ELSE
		  D;
end dataflow;		  