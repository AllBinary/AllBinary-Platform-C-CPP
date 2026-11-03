
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_FORMINPUTPROCESSOR_CPP
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_FORMINPUTPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/displayable/canvas/FormInputProcessor.h"
        

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


FormInputProcessor::FormInputProcessor(AllBinaryGameCanvas* allBinaryGameCanvas) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), gameKeyEventFactory(GameKeyEventFactory::getInstance()), downKeyEventHandler(DownKeyEventHandler::getInstance()), upGameKeyEventHandler(UpGameKeyEventHandler::getInstance()), inputFactory(InputFactory::getInstance()), platformKeyFactory(PlatformKeyFactory::getInstance()){
this->allBinaryGameCanvas= allBinaryGameCanvas;
    
}


    auto FormInputProcessor::keyPressedByDevice(int32_t keyCode, int32_t deviceId) -> void{

        try {
            PreLogUtil::put((new StringMaker())->append(this->inputFactory->KEY_CODE_LABEL)->appendint(keyCode)->append(CommonSeps::getInstance()->SPACE)->append(this->inputFactory->DEVICE_ID_LABEL)->appendint(deviceId)->toString(), this, this->gameInputStrings->KEY_PRESSED);
    

    Input* input = this->inputFactory->getInstanceById(keyCode);;
    

    GameKeyEvent* gameKeyEvent = this->gameKeyEventFactory->getInstanceForInput(this->allBinaryGameCanvas, input);;
    
this->downKeyEventHandler->fireEventForGameKeyEvent(gameKeyEvent);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->gameInputStrings->ADD_KEY_EVENT, &e);
    
}

}


    auto FormInputProcessor::keyReleasedByDevice(Canvas* canvas, int32_t keyCode, int32_t deviceId) -> void{

        try {
            
    Input* input = this->inputFactory->getInstanceById(keyCode);;
    

                        if(this->platformKeyFactory->isEnter(input))
                        
                                    {
                                    PreLogUtil::put((new StringMaker())->append(this->inputFactory->KEY_CODE_LABEL)->appendint(keyCode)->append(CommonSeps::getInstance()->SPACE)->append(this->inputFactory->DEVICE_ID_LABEL)->appendint(deviceId)->toString(), this, this->gameInputStrings->KEY_RELEASED);
    

    GameKey* gameKey = GameKeyFactory::getInstance()->KEY_NUM0;;
    

    GameKeyEventSourceInterface* gameKeyEventSourceInterface = dynamic_cast<GameKeyEventSourceInterface*>(canvas);;
    

    GameKeyEvent* gameKeyEvent = this->gameKeyEventFactory->getInstanceForInput(gameKeyEventSourceInterface, gameKey);;
    
this->upGameKeyEventHandler->fireEvent(gameKeyEvent);
    
this->upGameKeyEventHandler->getInstanceForDevice(deviceId)->fireEvent(gameKeyEvent);
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->gameInputStrings->ADD_KEY_EVENT, &e);
    
}

}




        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_FORMINPUTPROCESSOR_CPP
