// Generated Code Do Not Modify
#include "org/allbinary/animation/VectorExplosionGenerator.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/pipeline/RandomRotationFactory.h"
#include "org/allbinary/graphics/pipeline/RandomTranslation.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/util/BasicArrayListS.h"
#include "org/allbinary/animation/VectorExplosionType.h"
#include "org/allbinary/animation/VectorAnimationUtil.h"


static VectorExplosionGenerator* VectorExplosionGenerator_instance;






static BasicArrayList* VectorExplosionGenerator_createListFromPoints(VectorExplosionGenerator* this, BasicArrayList* tempBasicArrayList, int32_t** points, int32_t howMuch, VectorExplosionType* type);

static BasicArrayList* VectorExplosionGenerator_createPointsBasicArrayList(VectorExplosionGenerator* this, int32_t** points);

void VectorExplosionGenerator_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    VectorExplosionGenerator_instance = VectorExplosionGenerator_new();
}

void VectorExplosionGenerator_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("VectorExplosionGenerator", nullptr);
    java_register_method("VectorExplosionGenerator", "createList", (void*) VectorExplosionGenerator_createList);
    java_register_method("VectorExplosionGenerator", "getInstance@4", (void*) VectorExplosionGenerator_getInstance4);
    java_register_method("VectorExplosionGenerator", "getInstanceStartFrame", (void*) VectorExplosionGenerator_getInstanceStartFrame);
    java_register_method("VectorExplosionGenerator", "createListFromPoints", (void*) VectorExplosionGenerator_createListFromPoints);
    java_register_method("VectorExplosionGenerator", "createPointsBasicArrayList", (void*) VectorExplosionGenerator_createPointsBasicArrayList);
}

static void VectorExplosionGenerator_initFields(VectorExplosionGenerator* this) {
    this->RANDOM = VectorExplosionType_new();
    this->ROTATION = VectorExplosionType_new();
    this->vectorAnimationUtil = VectorAnimationUtil_getInstance();
    this->randomRotationFactory = RandomRotationFactory_getInstance();
}


VectorExplosionGenerator* VectorExplosionGenerator_getInstance0(void) {
        return (VectorExplosionGenerator_staticInit(), VectorExplosionGenerator_instance);
}


void VectorExplosionGenerator_init(VectorExplosionGenerator* this) {
    VectorExplosionGenerator_register();
    VectorExplosionGenerator_initFields(this);
}

VectorExplosionGenerator* VectorExplosionGenerator_new(void) {
    VectorExplosionGenerator* this = java_object_alloc(sizeof(VectorExplosionGenerator), "VectorExplosionGenerator");
    VectorExplosionGenerator_init(this);
    return this;
}


// throws Exception
BasicArrayList* VectorExplosionGenerator_createList(VectorExplosionGenerator* this, BasicArrayList* list, int32_t howMuch, VectorExplosionType* type) {
        GPoint* point = nullptr;
        int32_t size = BasicArrayList_size(list);
        int32_t** points = ((int32_t**) java_array_new2(sizeof(int32_t), size, 2));
        for (int32_t index = 0; index < size; index++) {
            point = ((GPoint*) list->objectArray[index]);
            points[index][0] = GPoint_getX(point);
            points[index][1] = GPoint_getY(point);
        }
        return VectorExplosionGenerator_createListFromPoints(this, list, points, howMuch, type);
}


// throws Exception
// Java overloaded method: C needs a different name
int32_t*** VectorExplosionGenerator_getInstance4(VectorExplosionGenerator* this, int32_t** points, int32_t howMuch, VectorExplosionType* type) {
        BasicArrayList* pointsBasicArrayList = VectorExplosionGenerator_getInstanceStartFrame(this, points, howMuch, type, true);
        BasicArrayList* tempBasicArrayList = ((BasicArrayList*) pointsBasicArrayList->objectArray[0]);
        int32_t*** newPoints = VectorAnimationUtil_toAnimationArrayFromListOfPointListWithPointsPerFrame(this->vectorAnimationUtil, pointsBasicArrayList, BasicArrayList_size(tempBasicArrayList));
        return newPoints;
}


// throws Exception
BasicArrayList* VectorExplosionGenerator_getInstanceStartFrame(VectorExplosionGenerator* this, int32_t** points, int32_t howMuch, VectorExplosionType* type, bool startFrame) {
        JAVA_TRY {
            BasicArrayList* pointsBasicArrayList = BasicArrayListS_new(howMuch);
            BasicArrayList_add(pointsBasicArrayList, VectorExplosionGenerator_createPointsBasicArrayList(this, points));
            int32_t frameIndex = 0;
            BasicArrayList* tempBasicArrayList = nullptr;
            BasicArrayList* pointBasicArrayList = nullptr;
            while (frameIndex < howMuch) {
                tempBasicArrayList = ((BasicArrayList*) pointsBasicArrayList->objectArray[frameIndex]);
                pointBasicArrayList = VectorExplosionGenerator_createListFromPoints(this, tempBasicArrayList, points, howMuch, type);
                BasicArrayList_add(pointsBasicArrayList, pointBasicArrayList);
                frameIndex++;
            }
            if (!startFrame) {
                BasicArrayList_removeAt(pointsBasicArrayList, 0);
            }
            return pointsBasicArrayList;
        } JAVA_CATCH(Exception, e) {
            java_throw(e);
        } JAVA_END_TRY;
}


// throws Exception
static BasicArrayList* VectorExplosionGenerator_createListFromPoints(VectorExplosionGenerator* this, BasicArrayList* tempBasicArrayList, int32_t** points, int32_t howMuch, VectorExplosionType* type) {
        int32_t index = 0;
        BasicArrayList* pointBasicArrayList = BasicArrayListD_new();
        BasicArrayList* sectionBasicArrayList = nullptr;
        while (index < java_array_length(points)) {
            sectionBasicArrayList = BasicArrayListD_new();
            while (points[index][0] != 1000) {
                BasicArrayList_add(sectionBasicArrayList, tempBasicArrayList->objectArray[index]);
                index++;
                if (index >= java_array_length(points)) {
                    break;
                }
            }
            sectionBasicArrayList = RandomTranslation_getInstance(sectionBasicArrayList, howMuch);
            if (type == this->ROTATION) {
                sectionBasicArrayList = RandomRotationFactory_getInstanceList(this->randomRotationFactory, sectionBasicArrayList, howMuch);
            }
            int32_t size = BasicArrayList_size(sectionBasicArrayList);
            for (int32_t index2 = 0; index2 < size; index2++) {
                BasicArrayList_add(pointBasicArrayList, sectionBasicArrayList->objectArray[index2]);
            }
            if (index >= java_array_length(points)) {
                break;
            } else if (points[index][0] == 1000) {
                BasicArrayList_add(pointBasicArrayList, tempBasicArrayList->objectArray[index]);
                index++;
            }
        }
        return pointBasicArrayList;
}


// throws Exception
static BasicArrayList* VectorExplosionGenerator_createPointsBasicArrayList(VectorExplosionGenerator* this, int32_t** points) {
        if (java_array_length(points) == 0) {
            java_throw(java_exception_new("Exception", "Not Points Provided"));
        }
        BasicArrayList* firstPointBasicArrayList = BasicArrayListS_new(java_array_length(points));
        PointFactory* pointFactory = PointFactory_getInstance();
        for (int32_t index = 0; index < java_array_length(points); index++) {
            BasicArrayList_add(firstPointBasicArrayList, PointFactory_createXY(pointFactory, points[index][0], points[index][1]));
        }
        return firstPointBasicArrayList;
}

