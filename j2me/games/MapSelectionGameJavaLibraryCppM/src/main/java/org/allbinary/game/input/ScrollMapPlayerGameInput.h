
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

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
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
        #include "org/allbinary/game/input/PlayerGameInput.h"
#include "org/allbinary/game/input/InputFactory.h"
#include "org/allbinary/game/input/GameInputProcessor.h"
#include "org/allbinary/game/input/ScrollMapUpGameInputProcessor.h"
#include "org/allbinary/game/input/ScrollMapDownGameInputProcessor.h"
#include "org/allbinary/game/input/ScrollMapRightGameInputProcessor.h"
#include "org/allbinary/game/input/ScrollMapLeftGameInputProcessor.h"
#include "org/allbinary/game/input/GameInputProcessorUtil.h"

class ScrollMapPlayerGameInput: public PlayerGameInput {

    protected: const std::vector<GameInputProcessor*> inputProcessorArray = std::vector<GameInputProcessor*>(InputFactory::getInstance()->MAX);

    private: const int32_t border = 150;

    private: BasicArrayList* inputList;

    protected: const bool isSingleKeyProcessing = Features::getInstance()->isFeature(InputFeatureFactory::getInstance()->SINGLE_KEY_REPEAT_PRESS) || Features::getInstance()->isFeature(InputFeatureFactory::getInstance()->SINGLE_KEY_PRESS);

    private: BasicGeographicMap* geographicMapInterface;

    private: int32_t maxBottom= 0;

    private: int32_t maxRight= 0;

public: ScrollMapPlayerGameInput(BasicGeographicMap* geographicMapInterface, BasicArrayList* list, int32_t playerInputId);

    private: ScrollMapEvent* scrollMapEvent = new ScrollMapEvent(this);

                //@Throws(Exception.constructor)
            
    private: void move(int32_t dx, int32_t dy);

    public: void init();

                //@Throws(Exception.constructor)
            
    public: void scrollMiddleX();

                //@Throws(Exception.constructor)
            
    public: void scrollY(int32_t anchor);

                //@Throws(Exception.constructor)
            
    protected: void up();

                //@Throws(Exception.constructor)
            
    protected: void down();

                //@Throws(Exception.constructor)
            
    protected: void right();

                //@Throws(Exception.constructor)
            
    protected: void left();

    public: void initInputProcessors();

                //@Throws(Exception.constructor)
            
    public: void processInputKey(int32_t key);

                //@Throws(Exception.constructor)
            
    public: void processInput(AllBinaryLayerManager* layerManager);

    private: int32_t getSpecialHeight();

    private: int32_t getSpecialWidth();

    public: bool keepOnMapMaxY(int32_t newY);

    public: bool keepOnMapMinY(int32_t newY);

    public: bool keepOnMapMaxX(int32_t newX);

    public: bool keepOnMapMinX(int32_t newX);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_SCROLLMAPPLAYERGAMEINPUT_H
