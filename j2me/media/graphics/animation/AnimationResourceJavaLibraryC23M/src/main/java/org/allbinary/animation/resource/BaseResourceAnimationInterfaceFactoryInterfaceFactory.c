// Generated Code Do Not Modify
#include "org/allbinary/animation/resource/BaseResourceAnimationInterfaceFactoryInterfaceFactory.h"
#include "org/allbinary/animation/BasicAnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/NullAnimationFactory.h"
#include "org/allbinary/game/resource/ResourceLoadingLevelFactory.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/RectangleFactory.h"
#include "org/allbinary/image/ImageCache.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/animation/resource/FeatureResourceAnimationInterfaceFactoryInterface.h"
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif





















void BaseResourceAnimationInterfaceFactoryInterfaceFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BaseResourceAnimationInterfaceFactoryInterfaceFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BaseResourceAnimationInterfaceFactoryInterfaceFactory", nullptr);
    java_register_method("BaseResourceAnimationInterfaceFactoryInterfaceFactory", "getName", (void*) BaseResourceAnimationInterfaceFactoryInterfaceFactory_getName);
    java_register_method("BaseResourceAnimationInterfaceFactoryInterfaceFactory", "init", (void*) BaseResourceAnimationInterfaceFactoryInterfaceFactory_initMethod);
    java_register_method("BaseResourceAnimationInterfaceFactoryInterfaceFactory", "initImageCache", (void*) BaseResourceAnimationInterfaceFactoryInterfaceFactory_initImageCache);
    java_register_method("BaseResourceAnimationInterfaceFactoryInterfaceFactory", "add", (void*) BaseResourceAnimationInterfaceFactoryInterfaceFactory_add);
    java_register_method("BaseResourceAnimationInterfaceFactoryInterfaceFactory", "getBasicAnimationInterfaceFactoryInstance", (void*) BaseResourceAnimationInterfaceFactoryInterfaceFactory_getBasicAnimationInterfaceFactoryInstance);
    java_register_method("BaseResourceAnimationInterfaceFactoryInterfaceFactory", "getRectangle", (void*) BaseResourceAnimationInterfaceFactoryInterfaceFactory_getRectangle);
    java_register_method("BaseResourceAnimationInterfaceFactoryInterfaceFactory", "addRectangle", (void*) BaseResourceAnimationInterfaceFactoryInterfaceFactory_addRectangle);
    java_register_method("BaseResourceAnimationInterfaceFactoryInterfaceFactory", "getRectangleArrayOfArrays", (void*) BaseResourceAnimationInterfaceFactoryInterfaceFactory_getRectangleArrayOfArrays);
    java_register_method("BaseResourceAnimationInterfaceFactoryInterfaceFactory", "addRectangleArrayOfArrays", (void*) BaseResourceAnimationInterfaceFactoryInterfaceFactory_addRectangleArrayOfArrays);
    java_register_method("BaseResourceAnimationInterfaceFactoryInterfaceFactory", "isFeature", (void*) BaseResourceAnimationInterfaceFactoryInterfaceFactory_isFeature);
    java_register_method("BaseResourceAnimationInterfaceFactoryInterfaceFactory", "isLoadingLevel", (void*) BaseResourceAnimationInterfaceFactoryInterfaceFactory_isLoadingLevel);
    java_register_method("BaseResourceAnimationInterfaceFactoryInterfaceFactory", "toString", (void*) BaseResourceAnimationInterfaceFactoryInterfaceFactory_toString);
    java_register_method("BaseResourceAnimationInterfaceFactoryInterfaceFactory", "getHashtable", (void*) BaseResourceAnimationInterfaceFactoryInterfaceFactory_getHashtable);
    java_register_method("BaseResourceAnimationInterfaceFactoryInterfaceFactory", "getRectangleHashtable", (void*) BaseResourceAnimationInterfaceFactoryInterfaceFactory_getRectangleHashtable);
    java_register_method("BaseResourceAnimationInterfaceFactoryInterfaceFactory", "getRectangleArrayOfArraysHashtable", (void*) BaseResourceAnimationInterfaceFactoryInterfaceFactory_getRectangleArrayOfArraysHashtable);
    java_register_method("BaseResourceAnimationInterfaceFactoryInterfaceFactory", "setInitialized", (void*) BaseResourceAnimationInterfaceFactoryInterfaceFactory_setInitialized);
    java_register_method("BaseResourceAnimationInterfaceFactoryInterfaceFactory", "isInitialized", (void*) BaseResourceAnimationInterfaceFactoryInterfaceFactory_isInitialized);
}

static void BaseResourceAnimationInterfaceFactoryInterfaceFactory_initFields(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    
    
    
    this->initialized = false;
}


void BaseResourceAnimationInterfaceFactoryInterfaceFactory_init(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this, const char* name, ABHashtable* hashtable, ABHashtable* rectangleHashtable, ABHashtable* rectangleArrayHashtable) {
    BaseResourceAnimationInterfaceFactoryInterfaceFactory_register();
    BaseResourceAnimationInterfaceFactoryInterfaceFactory_initFields(this);
        this->hashtable = hashtable;
        this->rectangleHashtable = rectangleHashtable;
        this->rectangleArrayOfArraysHashtable = rectangleArrayHashtable;
        this->name = name;
}

