/* Replacement init example for when we feel like running
 * a single non-interactive single executable Linux distro. */

#include <stdio.h>
#include <unistd.h>

int main(void) {
	puts("hello world");
	while (1)
		sleep(0xFFFFFFFF);
}
