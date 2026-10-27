
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2003 AllBinary 
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

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/displayable/CanvasStrings.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h>

      
#include <org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/LinePathAnimation.h"
#include "org/allbinary/game/layer/PathFindingLayerInterface.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#include "org/allbinary/game/layer/WaypointBehaviorBase.h"
#include "org/allbinary/game/layer/AllBinaryTiledLayer.h"

class PathAnimation: public Animation {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: LinePathAnimation* linePathAnimation;

    private: PathFindingLayerInterface* pathFindingLayer;

    protected: AllBinaryGameLayerManager* allBinaryGameLayerManagerP = AllBinaryGameLayerManager::getNullInstance();

public: PathAnimation(PathFindingLayerInterface* pathFindingLayer, LinePathAnimation* linePathAnimation){
this->pathFindingLayer= pathFindingLayer;
    
this->linePathAnimation= linePathAnimation;
    
}


                //@Throws(Exception.constructor)
            
    public: void setAllBinaryGameLayerManager(AllBinaryGameLayerManager* allBinaryGameLayerManager){
this->allBinaryGameLayerManagerP= allBinaryGameLayerManager;
    
}


                //@Throws(Exception.constructor)
            
    public: void nextFrame(){
}


    private: BasicColor* startColor = BasicColorFactory::getInstance()->RED;

    private: BasicColor* middleColor = BasicColorFactory::getInstance()->BLUE;

    private: BasicColor* endColor = BasicColorFactory::getInstance()->GREEN;

    public: void paintXY(Graphics* graphics, int32_t x, int32_t y){

        try {
            
    WaypointBehaviorBase* waypointBehaviorBase = this->pathFindingLayer->getWaypointBehavior();;
    

                        if(waypointBehaviorBase != 
                                    nullptr
                                )
                        
                                    {
                                    
    GeographicMapCellHistory* geographicMapCellHistory = waypointBehaviorBase->getCurrentGeographicMapCellHistory();;
    

    BasicArrayList* list = geographicMapCellHistory->getTracked();;
    

    int32_t size = list->size();;
    

                        if(size > 0)
                        
                                    {
                                    
    GeographicMapCompositeInterface* geographicMapCompositeInterface = dynamic_cast<GeographicMapCompositeInterface*>(this->allBinaryGameLayerManagerP);;
    

    BasicGeographicMap* geographicMapInterface = geographicMapCompositeInterface->getGeographicMapInterface()[0];;
    

    AllBinaryTiledLayer* tiledLayer = geographicMapInterface->getAllBinaryTiledLayer();;
    

    GeographicMapCellPosition* geographicMapCellPosition = SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;;
    

    GPoint* nextPoint;;
    

    GPoint* point;;
    

    int32_t start = size -2;;
    




                        for (
    int32_t index = 0;index < size -1; index++)
        {

                        if(index == start)
                        
                                    {
                                    this->setBasicColorP(this->startColor);
    
this->basicSetColorUtil.setBasicColorP3(graphics, this->getBasicColorP(), this->getColor());
    

                                    }
                                
                             else 
                        if(geographicMapCellHistory->isVisited(geographicMapCellPosition))
                        
                                    {
                                    this->setBasicColorP(this->endColor);
    
this->basicSetColorUtil.setBasicColorP3(graphics, this->getBasicColorP(), this->getColor());
    

                                    }
                                
                        else {
                            this->setBasicColorP(this->middleColor);
    
this->basicSetColorUtil.setBasicColorP3(graphics, this->getBasicColorP(), this->getColor());
    

                        }
                            
geographicMapCellPosition= dynamic_cast<GeographicMapCellPosition*>(list->get(index));
    
point= geographicMapCellPosition->getMidPoint();
    
geographicMapCellPosition= dynamic_cast<GeographicMapCellPosition*>(list->get(index +1));
    
nextPoint= geographicMapCellPosition->getMidPoint();
    
this->linePathAnimation->paint(graphics, point, nextPoint, tiledLayer);
    
}


                                    }
                                

                                    }
                                

                //: 
} catch(Exception& e) 
            {
this->logUtil->putF("Cleared Target", this, CanvasStrings::getInstance()->PAINT);
    
}

}


};

            

