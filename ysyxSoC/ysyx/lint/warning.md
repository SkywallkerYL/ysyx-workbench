# Warning汇总

### Warning-UNUSED
* **描述：** ysyx_xxxxxx.v:3299:17: Signal is not used: 'io_interrupt'
* **不清理原因：** 未实现外部中断，因此不使用该信号
* **备注：** 无

### Warning-UNUSED
* **描述：** ysyx_xxxxxx.v:2808:16: Bits of signal are not used: '_sll_T_3'[126:64]
* **不清理原因：** 移位指令实现时丢弃的高位
* **备注：** 无

### Warning-UNUSED
* **描述：** ysyx_xxxxxx.v:1647:17: Bits of signal are not used: 'io_inst'[6:0]
* **不清理原因：** 立即数生成模块输入的32位指令的低位部分弃用
* **备注：** 无

### Warning-UNUSED
* **描述：** ysyx_xxxxxx.v:4343:15: Bits of signal are not used: 'sdMask'[14:8]
* **不清理原因：** 为了保留chisel代码可读性
* **备注：** 无
### Warning-UNUSED
* **描述：** ../soc/ysyx_22050550.v:1163:15: Signal is not used: 'io_master_bid'
* **不清理原因：** AXI总线未实现bid通道，该信号不使用
* **备注：** 无
### Warning-UNUSED
* **描述：**  ../soc/ysyx_22050550.v:1174:15: Signal is not used: 'io_master_rid'
* **不清理原因：** AXI总线未实现rid通道，该信号不使用
* **备注：** 无
### Warning-UNUSED
* **描述：**  ../soc/ysyx_22050550.v:1174:15: Signal is not used: 'io_master_rid'
* **不清理原因：** AXI总线为实现rid通道，该信号不使用
* **备注：** 无
### Warning-UNUSED
* **描述：**  ../soc/ysyx_22050550.v:1174:15: Signal is not used: 'io_master_rid'
* **不清理原因：** AXI总线为实现rid通道，该信号不使用
* **备注：** 无
### Warning-UNUSED
* **描述：**  ../soc/ysyx_22050550.v:1174:15: Signal is not used: 'io_master_rid'
* **不清理原因：** AXI总线为实现rid通道，该信号不使用
* **备注：** 无

%Warning-UNUSEDSIGNAL: ../soc/ysyx_22050550.v:1179:18: Signal is not used: 'io_slave_awvalid'

                                                     : ... In instance ysyx_22050550
 1179 |  input           io_slave_awvalid ,
      |                  ^~~~~~~~~~~~~~~~
%Warning-UNUSEDSIGNAL: ../soc/ysyx_22050550.v:1180:15: Signal is not used: 'io_slave_awid'
                                                     : ... In instance ysyx_22050550
 1180 |  input [3:0]  io_slave_awid  ,
      |               ^~~~~~~~~~~~~
%Warning-UNUSEDSIGNAL: ../soc/ysyx_22050550.v:1181:15: Signal is not used: 'io_slave_awaddr'
                                                     : ... In instance ysyx_22050550
 1181 |  input [31:0] io_slave_awaddr  ,
      |               ^~~~~~~~~~~~~~~
%Warning-UNUSEDSIGNAL: ../soc/ysyx_22050550.v:1182:15: Signal is not used: 'io_slave_awlen'
                                                     : ... In instance ysyx_22050550
 1182 |  input [7:0]  io_slave_awlen  ,
      |               ^~~~~~~~~~~~~~
%Warning-UNUSEDSIGNAL: ../soc/ysyx_22050550.v:1183:15: Signal is not used: 'io_slave_awsize'
                                                     : ... In instance ysyx_22050550
 1183 |  input [2:0]  io_slave_awsize  ,
      |               ^~~~~~~~~~~~~~~
%Warning-UNUSEDSIGNAL: ../soc/ysyx_22050550.v:1184:15: Signal is not used: 'io_slave_awburst'
                                                     : ... In instance ysyx_22050550
 1184 |  input [1:0]  io_slave_awburst ,
      |               ^~~~~~~~~~~~~~~~
