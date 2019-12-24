library verilog;
use verilog.vl_types.all;
entity meudisplay is
    port(
        A               : in     vl_logic;
        B               : in     vl_logic;
        C               : in     vl_logic;
        D               : in     vl_logic;
        Sa              : out    vl_logic;
        Sb              : out    vl_logic;
        Sc              : out    vl_logic;
        Sd              : out    vl_logic;
        Se              : out    vl_logic;
        Sf              : out    vl_logic;
        Sg              : out    vl_logic
    );
end meudisplay;
