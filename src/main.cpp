#include <cstdio>

#include "hello-world-conf.h"


int main(int argc, char *argv[])
{
	if (argc > 2) {
		std::fprintf(stderr, "Usage: %s [-v|name]\n", argv[0]);
		return 1;
	}

	if (argc == 1) {
		std::printf("Hello, world!\n");
	} else if (argc == 2) {
		if (argv[1][0] == '-' && argv[1][1] == 'v')
			std::printf("Version %d.%d\n", VERSION_MAJOR, VERSION_MINOR);
		else
			std::printf("Hello, %s\n", argv[1]);
	}
	return 0;
}
