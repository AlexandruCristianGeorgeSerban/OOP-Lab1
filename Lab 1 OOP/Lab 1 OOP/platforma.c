#include "platforma.h"
#include <stdio.h>

#ifdef _WIN32
void mesajSpecificPlatformei() {
    printf("Hello Windows User\n");
}
#elif __linux__
void mesajSpecificPlatformei() {
    printf("Hello Linux User\n");
}
#else
void mesajSpecificPlatformei() {
    printf("Hello From An Unknown OS User\n");
}
#endif
