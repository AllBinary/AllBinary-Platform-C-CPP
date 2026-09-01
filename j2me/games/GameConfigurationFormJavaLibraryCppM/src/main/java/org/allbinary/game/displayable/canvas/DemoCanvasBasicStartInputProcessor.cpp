
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

public: DemoCanvasBasicStartInputProcessor(BasicArrayList gameKeyEventList, RunnableCanvas gameCanvas){
            super(gameKeyEventList,  -1, gameCanvas);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    public: int32_t processInputList(){

    BasicArrayList list = this->getGameKeyEventList();;
    

    int32_t size = list.size();;
    

    GameKeyEvent gameKeyEvent;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
gameKeyEvent= list.objectArray[index]! as GameKeyEvent;
    
this->logUtil.putF(StringMaker().append("Start GameKey: ").append(StringUtil::getInstance().toString(gameKeyEvent)).toString(), this, GameInputStrings::getInstance().PROCESS_INPUT);
    
}

this->getCanvas().getCustomCommandListener().commandAction(GameCommandsFactory::getInstance().START_COMMAND, NullCanvas::NULL_CANVAS);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return size;
    
}


};

            

