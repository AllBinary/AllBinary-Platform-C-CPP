
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_FORMINPUTPROCESSOR_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_FORMINPUTPROCESSOR_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/game/input/GameKey.h>

      
#include <org/allbinary/game/input/GameKeyEventSourceInterface.h>

      
#include <org/allbinary/game/input/GameKeyFactory.h>

      
#include <org/allbinary/game/input/Input.h>

      
#include <org/allbinary/game/input/InputFactory.h>

      
#include <org/allbinary/game/input/InputProcessor.h>

      
#include <org/allbinary/game/input/PlatformKeyFactory.h>

      
#include <org/allbinary/game/input/event/DownKeyEventHandler.h>

      
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/game/input/event/GameKeyEventFactory.h>

      
#include <org/allbinary/game/input/event/UpGameKeyEventHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"

class FormInputProcessor: public InputProcessor {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: GameKeyEventFactory* gameKeyEventFactory = GameKeyEventFactory::getInstance();

    private: DownKeyEventHandler* downKeyEventHandler = DownKeyEventHandler::getInstance();

    private: UpGameKeyEventHandler* upGameKeyEventHandler = UpGameKeyEventHandler::getInstance();

    private: InputFactory* inputFactory = InputFactory::getInstance();

    private: PlatformKeyFactory* platformKeyFactory = PlatformKeyFactory::getInstance();

    private: AllBinaryGameCanvas* allBinaryGameCanvas;

public: FormInputProcessor(AllBinaryGameCanvas* allBinaryGameCanvas);

    public: void keyPressedByDevice(int32_t keyCode, int32_t deviceId);

    public: void keyReleasedByDevice(Canvas* canvas, int32_t keyCode, int32_t deviceId);

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_FORMINPUTPROCESSOR_H