%Warning-UNUSEDSIGNAL: ../soc/ysyx_22050550.v:1186:18: Signal is not used: 'io_slave_wvalid'
                                                     : ... In instance ysyx_22050550
 1186 |  input           io_slave_wvalid  ,
      |                  ^~~~~~~~~~~~~~~
%Warning-UNUSEDSIGNAL: ../soc/ysyx_22050550.v:1187:15: Signal is not used: 'io_slave_wdata'
                                                     : ... In instance ysyx_22050550
 1187 |  input [63:0] io_slave_wdata  ,
      |               ^~~~~~~~~~~~~~
%Warning-UNUSEDSIGNAL: ../soc/ysyx_22050550.v:1188:15: Signal is not used: 'io_slave_wstrb'
                                                     : ... In instance ysyx_22050550
 1188 |  input [7:0]  io_slave_wstrb  ,
      |               ^~~~~~~~~~~~~~
%Warning-UNUSEDSIGNAL: ../soc/ysyx_22050550.v:1189:18: Signal is not used: 'io_slave_wlast'
                                                     : ... In instance ysyx_22050550
 1189 |  input           io_slave_wlast  ,
      |                  ^~~~~~~~~~~~~~
%Warning-UNUSEDSIGNAL: ../soc/ysyx_22050550.v:1190:18: Signal is not used: 'io_slave_bready'
                                                     : ... In instance ysyx_22050550
 1190 |  input           io_slave_bready  ,
      |                  ^~~~~~~~~~~~~~~
%Warning-UNUSEDSIGNAL: ../soc/ysyx_22050550.v:1195:18: Signal is not used: 'io_slave_arvalid'
                                                     : ... In instance ysyx_22050550
 1195 |  input           io_slave_arvalid ,
      |                  ^~~~~~~~~~~~~~~~
%Warning-UNUSEDSIGNAL: ../soc/ysyx_22050550.v:1196:18: Signal is not used: 'io_slave_arid'
                                                     : ... In instance ysyx_22050550
 1196 |  input     [3:0] io_slave_arid  ,
      |                  ^~~~~~~~~~~~~
%Warning-UNUSEDSIGNAL: ../soc/ysyx_22050550.v:1197:18: Signal is not used: 'io_slave_araddr'
                                                     : ... In instance ysyx_22050550
 1197 |  input    [31:0] io_slave_araddr  ,
      |                  ^~~~~~~~~~~~~~~
%Warning-UNUSEDSIGNAL: ../soc/ysyx_22050550.v:1198:18: Signal is not used: 'io_slave_arlen'
                                                     : ... In instance ysyx_22050550
 1198 |  input     [7:0] io_slave_arlen  ,
      |                  ^~~~~~~~~~~~~~
%Warning-UNUSEDSIGNAL: ../soc/ysyx_22050550.v:1199:18: Signal is not used: 'io_slave_arsize'
                                                     : ... In instance ysyx_22050550
 1199 |  input     [2:0] io_slave_arsize  ,
      |                  ^~~~~~~~~~~~~~~
%Warning-UNUSEDSIGNAL: ../soc/ysyx_22050550.v:1200:18: Signal is not used: 'io_slave_arburst'
                                                     : ... In instance ysyx_22050550
 1200 |  input     [1:0] io_slave_arburst ,
      |                  ^~~~~~~~~~~~~~~~
%Warning-UNUSEDSIGNAL: ../soc/ysyx_22050550.v:1201:18: Signal is not used: 'io_slave_rready'
                                                     : ... In instance ysyx_22050550
 1201 |  input           io_slave_rready  ,
      |                  ^~~~~~~~~~~~~~~
%Warning-UNUSEDSIGNAL: ../soc/ysyx_22050550.v:1224:19: Signal is not used: 'io_sram2_rdata'
                                                     : ... In instance ysyx_22050550
 1224 |     input [127:0] io_sram2_rdata  ,
      |                   ^~~~~~~~~~~~~~
%Warning-UNUSEDSIGNAL: ../soc/ysyx_22050550.v:1230:19: Signal is not used: 'io_sram3_rdata'
                                                     : ... In instance ysyx_22050550
 1230 |     input [127:0] io_sram3_rdata  ,
      |                   ^~~~~~~~~~~~~~
