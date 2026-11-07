
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECANVASINPUTPROCESSOR_CPP
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECANVASINPUTPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/displayable/canvas/GameCanvasInputProcessor.h"
        

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


GameCanvasInputProcessor::GameCanvasInputProcessor(AllBinaryGameCanvas* allBinaryGameCanvas) : logUtil(LogUtil::getInstance()), downGameKeyEventHandler(DownGameKeyEventHandler::getInstance()), upGameKeyEventHandler(UpGameKeyEventHandler::getInstance()), downKeyEventHandler(DownKeyEventHandler::getInstance()), smallIntegerSingletonFactory(SmallIntegerSingletonFactory::getInstance()), inputToGameKeyMapping(PlatformInputMappingFactory::getInstance()->getPersistentInputMappingInstance()->getInputMapping()), NONE(GameKeyFactory::getInstance()->NONE), gameKeyEventFactory(GameKeyEventFactory::getInstance()){
this->allBinaryGameCanvas= allBinaryGameCanvas;
    
this->inputToGameKeyMapping->init(this->allBinaryGameCanvas);
    
}


    auto GameCanvasInputProcessor::keyPressedByDevice(int32_t keyCode, int32_t deviceId) -> void{

        try {
            
    GameKey* gameKey = this->inputToGameKeyMapping->getInstanceForCanvas(this->allBinaryGameCanvas, keyCode);;
    

                        if(gameKey != this->NONE)
                        
                                    {
                                    
    GameKeyEvent* gameKeyEvent = this->gameKeyEventFactory->getInstanceForInput(this->allBinaryGameCanvas, gameKey);;
    
this->downGameKeyEventHandler->fireEvent(gameKeyEvent);
    
this->downGameKeyEventHandler->getInstanceForDevice(deviceId)->fireEvent(gameKeyEvent);
    

                                    }
                                
                        else {
                            this->logUtil->putF(JavaString::valueOf((new StringMaker())->append(this->gameInputStrings->NO_KEY)->appendint(keyCode)), this, this->gameInputStrings->ADD_KEY_EVENT);
    

                        }
                            

    int32_t keyCodeAsInteger = this->smallIntegerSingletonFactory->getAtNoThrow(keyCode);;
    
this->downKeyEventHandler->fireEventI(keyCodeAsInteger);
    
this->downKeyEventHandler->getInstanceForDevice(deviceId)->fireEventI(keyCodeAsInteger);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put("Key Event Error", this, this->gameInputStrings->ADD_KEY_EVENT, &e);
    
}

}


    auto GameCanvasInputProcessor::keyReleasedByDevice(Canvas* canvas, int32_t keyCode, int32_t deviceId) -> void{
this->removeGameKeyEvent(canvas, keyCode, deviceId, false);
    
}


    auto GameCanvasInputProcessor::removeGameKeyEvent(Canvas* canvas, int32_t keyCode, int32_t deviceId, bool repeated) -> void{

        try {
            
    GameKey* gameKey = this->inputToGameKeyMapping->getInstanceForCanvas(canvas, keyCode);;
    

                        if(gameKey != this->NONE)
                        
                                    {
                                    
    GameKeyEventSourceInterface* gameKeyEventSourceInterface = dynamic_cast<GameKeyEventSourceInterface*>(canvas);;
    

    GameKeyEvent* gameKeyEvent = this->gameKeyEventFactory->getInstanceForInput(gameKeyEventSourceInterface, gameKey);;
    
this->upGameKeyEventHandler->fireEvent(gameKeyEvent);
    
this->upGameKeyEventHandler->getInstanceForDevice(deviceId)->fireEvent(gameKeyEvent);
    

                                    }
                                
                        else {
                            this->logUtil->putF(JavaString::valueOf((new StringMaker())->append(this->gameInputStrings->NO_KEY)->appendint(keyCode)), this, this->gameInputStrings->REMOVE_KEY_EVENT);
    

                        }
                            

                //: 
} catch(Exception& e) 
            {
this->logUtil->put("Key Event Error", this, this->gameInputStrings->REMOVE_KEY_EVENT, &e);
    
}

}




        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECANVASINPUTPROCESSOR_CPP
