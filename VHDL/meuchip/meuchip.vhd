-- Projeto >> meuchip >> Elaborado dia : 19/11/2019 >> Grupo: Nícolas Ribeiro e Leandro Alencar.
-- Entradas: IN1, IN2, IN3 e IN4 :: Saídas: OUT1, OUT2, OUT3 e OUT4.

entity meuchip is
	port(IN1, IN2, IN3, IN4: in bit ; OUT1, OUT2, OUT3, OUT4: out bit);
	end meuchip;

------------------------------------------------------------------------

architecture dataflow of meuchip is
begin
	OUT1 <= not IN1;
	OUT2 <= not IN2;
	OUT3 <= not IN3;
	OUT4 <= not IN4;

	end dataflow;
	