%Warning-UNUSEDSIGNAL: ../soc/ysyx_22050550.v:1236:19: Signal is not used: 'io_sram4_rdata'
                                                     : ... In instance ysyx_22050550
 1236 |     input [127:0] io_sram4_rdata  ,
      |                   ^~~~~~~~~~~~~~
%Warning-UNUSEDSIGNAL: ../soc/ysyx_22050550.v:1242:19: Signal is not used: 'io_sram5_rdata'
                                                     : ... In instance ysyx_22050550
 1242 |     input [127:0] io_sram5_rdata  ,
      |                   ^~~~~~~~~~~~~~
%Warning-UNUSEDSIGNAL: ../soc/ysyx_22050550.v:1248:19: Signal is not used: 'io_sram6_rdata'
                                                     : ... In instance ysyx_22050550
 1248 |     input [127:0] io_sram6_rdata  ,
      |                   ^~~~~~~~~~~~~~
%Warning-UNUSEDSIGNAL: ../soc/ysyx_22050550.v:1254:19: Signal is not used: 'io_sram7_rdata'
                                                     : ... In instance ysyx_22050550
 1254 |     input [127:0] io_sram7_rdata
      |                   ^~~~~~~~~~~~~~
%Warning-UNUSEDSIGNAL: ../soc/ysyx_22050550.v:2289:13: Bits of signal are not used: 'TopSram_ar_bits_addr'[63:32]
                                                     : ... In instance ysyx_22050550
 2289 | wire [63:0] TopSram_ar_bits_addr = DevSram_ar_valid ? DevSram_ar_addr : Sram_ar_valid ? Sram_ar_bits_addr : 0;
      |             ^~~~~~~~~~~~~~~~~~~~
%Warning-UNUSEDSIGNAL: ../soc/ysyx_22050550.v:2296:13: Bits of signal are not used: 'TopSram_aw_bits_addr'[63:32]
                                                     : ... In instance ysyx_22050550
 2296 | wire [63:0] TopSram_aw_bits_addr = DevSram_aw_valid ? DevSram_aw_addr : Sram_aw_valid ? Sram_aw_bits_addr : 0;
      |             ^~~~~~~~~~~~~~~~~~~~
%Warning-UNUSEDSIGNAL: ../soc/ysyx_22050550.v:2734:19: Bits of signal are not used: 'io_LSWB_inst'[19:0]
                                                     : ... In instance ysyx_22050550.WBU
 2734 |     input  [31:0] io_LSWB_inst                  ,
      |                   ^~~~~~~~~~~~
%Warning-UNUSEDSIGNAL: ../soc/ysyx_22050550.v:3294:19: Bits of signal are not used: 'io_Cache_addr'[63:32]
                                                     : ... In instance ysyx_22050550.DCache
 3294 |     input  [63:0] io_Cache_addr             ,
      |                   ^~~~~~~~~~~~~
%Warning-UNUSEDSIGNAL: ../soc/ysyx_22050550.v:3468:18: Bits of signal are not used: 'DataReadshift'[127:64]
                                                     : ... In instance ysyx_22050550.DCache
 3468 |     wire [127:0] DataReadshift = (DataRead >> addrblockshift);
      |                  ^~~~~~~~~~~~~
%Warning-UNUSEDSIGNAL: ../soc/ysyx_22050550.v:3996:19: Bits of signal are not used: 'wbcsren'[7:6]
                                                     : ... In instance ysyx_22050550.REGS
 3996 |     input  [7:0]  wbcsren                        ,
      |                   ^~~~~~~
%Warning-UNUSEDSIGNAL: ../soc/ysyx_22050550.v:4628:36: Bits of signal are not used: 'Cache_Data'[63:32]
                                                     : ... In instance ysyx_22050550.IFU
 4628 |     input           [(64-1):0]     Cache_Data  ,
      |                                    ^~~~~~~~~~
%Warning-UNUSEDSIGNAL: ../soc/ysyx_22050550.v:981:18: Bits of signal are not used: 'out'[1:0]
                                                    : ... In instance ysyx_22050550.EXU.Multi.ProdGen
  981 |     wire [127:0] out = (io_Choose_PartProdIn + add);
      |                  ^~~

