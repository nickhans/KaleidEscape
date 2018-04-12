#ifndef object_h
#define object_h

// creates a struct for objects
struct object {
    const char * objDescription;
    const char * objName;
    int locationOfObject;
};

// allows variables to be used elsewhere
extern struct object objs[];
extern int numberOfObjects;

// allows functions to be used elsewhere
extern void executeTake(const char * noun);
extern void executeDrop(const char * noun);

#endif
