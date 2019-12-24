--Projeto: meio-somador-1bit	
-- ENTRADA A, B (tipo bit)
-- SAIDA: S, COUT (tipo bit)
-- AUTORES: NÍCOLAS RIBEIRO, LEANDRO ALENCAR, ARTHUR NOBREGA
-- CRIACAO: 05/12/2018
-- ALTERACAO: 22/11/2019
----------------------------------------------------------
entity meio_somador_1bit is
    port (A, B: in bit;
       S, COUT: out bit);
end meio_somador_1bit;
----------------------------------------------------------
architecture dataflow of meio_somador_1bit is
begin
    S <= A xor B;
    COUT <= A and B;
end dataflow;