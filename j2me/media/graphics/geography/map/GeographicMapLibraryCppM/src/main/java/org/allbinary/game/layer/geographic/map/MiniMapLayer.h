
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_GEOGRAPHIC_MAP_MINIMAPLAYER_H
        #define ORG_ALLBINARY_GAME_LAYER_GEOGRAPHIC_MAP_MINIMAPLAYER_H

            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/animation/vector/CircleFilledAnimation.h>

      
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/color/ColorCompositeInterface.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/event/GeographicMapCellPositionEvent.h>

      
#include <org/allbinary/media/graphics/geography/map/event/GeographicMapCellPositionEventHandler.h>

      
#include <org/allbinary/media/graphics/geography/map/event/GeographicMapCellPositionEventListenerInterface.h>

      
#include <org/allbinary/view/ViewPositionBase.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MiniMapLayer: public AllBinaryLayer, public GeographicMapCellPositionEventListenerInterface {

    protected: AllBinaryTiledLayer allBinaryTiledLayer;

    private: BasicGeographicMapCellPositionFactory geographicMapCellPositionFactory;

    private: BasicArrayList list;

    private: BasicArrayList basicColorList;

    private: BasicArrayList positionList;

    private: CircleFilledAnimation animationInterface;

public: MiniMapLayer(BasicGeographicMap geographicMapInterface, ViewPositionBase viewPosition);

                //@Throws(Exception.constructor)
            
    protected: void init();

    public: void onEvent(AllBinaryEventObject eventObject);

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void onRemoveGeographicMapCellPositionEvent(GeographicMapCellPositionEvent geographicMapCellPositionEvent);

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void onGeographicMapCellPositionEvent(GeographicMapCellPositionEvent geographicMapCellPositionEvent);

    public: void paintDots(Graphics graphics);

    public: void paint(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_GEOGRAPHIC_MAP_MINIMAPLAYER_H
