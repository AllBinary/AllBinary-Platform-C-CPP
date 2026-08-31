
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONINPUT_H
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONINPUT_H

            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/input/GameKey.h>

      
#include <org/allbinary/game/input/GameKeyEventSourceInterface.h>

      
#include <org/allbinary/game/input/Input.h>

      
#include <org/allbinary/game/input/InputFactory.h>

      
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/game/input/event/GameKeyEventFactory.h>

      
#include <org/allbinary/game/input/mapping/InputToGameKeyMapping.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TouchButtonInput: public Input: public GameKeyEventSourceInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const gameKeyEventFactory: GameKeyEventFactory = GameKeyEventFactory.getInstance()!;

    private: const TOUCH_BUTTON_SOURCE_ID: int32_t = this.gameKeyEventFactory!.TOUCH_BUTTON_SOURCE_ID;

    private: gameKeyEvent: GameKeyEvent = GameKeyEvent.NONE;

public constructor (int32_t id, string name);

    public update(InputToGameKeyMapping inputToGameKeyMapping);

    public int32_t getSourceId();

    public GameKeyEvent getGameKeyEvent();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONINPUT_H
