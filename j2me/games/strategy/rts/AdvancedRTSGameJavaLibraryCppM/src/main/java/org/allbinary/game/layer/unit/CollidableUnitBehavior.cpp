
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
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
        #include "org/allbinary/game/layer/unit/UnitLayer.h"
//#include "org/allbinary/game/layer/unit/SimpleSteeringVisitor.h"

class CollidableUnitBehavior: public CollidableRTSBehavior {

    private: LayerPartialCellPositionsUtil* layerPartialCellPositionsUtil = LayerPartialCellPositionsUtil::getInstance();

public: CollidableUnitBehavior(bool collidable) : CollidableRTSBehavior(collidable){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    protected: void collideNone(CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collidableInterfaceCompositeInterface){
this->chase(ownerLayer, collidableInterfaceCompositeInterface);
    

    AdvancedRTSGameLayer* rtsLayer = dynamic_cast<AdvancedRTSGameLayer*>(collidableInterfaceCompositeInterface);;
    

                        if(rtsLayer->getType() == UnitLayer::getStaticType())
                        
                                    {
                                    this->collideUnit(ownerLayer, dynamic_cast<UnitLayer*>(rtsLayer));
    

                                    }
                                
}


//inner= member=true isStatic=
class SimpleSteeringVisitor: public SteeringVisitor {

    public: Object* visit(Object* anyType){

    LogUtil* logUtil = LogUtil::getInstance();;
    

        try {
            
    CollidableCompositeLayer* ownerLayer = dynamic_cast<CollidableCompositeLayer*>(anyType);;
    

                        if(this->getList()->size() > 0)
                        
                                    {
                                    
    CollidableCompositeLayer* allbinaryLayer = dynamic_cast<CollidableCompositeLayer*>(this->getList()->get(0));;
    

    bool clear = this->steer(ownerLayer, allbinaryLayer);;
    

                        if(clear)
                        
                                    {
                                    this->getList()->clear();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullUtil::getInstance()->NULL_OBJECT;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BooleanFactory::getInstance()->TRUE;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullUtil::getInstance()->NULL_OBJECT;
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
logUtil->put(commonStrings->EXCEPTION, this, "visit", &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullUtil::getInstance()->NULL_OBJECT;
    
}

}


};

            
    private: simpleSteeringVisitor = new SimpleSteeringVisitor();

                //@Throws(Exception.constructor)
            
    private: bool steer(CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collidableInterfaceCompositeInterface){

    UnitLayer* ownerUnitLayer = dynamic_cast<UnitLayer*>(ownerLayer);;
    

    UnitLayer* unitLayer = dynamic_cast<UnitLayer*>(collidableInterfaceCompositeInterface);;
    

    AngleInfo* angleInfo2 = unitLayer->getRotationAnimationInterface()->getAngleInfoP();;
    

    AngleInfo* angleInfo = ownerUnitLayer->getRotationAnimationInterface()->getAngleInfoP();;
    

    int32_t angle = angleInfo->getAngle() -angleInfo2->getAngle();;
    

                        if(angle < 90 || angle > 270)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                             else 
                        if(angle >= 90 || angle <= 270)
                        
                                    {
                                    ownerUnitLayer->getGameKeyEventList()->add(GameKeyEventFactory::getInstance()->getInstanceForKey(ownerUnitLayer, Canvas::RIGHT));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                



                            throw new Exception("Error");
                    
}


                //@Throws(Exception.constructor)
            
    private: void chase(CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collidableInterfaceCompositeInterface){

    AdvancedRTSGameLayer* rtsLayer = dynamic_cast<AdvancedRTSGameLayer*>(collidableInterfaceCompositeInterface);;
    

                        if(rtsLayer->getType() == UnitLayer::getStaticType())
                        
                                    {
                                    
                        if(!this->simpleSteeringVisitor->getList()->contains(collidableInterfaceCompositeInterface))
                        
                                    {
                                    this->simpleSteeringVisitor->getList()->add(collidableInterfaceCompositeInterface);
    

                                    }
                                

    UnitLayer* ownerUnitLayer = dynamic_cast<UnitLayer*>(ownerLayer);;
    

    BasicArrayList* list = ownerUnitLayer->getUnitWaypointBehavior()->getSteeringVisitorList();;
    

                        if(!list->contains(this->simpleSteeringVisitor))
                        
                                    {
                                    list->add(this->simpleSteeringVisitor);
    

                                    }
                                

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    protected: void collideUnit(CollidableCompositeLayer* ownerLayer, UnitLayer* unitLayer){

    UnitLayer* ownerUnitLayer = dynamic_cast<UnitLayer*>(ownerLayer);;
    

    BasicArrayList* partialPositionList = UnitLayer::getPartialpositionlist();;
    

    GeographicMapCompositeInterface* geographicMapCompositeInterface = dynamic_cast<GeographicMapCompositeInterface*>(ownerUnitLayer->allBinaryGameLayerManagerP);;
    

    BasicGeographicMap* geographicMapInterface = geographicMapCompositeInterface->getGeographicMapInterface()[0];;
    

    BasicGeographicMap* basicGeographicMap = geographicMapInterface;;
    

    DropCellPositionHistory* dropCellPositionHistory = DropCellPositionHistory::getInstance();;
    

    TiledLayerUtil* tiledLayerUtil = TiledLayerUtil::getInstance();;
    

    AllBinaryTiledLayer* tiledLayer = basicGeographicMap->getAllBinaryTiledLayer();;
    

                        if(ownerLayer->getXP() < unitLayer->getXP() && ownerLayer->getX2() > unitLayer->getXP())
                        
                                    {
                                    
    int32_t diff = ownerLayer->getWidth() +1;;
    
this->layerPartialCellPositionsUtil->getAllDXY(basicGeographicMap, ownerLayer,  -diff, 0, partialPositionList);
    

                        if(!dropCellPositionHistory->anyCellPositionWithDrop(partialPositionList))
                        
                                    {
                                    
    int32_t x = unitLayer->getXP() -diff;;
    

    int32_t y = ownerLayer->getYP();;
    
x= tiledLayerUtil->keepOnMapX(tiledLayer, x, ownerLayer->getWidth());
    
y= tiledLayerUtil->keepOnMapY(tiledLayer, y, ownerLayer->getHeight());
    
ownerLayer->setPosition(x, y, ownerLayer->getZP());
    

                                    }
                                
this->layerPartialCellPositionsUtil->getAllDXY(basicGeographicMap, unitLayer, diff, 0, partialPositionList);
    

                        if(!dropCellPositionHistory->anyCellPositionWithDrop(partialPositionList))
                        
                                    {
                                    
    int32_t x = unitLayer->getXP() +diff;;
    

    int32_t y = unitLayer->getYP();;
    
x= tiledLayerUtil->keepOnMapX(tiledLayer, x, unitLayer->getWidth());
    
y= tiledLayerUtil->keepOnMapY(tiledLayer, y, unitLayer->getHeight());
    
unitLayer->setPosition(x, y, unitLayer->getZP());
    

                                    }
                                

                                    }
                                

                        if(ownerLayer->getYP() < unitLayer->getYP() && ownerLayer->getY2() > unitLayer->getYP())
                        
                                    {
                                    
    int32_t diff = ownerLayer->getHeight() +1;;
    
this->layerPartialCellPositionsUtil->getAllDXY(basicGeographicMap, ownerLayer, 0,  -diff, partialPositionList);
    

                        if(!dropCellPositionHistory->anyCellPositionWithDrop(partialPositionList))
                        
                                    {
                                    
    int32_t x = ownerLayer->getXP();;
    

    int32_t y = unitLayer->getYP() -diff;;
    
x= tiledLayerUtil->keepOnMapX(tiledLayer, x, ownerLayer->getWidth());
    
y= tiledLayerUtil->keepOnMapY(tiledLayer, y, ownerLayer->getHeight());
    
ownerLayer->setPosition(x, y, ownerLayer->getZP());
    

                                    }
                                
this->layerPartialCellPositionsUtil->getAllDXY(basicGeographicMap, unitLayer, 0, diff, partialPositionList);
    

                        if(!dropCellPositionHistory->anyCellPositionWithDrop(partialPositionList))
                        
                                    {
                                    
    int32_t x = unitLayer->getXP();;
    

    int32_t y = unitLayer->getYP() +diff;;
    
x= tiledLayerUtil->keepOnMapX(tiledLayer, x, unitLayer->getWidth());
    
y= tiledLayerUtil->keepOnMapY(tiledLayer, y, unitLayer->getHeight());
    
unitLayer->setPosition(x, y, unitLayer->getZP());
    

                                    }
                                

                                    }
                                
}


};

            

