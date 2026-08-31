
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

            #include "../../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/game/layer/SteeringVisitor.h>

      
#include <org/allbinary/game/layer/AdvancedRTSGameLayer.h>

      
#include <org/allbinary/game/layer/CollidableCompositeLayer.h>

      
#include <org/allbinary/game/layer/CollidableRTSBehavior.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/game/input/event/GameKeyEventFactory.h>

      
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/game/layer/TiledLayerUtil.h>

      
#include <org/allbinary/game/layer/geographic/map/LayerPartialCellPositionsUtil.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h>

      
#include <org/allbinary/media/graphics/geography/map/drop/DropCellPositionHistory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "UnitLayer.h"
//#include "SimpleSteeringVisitor.h"

class CollidableUnitBehavior: public CollidableRTSBehavior {
        

    private: const layerPartialCellPositionsUtil: LayerPartialCellPositionsUtil = LayerPartialCellPositionsUtil.getInstance()!;

public constructor (bool collidable);

                //@Throws(Exception.constructor)
            
    collideNone(CollidableCompositeLayer ownerLayer, CollidableCompositeLayer collidableInterfaceCompositeInterface);

//inner= member=true isStatic=
class SimpleSteeringVisitor: public SteeringVisitor {
        

    public any visit(any = {} anyType);

};

            
    private: const simpleSteeringVisitor = new this.SimpleSteeringVisitor();

                //@Throws(Exception.constructor)
            
    bool steer(CollidableCompositeLayer ownerLayer, CollidableCompositeLayer collidableInterfaceCompositeInterface);

                //@Throws(Exception.constructor)
            
    chase(CollidableCompositeLayer ownerLayer, CollidableCompositeLayer collidableInterfaceCompositeInterface);

                //@Throws(Exception.constructor)
            
    collideUnit(CollidableCompositeLayer ownerLayer, UnitLayer unitLayer);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_UNIT_COLLIDABLEUNITBEHAVIOR_H
