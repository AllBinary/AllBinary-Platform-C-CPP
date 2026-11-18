// Generated Code Do Not Modify
#include "org/allbinary/vector/PointsUtil.h"


static PointsUtil* PointsUtil_instance;





void PointsUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    PointsUtil_instance = PointsUtil_new();
}

void PointsUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PointsUtil", nullptr);
    java_register_method("PointsUtil", "adjustXY", (void*) PointsUtil_adjustXY);
    java_register_method("PointsUtil", "adjust", (void*) PointsUtil_adjust3);
    java_register_method("PointsUtil", "adjust@3", (void*) PointsUtil_adjust3);
    java_register_method("PointsUtil", "adjust@4", (void*) PointsUtil_adjust4);
}

void PointsUtil_init(PointsUtil* this) {
    PointsUtil_register();
}

PointsUtil* PointsUtil_new(void) {
    PointsUtil* this = java_object_alloc(sizeof(PointsUtil), "PointsUtil");
    PointsUtil_init(this);
    return this;
}


PointsUtil* PointsUtil_getInstance(void) {
        return (PointsUtil_staticInit(), PointsUtil_instance);
}


int32_t*** PointsUtil_adjustXY(PointsUtil* this, int32_t*** points, int32_t x, int32_t y) {
        int32_t size = java_array_length(points);
        int32_t*** newPoints = ((int32_t***) java_array_new3(sizeof(int32_t), size, 0, 0));
        for (int32_t index = 0; index < size; index++) {
            int32_t size2 = java_array_length(points[index]);
            newPoints[index] = ((int32_t**) java_array_new2(sizeof(int32_t), size2, 2));
            for (int32_t index2 = 0; index2 < size2; index2++) {
                if (points[index][index2][0] != 1000) {
                    newPoints[index][index2][0] = points[index][index2][0] + x;
                    newPoints[index][index2][1] = points[index][index2][1] + y;
                } else {
                    newPoints[index][index2][0] = 1000;
                    newPoints[index][index2][1] = 1000;
                }
            }
        }
        return newPoints;
}


int32_t** PointsUtil_adjust3(PointsUtil* this, int32_t** points, int32_t both) {
        return PointsUtil_adjust(this, points, both, both);
}


// Java overloaded method: C needs a different name
int32_t** PointsUtil_adjust4(PointsUtil* this, int32_t** points, int32_t x, int32_t y) {
        int32_t** newPoints = ((int32_t**) java_array_new2(sizeof(int32_t), java_array_length(points), 2));
        for (int32_t index2 = 0; index2 < java_array_length(points); index2++) {
            if (points[index2][0] != 1000) {
                newPoints[index2][0] = points[index2][0] + x;
                newPoints[index2][1] = points[index2][1] + y;
            } else {
                newPoints[index2][0] = 1000;
                newPoints[index2][1] = 1000;
            }
        }
        return newPoints;
}

