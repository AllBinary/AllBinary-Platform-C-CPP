
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
        



            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
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

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AllBinaryGameCanvas.h"

class FormInputProcessor: public InputProcessor {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const gameKeyEventFactory: GameKeyEventFactory = GameKeyEventFactory.getInstance()!;

    private: const downKeyEventHandler: DownKeyEventHandler = DownKeyEventHandler.getInstance()!;

    private: const upGameKeyEventHandler: UpGameKeyEventHandler = UpGameKeyEventHandler.getInstance()!;

    private: const inputFactory: InputFactory = InputFactory.getInstance()!;

    private: const platformKeyFactory: PlatformKeyFactory = PlatformKeyFactory.getInstance()!;

    private: const allBinaryGameCanvas: AllBinaryGameCanvas;

public constructor (AllBinaryGameCanvas allBinaryGameCanvas){

            super();
        this.allBinaryGameCanvas= allBinaryGameCanvas;
    
}


    public keyPressedByDevice(int32_t keyCode, int32_t deviceId){

        try {
            PreLogUtil.put(new StringMaker().append(this.inputFactory!.KEY_CODE_LABEL)!.appendint(keyCode)!.append(CommonSeps.getInstance()!.SPACE)!.append(this.inputFactory!.DEVICE_ID_LABEL)!.appendint(deviceId)!.toString(), this, this.gameInputStrings!.KEY_PRESSED);
    

    input: Input = this.inputFactory!.getInstanceById(keyCode)!;;
    

    gameKeyEvent: GameKeyEvent = this.gameKeyEventFactory!.getInstanceForInput(this.allBinaryGameCanvas, input)!;;
    
this.downKeyEventHandler!.fireEventForGameKeyEvent(gameKeyEvent);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.gameInputStrings!.ADD_KEY_EVENT, e);
    
}

}


    public keyReleasedByDevice(Canvas canvas, int32_t keyCode, int32_t deviceId){

        try {
            
    input: Input = this.inputFactory!.getInstanceById(keyCode)!;;
    

                        if(this.platformKeyFactory!.isEnter(input))
                        
                                    {
                                    PreLogUtil.put(new StringMaker().append(this.inputFactory!.KEY_CODE_LABEL)!.appendint(keyCode)!.append(CommonSeps.getInstance()!.SPACE)!.append(this.inputFactory!.DEVICE_ID_LABEL)!.appendint(deviceId)!.toString(), this, this.gameInputStrings!.KEY_RELEASED);
    

    gameKey: GameKey = GameKeyFactory.getInstance()!.KEY_NUM0;;
    

    gameKeyEventSourceInterface: GameKeyEventSourceInterface = canvas as unknown as GameKeyEventSourceInterface;;
    

    gameKeyEvent: GameKeyEvent = this.gameKeyEventFactory!.getInstanceForInput(gameKeyEventSourceInterface, gameKey)!;;
    
this.upGameKeyEventHandler!.fireEvent(gameKeyEvent);
    
this.upGameKeyEventHandler!.getInstanceForDevice(deviceId)!.fireEvent(gameKeyEvent);
    

                                    }
                                

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.gameInputStrings!.ADD_KEY_EVENT, e);
    
}

}


};

            

