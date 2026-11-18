// Generated Code Do Not Modify
#include "org/allbinary/animation/VectorMirrorGenerator.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/pipeline/BasicGraphicsPipeline.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListS.h"
#include "org/allbinary/animation/VectorAnimationUtil.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif


static VectorMirrorGenerator* VectorMirrorGenerator_instance;





void VectorMirrorGenerator_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    VectorMirrorGenerator_instance = VectorMirrorGenerator_new();
}

void VectorMirrorGenerator_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("VectorMirrorGenerator", nullptr);
    java_register_method("VectorMirrorGenerator", "getInstance@3_1", (void*) VectorMirrorGenerator_getInstance3_1);
    java_register_method("VectorMirrorGenerator", "getInstance@3_2", (void*) VectorMirrorGenerator_getInstance3_2);
}

static void VectorMirrorGenerator_initFields(VectorMirrorGenerator* this) {
    this->logUtil = LogUtil_getInstance();
    this->vectorAnimationUtil = VectorAnimationUtil_getInstance();
}


VectorMirrorGenerator* VectorMirrorGenerator_getInstance0(void) {
        return (VectorMirrorGenerator_staticInit(), VectorMirrorGenerator_instance);
}


void VectorMirrorGenerator_init(VectorMirrorGenerator* this) {
    VectorMirrorGenerator_register();
    VectorMirrorGenerator_initFields(this);
}

VectorMirrorGenerator* VectorMirrorGenerator_new(void) {
    VectorMirrorGenerator* this = java_object_alloc(sizeof(VectorMirrorGenerator), "VectorMirrorGenerator");
    VectorMirrorGenerator_init(this);
    return this;
}


// Java overloaded method: C needs a different name
int32_t*** VectorMirrorGenerator_getInstance3_1(VectorMirrorGenerator* this, int32_t*** points, int32_t width) {
        JAVA_TRY {
            PointFactory* pointFactory = PointFactory_getInstance();
            BasicArrayList* pointBasicArrayList = nullptr;
            int32_t** nextPoints = nullptr;
            int32_t size2 = 0;
            int32_t size = java_array_length(points);
            BasicArrayList* pointsBasicArrayList = BasicArrayListS_new(size);
            for (int32_t frame = 0; frame < size; frame++) {
                nextPoints = points[frame];
                size2 = java_array_length(nextPoints);
                pointBasicArrayList = BasicArrayListS_new(size2);
                for (int32_t index = 0; index < size2; index++) {
                    BasicArrayList_add(pointBasicArrayList, PointFactory_createXY(pointFactory, nextPoints[index][0], nextPoints[index][1]));
                }
                BasicArrayList_add(pointsBasicArrayList, pointBasicArrayList);
            }
            for (int32_t index = 0; index < java_array_length(points); index++) {
                BasicArrayList_add(pointsBasicArrayList, VectorMirrorGenerator_getInstance(this, ((BasicArrayList*) pointsBasicArrayList->objectArray[index]), width));
            }
            int32_t*** newPoints = VectorAnimationUtil_toAnimationArrayFromListOfPointList(this->vectorAnimationUtil, pointsBasicArrayList);
            return newPoints;
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, e);
            return NullUtil_getInstance()->NULL_INT_ARRAY_ARRAY_ARRAY;
        } JAVA_END_TRY;
}


// throws Exception
// Java overloaded method: C needs a different name
BasicArrayList* VectorMirrorGenerator_getInstance3_2(VectorMirrorGenerator* this, BasicArrayList* pointBasicArrayList, int32_t width) {
        BasicGraphicsPipeline* graphicsPipe = BasicGraphicsPipeline_new(pointBasicArrayList);
        BasicGraphicsPipeline_createMatrix(graphicsPipe);
        BasicGraphicsPipeline_mirror(graphicsPipe, width);
        return BasicGraphicsPipeline_getMatrix(graphicsPipe);
}

