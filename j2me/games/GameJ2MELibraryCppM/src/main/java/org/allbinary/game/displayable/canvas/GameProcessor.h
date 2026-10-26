
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMEPROCESSOR_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMEPROCESSOR_H

            #include "java/lang/Exception.h"
        
#include <org/allbinary/canvas/Processor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AllBinaryGameCanvas.h"

class GameProcessor: public Processor {

    private: AllBinaryGameCanvas gameCanvas;

public: GameProcessor(AllBinaryGameCanvas gameCanvas);

                //@Throws(Exception.constructor)
            
    public: void process();

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMEPROCESSOR_H
