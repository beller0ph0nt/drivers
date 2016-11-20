#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

#include "hello.h"

static int __init hello2_init(void)
{
    hello();

    return 0;
}

static void __exit hello2_exit(void)
{
    goodbuy();
}

module_init(hello2_init);
module_exit(hello2_exit);
MODULE_LICENSE("GPL");