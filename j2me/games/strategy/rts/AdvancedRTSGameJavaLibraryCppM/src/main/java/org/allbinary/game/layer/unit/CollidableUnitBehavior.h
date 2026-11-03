
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2006 AllBinary 
                *   
                *  By agreeing to this license you and any business entity you represent are 
                *  legally bound to the AllBinary Open License Version 1 legal agreement. 
                *   
                *  You may obtain the AllBinary Open License Version 1 legal agreement from 
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
                *   
                *  Created By: Travis Berthelot    
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_UNIT_COLLIDABLEUNITBEHAVIOR_H
        #define ORG_ALLBINARY_GAME_LAYER_UNIT_COLLIDABLEUNITBEHAVIOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Canvas;
#include <org/allbinary/game/layer/SteeringVisitor.h>
class AdvancedRTSGameLayer;
class CollidableCompositeLayer;
#include <org/allbinary/game/layer/CollidableRTSBehavior.h>
class BasicArrayList;
class GameKeyEventFactory;
class AllBinaryTiledLayer;
class TiledLayerUtil;
class LayerPartialCellPositionsUtil;
class NullUtil;
class LogUtil;
class BooleanFactory;
class AngleInfo;
class BasicGeographicMap;
class GeographicMapCompositeInterface;
class DropCellPositionHistory;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class UnitLayer;
//class SimpleSteeringVisitor;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CollidableUnitBehavior: public CollidableRTSBehavior {
private: class SimpleSteeringVisitor;

    private: LayerPartialCellPositionsUtil* layerPartialCellPositionsUtil;

public: CollidableUnitBehavior(bool collidable);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void collideNone(CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collidableInterfaceCompositeInterface);

//inner= member=true isStatic=
private: class SimpleSteeringVisitor: public SteeringVisitor {

    public: CollidableUnitBehavior* outer = nullptr;


            
    public: SimpleSteeringVisitor();
        
    public: Object* visit(Object* anyType);
    public: Object* visit(const std::string& anyType) { return visit(JavaString::box(anyType)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> Object* visit(BoxValue anyType) { return visit(JavaBoxes::toObject(anyType)); }
    public: template<typename BoxElement> Object* visit(const std::vector<BoxElement>& anyType) { return visit(JavaBoxes::toObject(anyType)); }

};

            
    private: SimpleSteeringVisitor* simpleSteeringVisitor;

                //@Throws(Exception.constructor)
            
    private: bool steer(CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collidableInterfaceCompositeInterface);

                //@Throws(Exception.constructor)
            
    private: void chase(CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collidableInterfaceCompositeInterface);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void collideUnit(CollidableCompositeLayer* ownerLayer, UnitLayer* unitLayer);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_UNIT_COLLIDABLEUNITBEHAVIOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_UNIT_COLLIDABLEUNITBEHAVIOR_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_UNIT_COLLIDABLEUNITBEHAVIOR_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Canvas.h>)
#include <javax/microedition/lcdui/Canvas.h>
#endif
#if __has_include(<org/allbinary/game/layer/SteeringVisitor.h>)
#include <org/allbinary/game/layer/SteeringVisitor.h>
#endif
#if __has_include(<org/allbinary/game/layer/AdvancedRTSGameLayer.h>)
#include <org/allbinary/game/layer/AdvancedRTSGameLayer.h>
#endif
#if __has_include(<org/allbinary/game/layer/CollidableCompositeLayer.h>)
#include <org/allbinary/game/layer/CollidableCompositeLayer.h>
#endif
#if __has_include(<org/allbinary/game/layer/CollidableRTSBehavior.h>)
#include <org/allbinary/game/layer/CollidableRTSBehavior.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/game/input/event/GameKeyEventFactory.h>)
#include <org/allbinary/game/input/event/GameKeyEventFactory.h>
#endif
#if __has_include(<org/allbinary/game/layer/AllBinaryTiledLayer.h>)
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>
#endif
#if __has_include(<org/allbinary/game/layer/TiledLayerUtil.h>)
#include <org/allbinary/game/layer/TiledLayerUtil.h>
#endif
#if __has_include(<org/allbinary/game/layer/geographic/map/LayerPartialCellPositionsUtil.h>)
#include <org/allbinary/game/layer/geographic/map/LayerPartialCellPositionsUtil.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/java/bool/BooleanFactory.h>)
#include <org/allbinary/logic/java/bool/BooleanFactory.h>
#endif
#if __has_include(<org/allbinary/math/AngleInfo.h>)
#include <org/allbinary/math/AngleInfo.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>)
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/drop/DropCellPositionHistory.h>)
#include <org/allbinary/media/graphics/geography/map/drop/DropCellPositionHistory.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/game/layer/unit/UnitLayer.h")
#include "org/allbinary/game/layer/unit/UnitLayer.h"
#endif

        #endif
    
