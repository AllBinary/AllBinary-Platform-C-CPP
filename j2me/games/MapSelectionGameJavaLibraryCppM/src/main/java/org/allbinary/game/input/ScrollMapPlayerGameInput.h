
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_SCROLLMAPPLAYERGAMEINPUT_H
        #define ORG_ALLBINARY_GAME_INPUT_SCROLLMAPPLAYERGAMEINPUT_H

            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/InputFeatureFactory.h>

      
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/layer/event/ScrollMapEvent.h>

      
#include <org/allbinary/layer/event/ScrollMapEventHandler.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PlayerGameInput.h"
#include "InputFactory.h"
#include "GameInputProcessor.h"
#include "ScrollMapUpGameInputProcessor.h"
#include "ScrollMapDownGameInputProcessor.h"
#include "ScrollMapRightGameInputProcessor.h"
#include "ScrollMapLeftGameInputProcessor.h"
#include "GameInputProcessorUtil.h"

class ScrollMapPlayerGameInput: public PlayerGameInput {
        

    const inputProcessorArray: std::vector<GameInputProcessor> = new Array(InputFactory.getInstance()!.MAX);

    private: const border: int32_t = 150;

    private: const inputList: BasicArrayList;

    const isSingleKeyProcessing: bool = Features.getInstance()!.isFeature(InputFeatureFactory.getInstance()!.SINGLE_KEY_REPEAT_PRESS) || Features.getInstance()!.isFeature(InputFeatureFactory.getInstance()!.SINGLE_KEY_PRESS);

    private: const geographicMapInterface: BasicGeographicMap;

    private: maxBottom: int32_t= 0;

    private: maxRight: int32_t= 0;

public constructor (BasicGeographicMap geographicMapInterface, BasicArrayList list, int32_t playerInputId);

    private: const scrollMapEvent: ScrollMapEvent = new ScrollMapEvent(this);

                //@Throws(Exception.constructor)
            
    move(int32_t dx, int32_t dy);

    public init();

                //@Throws(Exception.constructor)
            
    public scrollMiddleX();

                //@Throws(Exception.constructor)
            
    public scrollY(int32_t anchor);

                //@Throws(Exception.constructor)
            
    up();

                //@Throws(Exception.constructor)
            
    down();

                //@Throws(Exception.constructor)
            
    right();

                //@Throws(Exception.constructor)
            
    left();

    public initInputProcessors();

                //@Throws(Exception.constructor)
            
    public processInputKey(int32_t key);

                //@Throws(Exception.constructor)
            
    public processInput(AllBinaryLayerManager layerManager);

    int32_t getSpecialHeight();

    int32_t getSpecialWidth();

    public bool keepOnMapMaxY(int32_t newY);

    public bool keepOnMapMinY(int32_t newY);

    public bool keepOnMapMaxX(int32_t newX);

    public bool keepOnMapMinX(int32_t newX);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_SCROLLMAPPLAYERGAMEINPUT_H
