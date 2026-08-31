
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

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/game/SimpleTiledLayer.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/layer/RTSLayerEvent.h>

      
#include <org/allbinary/game/layer/building/event/BuildingEventListenerInterface.h>

      
#include <org/allbinary/game/layer/building/event/LocalPlayerBuildingEventHandler.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/graphics/CellPosition.h>

      
#include <org/allbinary/layer/event/ScrollMapEvent.h>

      
#include <org/allbinary/layer/event/ScrollMapEventHandler.h>

      
#include <org/allbinary/layer/event/ScrollMapEventListenerInterface.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class VisibleCellPositionsSingleton
            : public Object
        : public BuildingEventListenerInterface, public ScrollMapEventListenerInterface {
        

    private: static const instance: VisibleCellPositionsSingleton = new VisibleCellPositionsSingleton();

    public static VisibleCellPositionsSingleton getInstance();

    private: stationaryVisibleCellPositions: std::vector<std::vector<int16_t>> = NullUtil.getInstance()!.NULL_SHORT_ARRAY_ARRAY;

    private: visibleCellPositions: std::vector<std::vector<int16_t>> = NullUtil.getInstance()!.NULL_SHORT_ARRAY_ARRAY;

    private: currentlyVisibleCellPositions: std::vector<std::vector<int16_t>> = NullUtil.getInstance()!.NULL_SHORT_ARRAY_ARRAY;

    public const ALL_VISIBLE_TILEDLAYER: SimpleTiledLayer = new SimpleTiledLayer(0, 0, 0, 0);

    private: simpleTiledLayer: SimpleTiledLayer = this.ALL_VISIBLE_TILEDLAYER;

    private: paintSimpleTiledLayer: SimpleTiledLayer = this.ALL_VISIBLE_TILEDLAYER;

    private: currentIndex: int32_t= 0;

private constructor ();

    public init(SimpleTiledLayer simpleTiledLayer);

    public onEvent(AllBinaryEventObject eventObject);

                //@Throws(Exception.constructor)
            
    public onBuildingEvent(RTSLayerEvent event);

                //@Throws(Exception.constructor)
            
    public onMoveEvent(ScrollMapEvent scrollMapEvent);

    public addStationaryCellPositions(BasicArrayList list);

    public removeStationaryCellPositions(BasicArrayList list);

    public update();

    public bool shouldProcess();

    public addCellPositions(BasicArrayList list);

    public bool isVisible(CellPosition cellPosition);

    public move(int32_t dx, int32_t dy);

    public paint(Graphics graphics);

    setSimpleTiledLayer(SimpleTiledLayer simpleTiledLayer);

    public SimpleTiledLayer getSimpleTiledLayer();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_FORM_VISIBLECELLPOSITIONSSINGLETON_H
