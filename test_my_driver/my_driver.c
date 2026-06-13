#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int __init my_driver_init(void)
{
    pr_info("my_driver: loaded\n");
    return 0;
}

static void __exit my_driver_exit(void)
{
    pr_info("my_driver: unloaded\n");
}

module_init(my_driver_init);
module_exit(my_driver_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Mahmoud");
MODULE_DESCRIPTION("Test kernel module");
