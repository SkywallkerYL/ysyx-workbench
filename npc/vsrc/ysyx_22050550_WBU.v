`include "/home/yangli/ysyx-workbench/npc/vsrc/ysyx_22050550_define.v"
module ysyx_22050550_LSU(
    input         clock                         ,
                  reset                         ,
    input  [63:0] io_EXLS_pc                    ,
    input  [31:0] io_EXLS_inst                  , 
    input         io_EXLS_valid                 ,
    input  [4:0]  io_EXLS_rs1addr               , 
    input         io_EXLS_abort                 ,
                  io_EXLS_jalrflag              ,
                  io_EXLS_csrflag               ,
                  io_EXLS_ecallflag             ,
                  io_EXLS_mretflag              ,
                  io_EXLS_ebreak                ,
    input  [63:0] io_EXLS_rs2                   ,
                  io_EXLS_imm                   ,  
                  io_EXLS_alures                ,
                  io_EXLS_writedata             ,
    input  [4:0]  io_EXLS_waddr                 ,    
    input         io_EXLS_wen                   ,  
                  io_EXLS_wflag                 ,   
                  io_EXLS_rflag                 ,   
    input  [7:0]  io_EXLS_wmask                 ,      
    input         io_EXLS_alumask               ,     
    input  [2:0]  io_EXLS_func3                 , 
    input  [6:0]  io_EXLS_func7                 ,      
    input  [63:0] io_EXLS_NextPc                ,
    input         io_ReadyWB_ready              , 
    output [63:0] io_LSWB_pc                    ,
                  io_LSWB_rs2                   ,
    output [31:0] io_LSWB_inst                  ,
    output        io_LSWB_valid                 ,
    output [4:0]  io_LSWB_rs1                   ,
    output [63:0] io_LSWB_imm                   ,
    output [4:0]  io_LSWB_wdaddr                ,
    output        io_LSWB_wen                   ,
    output        io_LSWB_csrflag               ,        
                  io_LSWB_jalrflag              ,        
                  io_LSWB_ecallflag             ,        
                  io_LSWB_mretflag              ,        
                  io_LSWB_ebreak                ,   
                  io_LSWB_abort                 ,     
    output [63:0] io_LSWB_alures                ,  
    output [63:0] io_LSWB_lsures                ,
    output [2:0]  io_LSWB_func3                 ,
    output [6:0]  io_LSWB_func7                 ,
    output [63:0] io_LSWB_NextPc                ,  
    output        io_ReadyEX_ready              ,
    /***********AxiSram***********/
    input  [0:0]  io_ar_ready               ,
    output [0:0]  io_ar_valid               ,    
    output [63:0] io_ar_addr                ,
    output [7:0]  io_ar_len                 ,
    output [2:0]  io_ar_size                ,    
    output [1:0]  io_ar_burst               , 
    input  [0:0]  io_r_valid                ,
    input  [63:0] io_r_rdata                ,
    output [0:0]  io_r_ready                ,
    input  [0:0]  io_aw_ready               ,
    output [0:0]  io_aw_valid               , 
    output [63:0] io_aw_addr                ,
    output [7:0]  io_aw_len                 ,
    output [2:0]  io_aw_size                , 
    output [1:0]  io_aw_burst               ,
    input  [0:0]  io_w_ready                , 
    output [0:0]  io_w_valid                ,
    output [63:0] io_w_data                 ,
    output [7:0]  io_w_strb                 ,
    output [0:0]  io_w_last                 ,
    output [0:0]  io_b_ready                ,
    input  [0:0]  io_b_valid                ,
    /***********Cache***********/
    output [0:0]  io_Cache_valid            ,
    output [0:0]  io_Cache_op               ,
    output [63:0] io_Cache_addr             ,
    output [63:0] io_Cache_wdata            ,
    output [7:0]  io_Cache_wmask            ,
    input  [63:0] io_Cache_data             ,
    input         io_Cache_dataok  
);
    
    assign io_LSWB_pc       =      io_EXLS_pc                         ;
    assign io_LSWB_inst     =      io_EXLS_inst                       ;
    /*************valid-ready握手信号****************/      
    assign io_LSWB_valid    =      io_EXLS_valid    && lsuvalid       ;
    assign io_ReadyEX_ready =      io_ReadyWB_ready && (!lsubusy)     ;

    assign io_LSWB_rs1      =      io_EXLS_rs1addr                    ;
    assign io_LSWB_abort    =      io_EXLS_abort                      ;
    assign io_LSWB_rs2      =      io_EXLS_rs2                        ;
    assign io_LSWB_wdaddr   =      io_EXLS_waddr                      ;
    assign io_LSWB_wen      =      io_EXLS_wen                        ;
    assign io_LSWB_csrflag  =      io_EXLS_csrflag                    ;
    assign io_LSWB_jalrflag =      io_EXLS_jalrflag                   ;
    assign io_LSWB_ecallflag=      io_EXLS_ecallflag                  ;
    assign io_LSWB_mretflag =      io_EXLS_mretflag                   ;
    assign io_LSWB_ebreak   =      io_EXLS_ebreak                     ;
    assign io_LSWB_func3    =      io_EXLS_func3                      ;
    assign io_LSWB_func7    =      io_EXLS_func7                      ;
    assign io_LSWB_NextPc   =      io_EXLS_NextPc                     ;
    assign io_LSWB_alures   =      io_EXLS_alures                     ;
    assign io_LSWB_lsures   =      maskData                           ;
endmodule

