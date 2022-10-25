//此模块用于控制图片的范围，当地址在图片内部时，才读取图片的像素值
//否则输出其他的值
module picen #(
    parameter pichsize = 100,
    parameter picvsize = 100,
    parameter h_size = 640,
    parameter v_size = 480
    //图片显示位置 
    //以图片左上角为例
    //parameter picx = (h_size-pichsize)/2,
    //parameter picy = (v_size-picvsize)/2
)(
    input [$clog2(h_size)-1:0] h_addr,
    input [$clog2(v_size)-1:0] v_addr,
    input [$clog2(h_size)-1:0] inith_addr,
    input [$clog2(v_size)-1:0] initv_addr,
    output reg rd_en
);
    
    assign rd_en = ((h_addr>=inith_addr)&&(h_addr<inith_addr+pichsize))
                    &&((v_addr>=initv_addr)&&(v_addr<initv_addr+picvsize));

endmodule