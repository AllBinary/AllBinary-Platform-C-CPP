// Generated Code Do Not Modify
#include "org/allbinary/animation/VectorRotationGenerator.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/pipeline/BasicGraphicsPipeline.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/math/Angle.h"
#include "org/allbinary/math/AngleFactory.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListS.h"
#include "org/allbinary/vector/VectorInfo.h"
#include "org/allbinary/animation/VectorAnimationUtil.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif


static VectorRotationGenerator* VectorRotationGenerator_instance;






void VectorRotationGenerator_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    VectorRotationGenerator_instance = VectorRotationGenerator_new();
}

void VectorRotationGenerator_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("VectorRotationGenerator", nullptr);
    java_register_method("VectorRotationGenerator", "getInstance@2", (void*) VectorRotationGenerator_getInstance2);
    java_register_method("VectorRotationGenerator", "getInstanceFrames", (void*) VectorRotationGenerator_getInstanceFrames);
    java_register_method("VectorRotationGenerator", "getListAtAngle", (void*) VectorRotationGenerator_getListAtAngle);
}

static void VectorRotationGenerator_initFields(VectorRotationGenerator* this) {
    this->logUtil = LogUtil_getInstance();
    this->vectorAnimationUtil = VectorAnimationUtil_getInstance();
    this->angleFactory = AngleFactory_getInstance();
}


VectorRotationGenerator* VectorRotationGenerator_getInstance0(void) {
        return (VectorRotationGenerator_staticInit(), VectorRotationGenerator_instance);
}


void VectorRotationGenerator_init(VectorRotationGenerator* this) {
    VectorRotationGenerator_register();
    VectorRotationGenerator_initFields(this);
}

VectorRotationGenerator* VectorRotationGenerator_new(void) {
    VectorRotationGenerator* this = java_object_alloc(sizeof(VectorRotationGenerator), "VectorRotationGenerator");
    VectorRotationGenerator_init(this);
    return this;
}


// Java overloaded method: C needs a different name
int32_t*** VectorRotationGenerator_getInstance2(VectorRotationGenerator* this, VectorInfo* vectorRotationInfo) {
        return VectorRotationGenerator_getInstanceFrames(this, VectorInfo_getWidth(vectorRotationInfo), VectorInfo_getHeight(vectorRotationInfo), VectorInfo_getPoints(vectorRotationInfo), VectorInfo_getTotalFrames(vectorRotationInfo));
}


int32_t*** VectorRotationGenerator_getInstanceFrames(VectorRotationGenerator* this, int32_t width, int32_t height, int32_t** points, int32_t frames) {
        JAVA_TRY {
            int16_t totalAngle = this->angleFactory->TOTAL_ANGLE;
            int32_t angleIncrement = ((int32_t) totalAngle) / frames;
            BasicArrayList* pointsBasicArrayList = BasicArrayListS_new(((int32_t) totalAngle) / angleIncrement);
            BasicArrayList* pointBasicArrayList = BasicArrayListS_new(java_array_length(points));
            PointFactory* pointFactory = PointFactory_getInstance();
            int32_t size = java_array_length(points);
            for (int32_t index = 0; index < size; index++) {
                BasicArrayList_add(pointBasicArrayList, PointFactory_createXY(pointFactory, points[index][0], points[index][1]));
            }
            int32_t index = 0;
            while (index < ((int32_t) totalAngle)) {
                BasicArrayList_add(pointsBasicArrayList, VectorRotationGenerator_getListAtAngle(this, width, height, pointBasicArrayList, AngleFactory_getAt(this->angleFactory, index)));
                index += angleIncrement;
            }
            int32_t*** newPoints = VectorAnimationUtil_toAnimationArrayFromListOfPointListWithPointsPerFrame(this->vectorAnimationUtil, pointsBasicArrayList, BasicArrayList_size(pointBasicArrayList));
            return newPoints;
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, e);
            return NullUtil_getInstance()->NULL_INT_ARRAY_ARRAY_ARRAY;
        } JAVA_END_TRY;
}


// throws Exception
BasicArrayList* VectorRotationGenerator_getListAtAngle(VectorRotationGenerator* this, int32_t width, int32_t height, BasicArrayList* pointBasicArrayList, Angle* angle) {
        BasicGraphicsPipeline* graphicsPipe = BasicGraphicsPipeline_new(pointBasicArrayList);
        BasicGraphicsPipeline_createMatrix(graphicsPipe);
        BasicGraphicsPipeline_translate(graphicsPipe, -(width >> 1), -(height >> 1));
        BasicGraphicsPipeline_rotateToAngle(graphicsPipe, angle);
        BasicGraphicsPipeline_translate(graphicsPipe, (width >> 1), (height >> 1));
        return BasicGraphicsPipeline_getMatrix(graphicsPipe);
}

