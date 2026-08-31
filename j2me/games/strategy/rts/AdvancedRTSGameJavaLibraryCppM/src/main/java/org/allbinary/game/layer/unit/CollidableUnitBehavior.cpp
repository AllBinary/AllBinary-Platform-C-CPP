
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

public constructor (bool collidable){
            super(collidable);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    collideNone(CollidableCompositeLayer ownerLayer, CollidableCompositeLayer collidableInterfaceCompositeInterface){
this.chase(ownerLayer, collidableInterfaceCompositeInterface);
    

    rtsLayer: AdvancedRTSGameLayer = collidableInterfaceCompositeInterface as AdvancedRTSGameLayer;;
    

                        if(rtsLayer!.getType() == UnitLayer.getStaticType())
                        
                                    {
                                    this.collideUnit(ownerLayer, rtsLayer as UnitLayer);
    

                                    }
                                
}


//inner= member=true isStatic=
class SimpleSteeringVisitor: public SteeringVisitor {
        

    public any visit(any = {} anyType){

    logUtil: LogUtil = LogUtil.getInstance()!;;
    

        try {
            
    ownerLayer: CollidableCompositeLayer = anyType as CollidableCompositeLayer;;
    

                        if(this.getList()!.size() > 0)
                        
                                    {
                                    
    allbinaryLayer: CollidableCompositeLayer = this.getList()!.get(0) as CollidableCompositeLayer;;
    

    clear: bool = this::.steer(ownerLayer, allbinaryLayer)!;;
    

                        if(clear)
                        
                                    {
                                    this.getList()!.clear();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullUtil.getInstance()!.NULL_OBJECT;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BooleanFactory.getInstance()!.TRUE;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullUtil.getInstance()!.NULL_OBJECT;
    

                //: 
} catch(e) 
            {

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
logUtil!.put(commonStrings!.EXCEPTION, this, "visit", e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullUtil.getInstance()!.NULL_OBJECT;
    
}

}


};

            
    private: const simpleSteeringVisitor = new this.SimpleSteeringVisitor();

                //@Throws(Exception.constructor)
            
    bool steer(CollidableCompositeLayer ownerLayer, CollidableCompositeLayer collidableInterfaceCompositeInterface){

    ownerUnitLayer: UnitLayer = ownerLayer as UnitLayer;;
    

    unitLayer: UnitLayer = collidableInterfaceCompositeInterface as UnitLayer;;
    

    angleInfo2: AngleInfo = unitLayer!.getRotationAnimationInterface()!.getAngleInfoP()!;;
    

    angleInfo: AngleInfo = ownerUnitLayer!.getRotationAnimationInterface()!.getAngleInfoP()!;;
    

    angle: int32_t = angleInfo!.getAngle() -angleInfo2!.getAngle();;
    

                        if(angle < 90 || angle > 270)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                             else 
                        if(angle >= 90 || angle <= 270)
                        
                                    {
                                    ownerUnitLayer!.getGameKeyEventList()!.add(GameKeyEventFactory.getInstance()!.getInstanceForKey(ownerUnitLayer, Canvas.RIGHT));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                



                            throw new Exception("Error");
                    
}


                //@Throws(Exception.constructor)
            
    chase(CollidableCompositeLayer ownerLayer, CollidableCompositeLayer collidableInterfaceCompositeInterface){

    rtsLayer: AdvancedRTSGameLayer = collidableInterfaceCompositeInterface as AdvancedRTSGameLayer;;
    

                        if(rtsLayer!.getType() == UnitLayer.getStaticType())
                        
                                    {
                                    
                        if(!this.simpleSteeringVisitor!.getList()!.contains(collidableInterfaceCompositeInterface))
                        
                                    {
                                    this.simpleSteeringVisitor!.getList()!.add(collidableInterfaceCompositeInterface);
    

                                    }
                                

    ownerUnitLayer: UnitLayer = ownerLayer as UnitLayer;;
    

    list: BasicArrayList = ownerUnitLayer!.getUnitWaypointBehavior()!.getSteeringVisitorList()!;;
    

                        if(!list.contains(this.simpleSteeringVisitor))
                        
                                    {
                                    list.add(this.simpleSteeringVisitor);
    

                                    }
                                

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    collideUnit(CollidableCompositeLayer ownerLayer, UnitLayer unitLayer){

    ownerUnitLayer: UnitLayer = ownerLayer as UnitLayer;;
    

    partialPositionList: BasicArrayList = UnitLayer.getPartialpositionlist()!;;
    

    geographicMapCompositeInterface: GeographicMapCompositeInterface = ownerUnitLayer!.allBinaryGameLayerManagerP as GeographicMapCompositeInterface;;
    

    geographicMapInterface: BasicGeographicMap = geographicMapCompositeInterface!.getGeographicMapInterface()[0]!;;
    

    basicGeographicMap: BasicGeographicMap = geographicMapInterface;;
    

    dropCellPositionHistory: DropCellPositionHistory = DropCellPositionHistory.getInstance()!;;
    

    tiledLayerUtil: TiledLayerUtil = TiledLayerUtil.getInstance()!;;
    

    tiledLayer: AllBinaryTiledLayer = basicGeographicMap!.getAllBinaryTiledLayer()!;;
    

                        if(ownerLayer!.getXP() < unitLayer!.getXP() && ownerLayer!.getX2() > unitLayer!.getXP())
                        
                                    {
                                    
    diff: int32_t = ownerLayer!.getWidth() +1;;
    
this.layerPartialCellPositionsUtil!.getAllDXY(basicGeographicMap, ownerLayer,  -diff, 0, partialPositionList);
    

                        if(!dropCellPositionHistory!.anyCellPositionWithDrop(partialPositionList))
                        
                                    {
                                    
    x: int32_t = unitLayer!.getXP() -diff;;
    

    y: int32_t = ownerLayer!.getYP()!;;
    
x= tiledLayerUtil!.keepOnMapX(tiledLayer, x, ownerLayer!.getWidth());
    
y= tiledLayerUtil!.keepOnMapY(tiledLayer, y, ownerLayer!.getHeight());
    
ownerLayer!.setPosition(x, y, ownerLayer!.getZP());
    

                                    }
                                
this.layerPartialCellPositionsUtil!.getAllDXY(basicGeographicMap, unitLayer, diff, 0, partialPositionList);
    

                        if(!dropCellPositionHistory!.anyCellPositionWithDrop(partialPositionList))
                        
                                    {
                                    
    x: int32_t = unitLayer!.getXP() +diff;;
    

    y: int32_t = unitLayer!.getYP()!;;
    
x= tiledLayerUtil!.keepOnMapX(tiledLayer, x, unitLayer!.getWidth());
    
y= tiledLayerUtil!.keepOnMapY(tiledLayer, y, unitLayer!.getHeight());
    
unitLayer!.setPosition(x, y, unitLayer!.getZP());
    

                                    }
                                

                                    }
                                

                        if(ownerLayer!.getYP() < unitLayer!.getYP() && ownerLayer!.getY2() > unitLayer!.getYP())
                        
                                    {
                                    
    diff: int32_t = ownerLayer!.getHeight() +1;;
    
this.layerPartialCellPositionsUtil!.getAllDXY(basicGeographicMap, ownerLayer, 0,  -diff, partialPositionList);
    

                        if(!dropCellPositionHistory!.anyCellPositionWithDrop(partialPositionList))
                        
                                    {
                                    
    x: int32_t = ownerLayer!.getXP()!;;
    

    y: int32_t = unitLayer!.getYP() -diff;;
    
x= tiledLayerUtil!.keepOnMapX(tiledLayer, x, ownerLayer!.getWidth());
    
y= tiledLayerUtil!.keepOnMapY(tiledLayer, y, ownerLayer!.getHeight());
    
ownerLayer!.setPosition(x, y, ownerLayer!.getZP());
    

                                    }
                                
this.layerPartialCellPositionsUtil!.getAllDXY(basicGeographicMap, unitLayer, 0, diff, partialPositionList);
    

                        if(!dropCellPositionHistory!.anyCellPositionWithDrop(partialPositionList))
                        
                                    {
                                    
    x: int32_t = unitLayer!.getXP()!;;
    

    y: int32_t = unitLayer!.getYP() +diff;;
    
x= tiledLayerUtil!.keepOnMapX(tiledLayer, x, unitLayer!.getWidth());
    
y= tiledLayerUtil!.keepOnMapY(tiledLayer, y, unitLayer!.getHeight());
    
unitLayer!.setPosition(x, y, unitLayer!.getZP());
    

                                    }
                                

                                    }
                                
}


};

            

