
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECANVASINPUTPROCESSOR_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECANVASINPUTPROCESSOR_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/game/input/GameKey.h>

      
#include <org/allbinary/game/input/GameKeyEventSourceInterface.h>

      
#include <org/allbinary/game/input/GameKeyFactory.h>

      
#include <org/allbinary/game/input/InputProcessor.h>

      
#include <org/allbinary/game/input/PlatformInputMappingFactory.h>

      
#include <org/allbinary/game/input/event/DownGameKeyEventHandler.h>

      
#include <org/allbinary/game/input/event/DownKeyEventHandler.h>

      
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/game/input/event/GameKeyEventFactory.h>

      
#include <org/allbinary/game/input/event/UpGameKeyEventHandler.h>

      
#include <org/allbinary/game/input/mapping/InputToGameKeyMapping.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"

class GameCanvasInputProcessor: public InputProcessor {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: AllBinaryGameCanvas* allBinaryGameCanvas;

    private: DownGameKeyEventHandler* downGameKeyEventHandler = DownGameKeyEventHandler::getInstance();

    private: UpGameKeyEventHandler* upGameKeyEventHandler = UpGameKeyEventHandler::getInstance();

    private: DownKeyEventHandler* downKeyEventHandler = DownKeyEventHandler::getInstance();

    private: SmallIntegerSingletonFactory* smallIntegerSingletonFactory = SmallIntegerSingletonFactory::getInstance();

    private: InputToGameKeyMapping* inputToGameKeyMapping = PlatformInputMappingFactory::getInstance()->getPersistentInputMappingInstance()->getInputMapping();

public: GameCanvasInputProcessor(AllBinaryGameCanvas* allBinaryGameCanvas);

    private: GameKey* NONE = GameKeyFactory::getInstance()->NONE;

    private: GameKeyEventFactory* gameKeyEventFactory = GameKeyEventFactory::getInstance();

    public: void keyPressedByDevice(int32_t keyCode, int32_t deviceId);

    public: void keyReleasedByDevice(Canvas* canvas, int32_t keyCode, int32_t deviceId);

    private: void removeGameKeyEvent(Canvas* canvas, int32_t keyCode, int32_t deviceId, bool repeated);

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECANVASINPUTPROCESSOR_H
