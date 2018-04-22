#ifndef container_h
#define container_h

#include <stdbool.h>

// creates a struct for containers
struct container {
    const char * containDesc;
    const char * containName;
    const bool canMove;
    const int containInventory; // starting after 7 (player)
    int locationOfContainer;
    int containCapacity;
};

// allows functions to be used elsewhere
extern void executePut(const char * noun);
extern void executeRemove(const char * noun);
extern bool isContainer(const char * noun);
// allows variables to be used elsewhere
extern struct container contain[];
extern int numberOfContainers;

#endif
