#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>
#ifdef CONFIG_MYFUNCTION
#include "myfunction.h"
#endif

int main(void)
{
	int a = 9, b = 9;
	while (1)
	{
		printk("The sum of %d and %d is %d\n\r", a, b, sum(a, b));
		k_msleep(1000);
	}
}