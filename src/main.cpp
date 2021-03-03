#include <cstdio>

int main(int argc, char *argv[])
{
	if (argc != 2) {
		std::fprintf(stderr, "Usage: %s name\n", argv[0]);
		return 1;
	}
	std::printf("Hello, %s!\n", argv[1]);
	return 0;
}
