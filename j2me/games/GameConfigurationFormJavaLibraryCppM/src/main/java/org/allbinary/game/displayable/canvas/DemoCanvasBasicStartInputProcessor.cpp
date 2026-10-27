
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOCANVASBASICSTARTINPUTPROCESSOR_CPP
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOCANVASBASICSTARTINPUTPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/displayable/canvas/DemoCanvasBasicStartInputProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/NullCanvas.h>

      
#include <org/allbinary/canvas/RunnableCanvas.h>

      
#include <org/allbinary/game/commands/GameCommandsFactory.h>

      
#include <org/allbinary/game/input/GameInputStrings.h>

      
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/canvas/BasicMenuInputProcessor.h"


DemoCanvasBasicStartInputProcessor::DemoCanvasBasicStartInputProcessor(BasicArrayList* gameKeyEventList, RunnableCanvas* gameCanvas) : BasicMenuInputProcessor(gameKeyEventList,  -1, gameCanvas){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    auto DemoCanvasBasicStartInputProcessor::processInputList() -> int32_t{

    BasicArrayList* list = this->getGameKeyEventList();;
    

    int32_t size = list->size();;
    

    GameKeyEvent* gameKeyEvent;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
gameKeyEvent= dynamic_cast<GameKeyEvent*>(list->objectArray[index]);
    
this->logUtil->putF((new StringMaker())->append("Start GameKey: ")->append(StringUtil::getInstance()->toString(gameKeyEvent))->toString(), this, GameInputStrings::getInstance()->PROCESS_INPUT);
    
}

this->getCanvas()->getCustomCommandListener()->commandAction(GameCommandsFactory::getInstance()->START_COMMAND, NullCanvas::NULL_CANVAS);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return size;
    
}




        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOCANVASBASICSTARTINPUTPROCESSOR_CPP
