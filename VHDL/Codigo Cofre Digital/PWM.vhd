library IEEE;
use     IEEE.std_logic_1164.all;
use     IEEE.std_logic_unsigned.all;
---------------------------------------------------------------
entity PWM is
 port ( CLK     : in  std_logic; -- clock 50Mhz
        ENABLE  : in  std_logic; -- Liga/desliga sinal PWM
        DUTY    : in  std_logic_vector (9 downto 0); -- 10bits; 1024 valores possíveis,
                                                     -- vamos usar 1000, ou seja LSB 0,1% de duty
        PWM_OUT : out std_logic);
end entity;
---------------------------------------------------------------
architecture RTL of PWM is
 
 --                 Fclk                            50M                               50M
 -- Fpwm = ------------------------, 50 = -----------------------,  PRESCALER = ---------------- = 499
 --         (TIMER + 1)*PRESCALER          (1000 + 1)*PRESCALER                 (1000 + 1)*50
 --
 --
 -- TIMER 10bits = 1000 (constante)
 --
 -- DUTY X%   = Duty/TIMER*100%
 
 
 component clock_pwm
  port ( CLK_IN : in  std_logic;
         Q      : out  std_logic);
 end component;
 
 signal s_OUT_CLK  : std_logic;
 signal CYCLE_OFF  : std_logic_vector (9 downto 0);
 --signal s_PWM_OUT  : std_logic;
 signal CONT       : std_logic_vector (9 downto 0);
 constant TIMER : std_Logic_Vector (9 downto 0) := "1111101000";
 
 
 
 begin
 
     PRESCALER: clock_pwm port map (CLK, s_OUT_CLK);
     --s_oUT_CLK <= clk;
     CYCLE_OFF <= TIMER - DUTY - '1'; -- PWM invertido
     
     process(s_OUT_CLK,ENABLE)
     variable s_PWM_OUT  : std_logic:='0';
     begin
         
        if rising_edge(s_OUT_CLK) then
         
            if( ENABLE = '1' ) then
             
                 -- CONTA PULSOS DO CLOCK
                 CONT <= CONT + '1';
             
                 if ( DUTY >= TIMER ) then -- MÁX PERMITIDO É 100%
                 
                     s_PWM_OUT:= '1';
                     CONT      <= "0000000000";
                     
                 elsif ( CONT = CYCLE_OFF ) then -- inicia Ton
                 
                    s_PWM_OUT:= '1'; -- BORDA DE SUBIDA DO PWM
                   
                 elsif ( CONT = TIMER ) then
                 
                     s_PWM_OUT:= '0'; -- BORDA DE DESCIDA DO PWM
                     CONT      <= "0000000000";
                     
                 end if;
         
            else -- SE ENABLE 0
             s_PWM_OUT:= '0';
             CONT      <= "0000000000";
            end if;
           
        end if;
       
        PWM_OUT <= s_PWM_OUT;
         
     end process;
     
     
     
     end RTL;