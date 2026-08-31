
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

            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Integer.h"
        
#include <jsinterop/annotations/JsType.h>

      
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

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AllBinaryGameCanvas.h"

class GameCanvasInputProcessor: public InputProcessor {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const allBinaryGameCanvas: AllBinaryGameCanvas;

    private: const downGameKeyEventHandler: DownGameKeyEventHandler = DownGameKeyEventHandler.getInstance()!;

    private: const upGameKeyEventHandler: UpGameKeyEventHandler = UpGameKeyEventHandler.getInstance()!;

    private: const downKeyEventHandler: DownKeyEventHandler = DownKeyEventHandler.getInstance()!;

    private: const smallIntegerSingletonFactory: SmallIntegerSingletonFactory = SmallIntegerSingletonFactory.getInstance()!;

    private: const inputToGameKeyMapping: InputToGameKeyMapping = PlatformInputMappingFactory.getInstance()!.getPersistentInputMappingInstance()!.getInputMapping()!;

public constructor (AllBinaryGameCanvas allBinaryGameCanvas);

    private: const NONE: GameKey = GameKeyFactory.getInstance()!.NONE;

    private: const gameKeyEventFactory: GameKeyEventFactory = GameKeyEventFactory.getInstance()!;

    public keyPressedByDevice(int32_t keyCode, int32_t deviceId);

    public keyReleasedByDevice(Canvas canvas, int32_t keyCode, int32_t deviceId);

    removeGameKeyEvent(Canvas canvas, int32_t keyCode, int32_t deviceId, bool repeated);

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECANVASINPUTPROCESSOR_H
