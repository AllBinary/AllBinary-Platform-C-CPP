// Generated Code Do Not Modify
#include "org/allbinary/animation/VectorAnimationUtil.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/util/BasicArrayList.h"


static VectorAnimationUtil* VectorAnimationUtil_instance;






void VectorAnimationUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    VectorAnimationUtil_instance = VectorAnimationUtil_new();
}

void VectorAnimationUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("VectorAnimationUtil", nullptr);
    java_register_method("VectorAnimationUtil", "toAnimationArrayFromListOfPointListWithPointsPerFrame", (void*) VectorAnimationUtil_toAnimationArrayFromListOfPointListWithPointsPerFrame);
    java_register_method("VectorAnimationUtil", "toAnimationArrayFromListOfPointList", (void*) VectorAnimationUtil_toAnimationArrayFromListOfPointList);
    java_register_method("VectorAnimationUtil", "toFrameArrayFromPointBasicArrayList", (void*) VectorAnimationUtil_toFrameArrayFromPointBasicArrayList);
}


VectorAnimationUtil* VectorAnimationUtil_getInstance(void) {
        return (VectorAnimationUtil_staticInit(), VectorAnimationUtil_instance);
}


void VectorAnimationUtil_init(VectorAnimationUtil* this) {
    VectorAnimationUtil_register();
}

VectorAnimationUtil* VectorAnimationUtil_new(void) {
    VectorAnimationUtil* this = java_object_alloc(sizeof(VectorAnimationUtil), "VectorAnimationUtil");
    VectorAnimationUtil_init(this);
    return this;
}


int32_t*** VectorAnimationUtil_toAnimationArrayFromListOfPointListWithPointsPerFrame(VectorAnimationUtil* this, BasicArrayList* vector, int32_t pointsPerFrame) {
        int32_t size = BasicArrayList_size(vector);
        int32_t*** points = ((int32_t***) java_array_new3(sizeof(int32_t), size, pointsPerFrame, 2));
        BasicArrayList* nextBasicArrayList = nullptr;
        int32_t** framePoints = nullptr;
        for (int32_t index = 0; index < size; index++) {
            nextBasicArrayList = ((BasicArrayList*) vector->objectArray[index]);
            framePoints = VectorAnimationUtil_toFrameArrayFromPointBasicArrayList(this, nextBasicArrayList);
            for (int32_t pointIndex = 0; pointIndex < java_array_length(framePoints); pointIndex++) {
                points[index][pointIndex][0] = framePoints[pointIndex][0];
                points[index][pointIndex][1] = framePoints[pointIndex][1];
            }
        }
        return points;
}


int32_t*** VectorAnimationUtil_toAnimationArrayFromListOfPointList(VectorAnimationUtil* this, BasicArrayList* vector) {
        int32_t size = BasicArrayList_size(vector);
        int32_t*** points = ((int32_t***) java_array_new3(sizeof(int32_t), size, 0, 0));
        BasicArrayList* nextBasicArrayList = nullptr;
        int32_t** framePoints = nullptr;
        for (int32_t index = 0; index < size; index++) {
            nextBasicArrayList = ((BasicArrayList*) vector->objectArray[index]);
            framePoints = VectorAnimationUtil_toFrameArrayFromPointBasicArrayList(this, nextBasicArrayList);
            points[index] = ((int32_t**) java_array_new2(sizeof(int32_t), java_array_length(framePoints), 2));
            for (int32_t pointIndex = 0; pointIndex < java_array_length(framePoints); pointIndex++) {
                points[index][pointIndex][0] = framePoints[pointIndex][0];
                points[index][pointIndex][1] = framePoints[pointIndex][1];
            }
        }
        return points;
}


int32_t** VectorAnimationUtil_toFrameArrayFromPointBasicArrayList(VectorAnimationUtil* this, BasicArrayList* list) {
        int32_t** points = ((int32_t**) java_array_new2(sizeof(int32_t), BasicArrayList_size(list), 2));
        int32_t size = BasicArrayList_size(list);
        for (int32_t index = 0; index < size; index++) {
            GPoint* nextPoint = ((GPoint*) list->objectArray[index]);
            points[index][0] = GPoint_getX(nextPoint);
            points[index][1] = GPoint_getY(nextPoint);
        }
        return points;
}