BaseResourceAnimationInterfaceFactoryInterfaceFactory* BaseResourceAnimationInterfaceFactoryInterfaceFactory_new(const char* name, ABHashtable* hashtable, ABHashtable* rectangleHashtable, ABHashtable* rectangleArrayHashtable) {
    BaseResourceAnimationInterfaceFactoryInterfaceFactory* this = java_object_alloc(sizeof(BaseResourceAnimationInterfaceFactoryInterfaceFactory), "BaseResourceAnimationInterfaceFactoryInterfaceFactory");
    BaseResourceAnimationInterfaceFactoryInterfaceFactory_init(this, name, hashtable, rectangleHashtable, rectangleArrayHashtable);
    return this;
}


const char* BaseResourceAnimationInterfaceFactoryInterfaceFactory_getName(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this) {
        return this->name;
}


// throws Exception
void BaseResourceAnimationInterfaceFactoryInterfaceFactory_initMethod(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this, int32_t level) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        LogUtil_putF(this->logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), "Available List of Animations: "), java_string_of(this->hashtable))), this, commonStrings->INIT);
        BaseResourceAnimationInterfaceFactoryInterfaceFactory_setInitialized(this, true);
}


// throws Exception
void BaseResourceAnimationInterfaceFactoryInterfaceFactory_initImageCache(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this, ImageCache* imageCache, int32_t level) {
}


// throws Exception
void BaseResourceAnimationInterfaceFactoryInterfaceFactory_add(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this, const char* resource, BasicAnimationInterfaceFactoryInterface* animationInterfaceFactoryInterface) {
        if (Hashtable_containsKey(this->hashtable, ((void*) resource))) {
            java_throw(java_exception_new("Exception", java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), "Resource Already Created: "), resource))));
        }
        Hashtable_put(this->hashtable, resource, animationInterfaceFactoryInterface);
}


// throws Exception
BasicAnimationInterfaceFactoryInterface* BaseResourceAnimationInterfaceFactoryInterfaceFactory_getBasicAnimationInterfaceFactoryInstance(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this, const char* resource) {
        void* basicAnimationInterfaceFactoryInterfaceCanBeNull = Hashtable_get(this->hashtable, resource);
        if (basicAnimationInterfaceFactoryInterfaceCanBeNull == nullptr) {
            return (NullAnimationFactory_staticInit(), NullAnimationFactory_NULL_NOT_FOR_USE_ANIMATION_FACTORY);
        }
        return ((BasicAnimationInterfaceFactoryInterface*) basicAnimationInterfaceFactoryInterfaceCanBeNull);
}


// throws Exception
Rectangle* BaseResourceAnimationInterfaceFactoryInterfaceFactory_getRectangle(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this, const char* resource) {
        void* rectangleCanBeNull = Hashtable_get(this->rectangleHashtable, resource);
        if (rectangleCanBeNull == nullptr) {
            return (RectangleFactory_staticInit(), RectangleFactory_SINGLETON);
        }
        return ((Rectangle*) rectangleCanBeNull);
}


// throws Exception
void BaseResourceAnimationInterfaceFactoryInterfaceFactory_addRectangle(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this, const char* resource, Rectangle* rectangle) {
        Hashtable_put(this->rectangleHashtable, resource, rectangle);
}


// throws Exception
Rectangle*** BaseResourceAnimationInterfaceFactoryInterfaceFactory_getRectangleArrayOfArrays(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this, const char* resource) {
        void* valueCanBeNull = Hashtable_get(this->rectangleArrayOfArraysHashtable, resource);
        if (valueCanBeNull != nullptr) {
            Rectangle*** rectangleArrayOfArrays = ((Rectangle***) valueCanBeNull);
            return rectangleArrayOfArrays;
        } else {
            return (RectangleFactory_staticInit(), RectangleFactory_ARRAY_OF_ARRAYS);
        }
}


// throws Exception
void BaseResourceAnimationInterfaceFactoryInterfaceFactory_addRectangleArrayOfArrays(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this, const char* resource, Rectangle*** rectangleArrayOfArrays) {
        Hashtable_put(this->rectangleArrayOfArraysHashtable, resource, rectangleArrayOfArrays);
}


bool BaseResourceAnimationInterfaceFactoryInterfaceFactory_isFeature(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this) {
        return false;
}


bool BaseResourceAnimationInterfaceFactoryInterfaceFactory_isLoadingLevel(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this, int32_t level) {
        ResourceLoadingLevelFactory* resourceLoadingLevelFactory = ResourceLoadingLevelFactory_getInstance();
        if (level == ResourceLoadingLevel_getLevel(resourceLoadingLevelFactory->LOAD_ALL)) {
            return true;
        } else {
            return false;
        }
}


const char* BaseResourceAnimationInterfaceFactoryInterfaceFactory_toString(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this) {
        return java_string_of(StringMaker_append(StringMaker_append(StringMaker_append(StringMaker_append(StringMaker_new(), java_class_of(this)), CommonSeps_getInstance()->SEMICOLON), CommonSeps_getInstance()->SPACE), this->name));
}


ABHashtable* BaseResourceAnimationInterfaceFactoryInterfaceFactory_getHashtable(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this) {
        return this->hashtable;
}


ABHashtable* BaseResourceAnimationInterfaceFactoryInterfaceFactory_getRectangleHashtable(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this) {
        return this->rectangleHashtable;
}


ABHashtable* BaseResourceAnimationInterfaceFactoryInterfaceFactory_getRectangleArrayOfArraysHashtable(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this) {
        return this->rectangleArrayOfArraysHashtable;
}


void BaseResourceAnimationInterfaceFactoryInterfaceFactory_setInitialized(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this, bool initialized) {
        this->initialized = initialized;
}


bool BaseResourceAnimationInterfaceFactoryInterfaceFactory_isInitialized(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this) {
        return this->initialized;
}

