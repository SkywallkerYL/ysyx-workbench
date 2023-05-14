`include "./vsrc/ysyx_22050550_define.v"
module ysyx_22050550_IFU(
    input                                       reset       ,
    input                                       clock       ,
    input                                       Id_ready    ,
    input                                       Cache_DataOk,
    input           [`ysyx_22050550_RegBus]     Pc          ,
    input           [`ysyx_22050550_RegBus]     Cache_Data  ,
    //to id 
    output          [`ysyx_22050550_RegBus]     pc          ,
    output          [`ysyx_22050550_InstBus]    inst        ,
    output                                      valid       ,
    //to pc 
    output                                      ready       ,
    //to cache
    output                                      Cache_valid ,
    output          [`ysyx_22050550_RegBus]     Cache_addr  ,
	input										io_flush    
);
	//有冲刷信号的时候暂停取指
    assign ready = Cache_DataOk && Id_ready && !io_flush ;	
    assign inst = Cache_DataOk ? Cache_Data[31:0] : 32'h0;	
    assign pc = Pc;
    assign valid = Cache_DataOk && !io_flush ;	
    //这里也是  
    /*  
        cache 那边的发出dataok的那个周期已经是idle了，所以如果这边的valid一直拉高的话
        就会导致那边又进行状态跳转，导致取道错误的指令
    */
    assign Cache_valid = Id_ready & !Cache_DataOk && !io_flush ;	
    assign Cache_addr  = Pc;
endmodule
