#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

#include "hello.h"

void hello(void)
{
    printk("Hello, World!!!\n");
}

EXPORT_SYMBOL(hello);

void goodbuy(void)
{
    printk("Goodbuy, World!!!\n");
}

EXPORT_SYMBOL(goodbuy);

static int __init hello_init(void)
{
    hello();

    return 0;
}

static void __exit hello_exit(void)
{
    goodbuy();
}

module_init(hello_init);
module_exit(hello_exit);
MODULE_LICENSE("GPL");