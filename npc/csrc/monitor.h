#ifndef _MONITOR_
#define _MONITOR_
#include <getopt.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "npc-exec.h"
#include "npcsdb.h"
#include "trace.h"
static char *img_file = NULL;
static char *log_file = NULL;
void load_prog(const char *bin);
void initial_default_img();
extern "C" void init_disasm(const char *triple);
FILE *log_fp = NULL;
void init_log(const char *log_file) {
  log_fp = stdout;
  if (log_file != NULL) {
    FILE *fp = fopen(log_file, "w");
    assert(fp!=NULL);
    //Assert(fp, "Can not open '%s'", log_file);
    log_fp = fp;
  }

  //Log("Log is written to %s", log_file ? log_file : "stdout");
}

static int parse_args(int argc, char *argv[])
{
  const struct option table[] = {
      {"batch", no_argument, NULL, 'b'},
      {"log", required_argument, NULL, 'l'},
      {"diff", required_argument, NULL, 'd'},
      {"port", required_argument, NULL, 'p'},
      {"help", no_argument, NULL, 'h'},
      {"ftrace",required_argument, NULL,'f'},
      {0, 0, NULL, 0},
  };
  int o;
  while ((o = getopt_long(argc, argv, "-f:bhl:d:p:", table, NULL)) != -1)
  {
    switch (o)
    {
    case 'b':
      sdb_set_batch_mode();
      break;
    case 'p':
      //sscanf(optarg, "%d", &difftest_port);
      break;
    case 'l':
      log_file = optarg;
      break;
    case 'd':
      //diff_so_file = optarg;
      break;
    case 1:
      img_file = optarg;
      return 0;
    case 'f':
      //printf("hhhh\n");
      //elf_filein = optarg;
      break;
    default:
      printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
      printf("\t-b,--batch              run with batch mode\n");
      printf("\t-l,--log=FILE           output log to FILE\n");
      printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
      printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
      printf("\t-f,--port=FILE          run with ftrace");
      printf("\n");
      exit(0);
    }
  }
  return 0;
}

void init_monitor(int argc, char *argv[])
{
  /* Perform some global initialization. */

  /* Parse arguments. */
  parse_args(argc, argv);

  /* Open the log file. */
  init_log(log_file);
#ifdef CONFIG_MTRACE
  init_mtrace();
  printf("in monitor: %s\n",elf_filein);
  //elf_filein = "/home/yangli/ysyx-workbench/am-kernels/tests/cpu-tests/build/recursion-riscv64-nemu.elf";
  if (elf_filein!=NULL) init_ftrace(elf_filein);
  else printf("No elf file\n");
#endif
  //if (elf_filein!=NULL) init_ftrace(elf_filein);
  /* Initialize memory. */
  //init_mem();

  /* Initialize devices. */
  //IFDEF(CONFIG_DEVICE, init_device());

  /* Perform ISA dependent initialization. */
  //init_isa();

  /* Load the image to memory. This will overwrite the built-in image. */
  if(img_file!=NULL) load_prog(img_file);
  else initial_default_img();

  /* Initialize differential testing. */
  //init_difftest(diff_so_file, img_size, difftest_port);

  /* Initialize the simple debugger. */
  //init_sdb();
   init_disasm("riscv64-pc-linux-gnu");
  /* Display welcome message. */
}

#endif