// Generated Code Do Not Modify
#include "org/allbinary/game/layer/LayerPlacer.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/LayerInterfaceFactory.h"
#include "org/allbinary/layer/LayerInterfaceVisitor.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/EnumerationUtil.h"
#include "org/allbinary/game/layer/LayerPlacementInterface.h"
#include "org/allbinary/game/layer/LayerPlacementType.h"
#include "org/allbinary/game/layer/LayerPlacementTypeFactory.h"







void LayerPlacer_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void LayerPlacer_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LayerPlacer", nullptr);
    java_register_method("LayerPlacer", "processList", (void*) LayerPlacer_processList);
    java_register_method("LayerPlacer", "process", (void*) LayerPlacer_process);
    java_register_method("LayerPlacer", "getPoint", (void*) LayerPlacer_getPoint);
}

static void LayerPlacer_initFields(LayerPlacer* this) {
    this->enumerationUtil = EnumerationUtil_getInstance();
    
    
}


void LayerPlacer_init(LayerPlacer* this, LayerInterfaceVisitor* layerInterfaceVisitor, GPoint* dimension) {
    LayerPlacer_register();
    LayerPlacer_initFields(this);
        this->layerInterfaceVisitor = layerInterfaceVisitor;
        this->dimension = dimension;
}

LayerPlacer* LayerPlacer_new(LayerInterfaceVisitor* layerInterfaceVisitor, GPoint* dimension) {
    LayerPlacer* this = java_object_alloc(sizeof(LayerPlacer), "LayerPlacer");
    LayerPlacer_init(this, layerInterfaceVisitor, dimension);
    return this;
}


// throws Exception
void LayerPlacer_processList(LayerPlacer* this, BasicArrayList* list) {
        int32_t size = BasicArrayList_size(list);
        LayerPlacementInterface* layerPlacementInterface = nullptr;
        for (int32_t index = 0; index < size; index++) {
            layerPlacementInterface = ((LayerPlacementInterface*) list->objectArray[index]);
            LayerPlacer_process(this, layerPlacementInterface);
        }
}


// throws Exception
void LayerPlacer_process(LayerPlacer* this, LayerPlacementInterface* layerPlacementInterface) {
        GPoint* relativePoint = LayerPlacer_getPoint(this, layerPlacementInterface);
        LayerInterfaceFactory* layerInterfaceFactory = LayerInterfaceFactory_getInstance();
        ABHashtable* hashtable = LayerPlacementInterface_getInstance(layerPlacementInterface);
        Enumeration* enumeration = Hashtable_keys(hashtable);
        GPoint* point = nullptr;
        ABHashtable* layerHashtable = nullptr;
        int32_t x = 0;
        int32_t y = 0;
        int32_t z = 0;
        AllBinaryLayer* layerInterface = nullptr;
        while (EnumerationUtil_hasMoreElements(this->enumerationUtil, enumeration)) {
            point = ((GPoint*) EnumerationUtil_nextElement(this->enumerationUtil, enumeration));
            layerHashtable = ((ABHashtable*) Hashtable_get(hashtable, point));
            x = GPoint_getX(point) + GPoint_getX(relativePoint);
            y = GPoint_getY(point) + GPoint_getY(relativePoint);
            z = GPoint_getZ(point) + GPoint_getZ(relativePoint);
            layerInterface = LayerInterfaceFactory_getNexInstance(layerInterfaceFactory, layerHashtable, x, y, z);
            LayerInterfaceVisitor_visit(this->layerInterfaceVisitor, layerInterface);
        }
}


// throws Exception
GPoint* LayerPlacer_getPoint(LayerPlacer* this, LayerPlacementInterface* layerPlacementInterface) {
        PointFactory* pointFactory = PointFactory_getInstance();
        LayerPlacementType* layerPlacementType = LayerPlacementInterface_getLayerType(layerPlacementInterface);
        if (layerPlacementType == LayerPlacementTypeFactory_getInstance()->MAP) {
            int32_t width = LayerPlacementInterface_getWidth(layerPlacementInterface);
            int32_t height = LayerPlacementInterface_getHeight(layerPlacementInterface);
            int32_t x = ((GPoint_getX(this->dimension) - width) / 2);
            int32_t y = ((GPoint_getY(this->dimension) - height) / 2);
            return PointFactory_createXY(pointFactory, x, y);
        } else if (layerPlacementType == LayerPlacementTypeFactory_getInstance()->UP) {
            int32_t width = LayerPlacementInterface_getWidth(layerPlacementInterface);
            int32_t height = LayerPlacementInterface_getHeight(layerPlacementInterface);
            int32_t x = ((GPoint_getX(this->dimension) - width) / 2);
            int32_t y = -height;
            return PointFactory_createXY(pointFactory, x, y);
        } else {
            java_throw(java_exception_new("Exception", "PlacementType Not Recognized"));
        }
}

