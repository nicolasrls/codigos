-- Mini Projeto decima semana
-- Descrição em VHDL para CRC Generator/Checker
-- Grupo: Guilherme Costa de Araujo
--        Nícolas Ribeiro Lima de Souza Domiciano


library IEEE;
use IEEE.std_logic_1164.all;

entity circ_div is
port(a,b : in std_logic;
	 clk, clr: in std_logic;
     resto, rst: out std_logic;
    )
end circ_div;
