#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Bechir Brahem Sara Briki");
MODULE_DESCRIPTION("A simple example Linux module.");
MODULE_VERSION("1.0");

static int __init lkm_example_init(void)
{
    printk(KERN_ERR "TP LINUX: MODULE INSERTED!\n");
    return 0;
}
static void __exit lkm_example_exit(void)
{
    printk(KERN_ERR "TP LINUX: MODULE REMOVED!\n");
}
module_init(lkm_example_init);
module_exit(lkm_example_exit);
