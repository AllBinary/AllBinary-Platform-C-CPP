
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOCANVASBASICSTARTINPUTPROCESSOR_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOCANVASBASICSTARTINPUTPROCESSOR_H

            #include "../../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/NullCanvas.h>

      
#include <org/allbinary/canvas/RunnableCanvas.h>

      
#include <org/allbinary/game/commands/GameCommandsFactory.h>

      
#include <org/allbinary/game/input/GameInputStrings.h>

      
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicMenuInputProcessor.h"

class DemoCanvasBasicStartInputProcessor: public BasicMenuInputProcessor {

public: DemoCanvasBasicStartInputProcessor(BasicArrayList gameKeyEventList, RunnableCanvas gameCanvas);

                //@Throws(Exception.constructor)
            
    public: int32_t processInputList();

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOCANVASBASICSTARTINPUTPROCESSOR_H
