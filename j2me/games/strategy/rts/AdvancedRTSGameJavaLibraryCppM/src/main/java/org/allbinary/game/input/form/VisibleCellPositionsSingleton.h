
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_FORM_VISIBLECELLPOSITIONSSINGLETON_H
        #define ORG_ALLBINARY_GAME_INPUT_FORM_VISIBLECELLPOSITIONSSINGLETON_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class SimpleTiledLayer;
class Graphics;
class RTSLayerEvent;
#include <org/allbinary/game/layer/building/event/BuildingEventListenerInterface.h>
class LocalPlayerBuildingEventHandler;
class BasicArrayList;
class ForcedLogUtil;
class CellPosition;
class ScrollMapEvent;
class ScrollMapEventHandler;
#include <org/allbinary/layer/event/ScrollMapEventListenerInterface.h>
class NullUtil;
class AllBinaryEventObject;
class EventStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class VisibleCellPositionsSingleton
            : public virtual Object
        , public virtual BuildingEventListenerInterface, public virtual ScrollMapEventListenerInterface {

    private: static VisibleCellPositionsSingleton* instance_owner();
    private: static VisibleCellPositionsSingleton* instance;

    public: static VisibleCellPositionsSingleton* getInstance();

    private: std::vector<std::vector<int16_t>> stationaryVisibleCellPositions;

    private: std::vector<std::vector<int16_t>> visibleCellPositions;

    private: std::vector<std::vector<int16_t>> currentlyVisibleCellPositions;

    public: SimpleTiledLayer* ALL_VISIBLE_TILEDLAYER;

    private: SimpleTiledLayer* simpleTiledLayer;

    private: SimpleTiledLayer* paintSimpleTiledLayer;

    private: int32_t currentIndex= 0;

private: VisibleCellPositionsSingleton();

    public: void init(SimpleTiledLayer* simpleTiledLayer);

    public: void onEvent(AllBinaryEventObject* eventObject);

                //@Throws(Exception.constructor)
            
    public: void onBuildingEvent(RTSLayerEvent* event);

                //@Throws(Exception.constructor)
            
    public: void onMoveEvent(ScrollMapEvent* scrollMapEvent);

    public: void addStationaryCellPositions(BasicArrayList* list);

    public: void removeStationaryCellPositions(BasicArrayList* list);

    public: void update();

    public: bool shouldProcess();

    public: void addCellPositions(BasicArrayList* list);

    public: bool isVisible(CellPosition* cellPosition);

    public: void move(int32_t dx, int32_t dy);

    public: void paint(Graphics* graphics);

    private: void setSimpleTiledLayer(SimpleTiledLayer* simpleTiledLayer);

    public: SimpleTiledLayer* getSimpleTiledLayer();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_FORM_VISIBLECELLPOSITIONSSINGLETON_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_FORM_VISIBLECELLPOSITIONSSINGLETON_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_FORM_VISIBLECELLPOSITIONSSINGLETON_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/game/SimpleTiledLayer.h>)
#include <javax/microedition/lcdui/game/SimpleTiledLayer.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/game/layer/RTSLayerEvent.h>)
#include <org/allbinary/game/layer/RTSLayerEvent.h>
#endif
#if __has_include(<org/allbinary/game/layer/building/event/BuildingEventListenerInterface.h>)
#include <org/allbinary/game/layer/building/event/BuildingEventListenerInterface.h>
#endif
#if __has_include(<org/allbinary/game/layer/building/event/LocalPlayerBuildingEventHandler.h>)
#include <org/allbinary/game/layer/building/event/LocalPlayerBuildingEventHandler.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/ForcedLogUtil.h>)
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>
#endif
#if __has_include(<org/allbinary/graphics/CellPosition.h>)
#include <org/allbinary/graphics/CellPosition.h>
#endif
#if __has_include(<org/allbinary/layer/event/ScrollMapEvent.h>)
#include <org/allbinary/layer/event/ScrollMapEvent.h>
#endif
#if __has_include(<org/allbinary/layer/event/ScrollMapEventHandler.h>)
#include <org/allbinary/layer/event/ScrollMapEventHandler.h>
#endif
#if __has_include(<org/allbinary/layer/event/ScrollMapEventListenerInterface.h>)
#include <org/allbinary/layer/event/ScrollMapEventListenerInterface.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/EventStrings.h>)
#include <org/allbinary/logic/util/event/EventStrings.h>
#endif

        #endif
    
