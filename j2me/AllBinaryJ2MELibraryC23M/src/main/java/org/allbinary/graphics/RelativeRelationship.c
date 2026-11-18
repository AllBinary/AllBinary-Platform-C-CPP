// Generated Code Do Not Modify
#include "org/allbinary/graphics/RelativeRelationship.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListUtil.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/GPoint.h"
#if __has_include("org/allbinary/util/BasicArrayListUtil.h")
#include "org/allbinary/util/BasicArrayListUtil.h"
#endif


RelativeRelationship* RelativeRelationship_NULL_RELATIVE_RELATIONSHIP;







void RelativeRelationship_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    RelativeRelationship_NULL_RELATIVE_RELATIONSHIP = RelativeRelationship_new(PointFactory_getInstance()->ZERO_ZERO, BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance()));
}

void RelativeRelationship_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("RelativeRelationship", nullptr);
    java_register_method("RelativeRelationship", "getX", (void*) RelativeRelationship_getX);
    java_register_method("RelativeRelationship", "getY", (void*) RelativeRelationship_getY);
    java_register_method("RelativeRelationship", "getZ", (void*) RelativeRelationship_getZ);
    java_register_method("RelativeRelationship", "getTypesAllowedList", (void*) RelativeRelationship_getTypesAllowedList);
    java_register_method("RelativeRelationship", "setTypesAllowedList", (void*) RelativeRelationship_setTypesAllowedList);
}

static void RelativeRelationship_initFields(RelativeRelationship* this) {
    
    
    
    
}


void RelativeRelationship_init(RelativeRelationship* this, GPoint* point, BasicArrayList* typesAllowedList) {
    RelativeRelationship_register();
    RelativeRelationship_initFields(this);
        this->x = GPoint_getX(point);
        this->y = GPoint_getY(point);
        this->z = GPoint_getZ(point);
        this->typesAllowedList = typesAllowedList;
}

RelativeRelationship* RelativeRelationship_new(GPoint* point, BasicArrayList* typesAllowedList) {
    RelativeRelationship* this = java_object_alloc(sizeof(RelativeRelationship), "RelativeRelationship");
    RelativeRelationship_init(this, point, typesAllowedList);
    return this;
}


int32_t RelativeRelationship_getX(RelativeRelationship* this) {
        return this->x;
}


int32_t RelativeRelationship_getY(RelativeRelationship* this) {
        return this->y;
}


int32_t RelativeRelationship_getZ(RelativeRelationship* this) {
        return this->z;
}


BasicArrayList* RelativeRelationship_getTypesAllowedList(RelativeRelationship* this) {
        return this->typesAllowedList;
}


void RelativeRelationship_setTypesAllowedList(RelativeRelationship* this, BasicArrayList* typesAllowedList) {
        this->typesAllowedList = typesAllowedList;
}

