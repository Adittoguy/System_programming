#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/init.h>

#define DRIVER_AUTHOR "Aditya Bhaskar Sanap"
#define DRIVER_DESC "It is Marvellous Infosystem Driver"

MODULE_LICENSE("GPL");

int MarvellousNo = 21;          // Input Argument

module_param(MarvellousNo, int, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);

MODULE_PARM_DESC(MarvellousNo, "Its a Integer Variable\n");

static int __init Marvellous_Init(void)
{
    printk(KERN_INFO "Marvellous module loaded : Jay Ganesh %d\n", MarvellousNo);
    return 0;
}

static void __exit Marvellous_Cleanup(void)
{
    printk(KERN_INFO "Marvellous module unloaded : Jay Ganesh\n");
}

module_init(Marvellous_Init);
module_exit(Marvellous_Cleanup);

MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);