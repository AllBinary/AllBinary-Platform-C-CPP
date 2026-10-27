
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Graphics;
class StringUtil;
class BasicArrayList;
class BasicArrayListD;
class ForcedLogUtil;
class CircleFilledAnimation;
class AllBinaryTiledLayer;
class GPoint;
class PointFactory;
class Rectangle;
class BasicColor;
class BasicColorFactory;
class ColorCompositeInterface;
#include <org/allbinary/layer/AllBinaryLayer.h>
class AllBinaryEventObject;
class EventStrings;
class BasicGeographicMap;
class BasicGeographicMapCellPositionFactory;
class GeographicMapCellPosition;
class GeographicMapCellPositionEvent;
class GeographicMapCellPositionEventHandler;
#include <org/allbinary/media/graphics/geography/map/event/GeographicMapCellPositionEventListenerInterface.h>
class ViewPositionBase;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MiniMapLayer: public AllBinaryLayer, public GeographicMapCellPositionEventListenerInterface {

    /*protected*/ public: AllBinaryTiledLayer* allBinaryTiledLayer;

    private: BasicGeographicMapCellPositionFactory* geographicMapCellPositionFactory;

    private: BasicArrayList* list;

    private: BasicArrayList* basicColorList;

    private: BasicArrayList* positionList;

    private: CircleFilledAnimation* animationInterface;

public: MiniMapLayer(BasicGeographicMap* geographicMapInterface, ViewPositionBase* viewPosition);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void init();

    public: void onEvent(AllBinaryEventObject* eventObject);

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void onRemoveGeographicMapCellPositionEvent(GeographicMapCellPositionEvent* geographicMapCellPositionEvent);

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void onGeographicMapCellPositionEvent(GeographicMapCellPositionEvent* geographicMapCellPositionEvent);

    public: void paintDots(Graphics* graphics);

    public: void paint(Graphics* graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_GEOGRAPHIC_MAP_MINIMAPLAYER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_GEOGRAPHIC_MAP_MINIMAPLAYER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_GEOGRAPHIC_MAP_MINIMAPLAYER_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/ForcedLogUtil.h>)
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>
#endif
#if __has_include(<org/allbinary/animation/vector/CircleFilledAnimation.h>)
#include <org/allbinary/animation/vector/CircleFilledAnimation.h>
#endif
#if __has_include(<org/allbinary/game/layer/AllBinaryTiledLayer.h>)
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>
#endif
#if __has_include(<org/allbinary/graphics/GPoint.h>)
#include <org/allbinary/graphics/GPoint.h>
#endif
#if __has_include(<org/allbinary/graphics/PointFactory.h>)
#include <org/allbinary/graphics/PointFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/Rectangle.h>)
#include <org/allbinary/graphics/Rectangle.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/color/ColorCompositeInterface.h>)
#include <org/allbinary/graphics/color/ColorCompositeInterface.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/EventStrings.h>)
#include <org/allbinary/logic/util/event/EventStrings.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>)
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h>)
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/event/GeographicMapCellPositionEvent.h>)
#include <org/allbinary/media/graphics/geography/map/event/GeographicMapCellPositionEvent.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/event/GeographicMapCellPositionEventHandler.h>)
#include <org/allbinary/media/graphics/geography/map/event/GeographicMapCellPositionEventHandler.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/event/GeographicMapCellPositionEventListenerInterface.h>)
#include <org/allbinary/media/graphics/geography/map/event/GeographicMapCellPositionEventListenerInterface.h>
#endif
#if __has_include(<org/allbinary/view/ViewPositionBase.h>)
#include <org/allbinary/view/ViewPositionBase.h>
#endif

        #endif
    
