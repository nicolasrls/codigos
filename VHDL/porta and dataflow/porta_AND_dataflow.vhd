--PROJETO: PORTA AND DATAFLOW 
-- Entradas IN1 e IN2 
-- Saída : OUT
-- Modelagem: Fluxo de Dados 
-- Feito por: Guilherme, Leandro e Nícolas no dia 18/11 às 20:40

-----------------------------------------------------------------
entity porta_AND_dataflow is
	port (IN1, IN2: in bit; 
				 OUT1: out bit);
end porta_AND_dataflow;
 ----------------------------------------------------------------
 
 architecture dataflow of porta_AND_dataflow is
 begin 
		OUT1 <= IN1 and IN2;
 end dataflow;
 
 ---------------------------------------------------------------- 