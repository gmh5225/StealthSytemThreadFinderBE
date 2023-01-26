#include "includes.h"

int main() {
	while (TRUE) {
		if (threadfinder::driver_range_check()) {
			printf("Detection: Range check\n");
		}
		if (threadfinder::system_time_check(1000)) {
			printf("Detection: Time check\n");
		}
	}
	system("pause");
}