
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
        



            #include "../../../../java/lang/Exception.h"
        
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
        #include "LinePathAnimation.h"
#include "PathFindingLayerInterface.h"
#include "AllBinaryGameLayerManager.h"
#include "WaypointBehaviorBase.h"
#include "AllBinaryTiledLayer.h"

class PathAnimation: public Animation {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: LinePathAnimation linePathAnimation;

    private: PathFindingLayerInterface pathFindingLayer;

    protected: AllBinaryGameLayerManager allBinaryGameLayerManagerP = AllBinaryGameLayerManager::getNullInstance();

public: PathAnimation(PathFindingLayerInterface pathFindingLayer, LinePathAnimation linePathAnimation){
this->pathFindingLayer= pathFindingLayer;
    
this->linePathAnimation= linePathAnimation;
    
}


                //@Throws(Exception.constructor)
            
    public: void setAllBinaryGameLayerManager(AllBinaryGameLayerManager allBinaryGameLayerManager){
this->allBinaryGameLayerManagerP= allBinaryGameLayerManager;
    
}


                //@Throws(Exception.constructor)
            
    public: void nextFrame(){
}


    private: const BasicColor startColor = BasicColorFactory::getInstance().RED;

    private: const BasicColor middleColor = BasicColorFactory::getInstance().BLUE;

    private: const BasicColor endColor = BasicColorFactory::getInstance().GREEN;

    public: void paintXY(Graphics graphics, int32_t x, int32_t y){

        try {
            
    WaypointBehaviorBase waypointBehaviorBase = this->pathFindingLayer.getWaypointBehavior();;
    

                        if(waypointBehaviorBase != 
                                    nullptr
                                )
                        
                                    {
                                    
    GeographicMapCellHistory geographicMapCellHistory = waypointBehaviorBase.getCurrentGeographicMapCellHistory();;
    

    BasicArrayList list = geographicMapCellHistory.getTracked();;
    

    int32_t size = list.size();;
    

                        if(size > 0)
                        
                                    {
                                    
    GeographicMapCompositeInterface geographicMapCompositeInterface = this->allBinaryGameLayerManagerP as GeographicMapCompositeInterface;;
    

    BasicGeographicMap geographicMapInterface = geographicMapCompositeInterface.getGeographicMapInterface()[0];;
    

    AllBinaryTiledLayer tiledLayer = geographicMapInterface.getAllBinaryTiledLayer();;
    

    GeographicMapCellPosition geographicMapCellPosition = SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;;
    

    GPoint nextPoint;;
    

    GPoint point;;
    

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
                        if(geographicMapCellHistory.isVisited(geographicMapCellPosition))
                        
                                    {
                                    this->setBasicColorP(this->endColor);
    
this->basicSetColorUtil.setBasicColorP3(graphics, this->getBasicColorP(), this->getColor());
    

                                    }
                                
                        else {
                            this->setBasicColorP(this->middleColor);
    
this->basicSetColorUtil.setBasicColorP3(graphics, this->getBasicColorP(), this->getColor());
    

                        }
                            
geographicMapCellPosition= list.get(index) as GeographicMapCellPosition;
    
point= geographicMapCellPosition.getMidPoint();
    
geographicMapCellPosition= list.get(index +1) as GeographicMapCellPosition;
    
nextPoint= geographicMapCellPosition.getMidPoint();
    
this->linePathAnimation.paint(graphics, point, nextPoint, tiledLayer);
    
}


                                    }
                                

                                    }
                                

                //: 
} catch(e) 
            {
this->logUtil.putF("Cleared Target", this, CanvasStrings::getInstance().PAINT);
    
}

}


};

            

