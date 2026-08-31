
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_PATHANIMATION_H
        #define ORG_ALLBINARY_GAME_LAYER_PATHANIMATION_H

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
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const linePathAnimation: LinePathAnimation;

    private: const pathFindingLayer: PathFindingLayerInterface;

    allBinaryGameLayerManagerP: AllBinaryGameLayerManager = AllBinaryGameLayerManager.getNullInstance()!;

public constructor (PathFindingLayerInterface pathFindingLayer, LinePathAnimation linePathAnimation);

                //@Throws(Exception.constructor)
            
    public setAllBinaryGameLayerManager(AllBinaryGameLayerManager allBinaryGameLayerManager);

                //@Throws(Exception.constructor)
            
    public nextFrame();

    private: const startColor: BasicColor = BasicColorFactory.getInstance()!.RED;

    private: const middleColor: BasicColor = BasicColorFactory.getInstance()!.BLUE;

    private: const endColor: BasicColor = BasicColorFactory.getInstance()!.GREEN;

    public paintXY(Graphics graphics, int32_t x, int32_t y);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_PATHANIMATION_H
