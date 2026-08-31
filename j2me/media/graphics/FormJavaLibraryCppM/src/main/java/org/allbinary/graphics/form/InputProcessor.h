
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_INPUTPROCESSOR_H
        #define ORG_ALLBINARY_GRAPHICS_FORM_INPUTPROCESSOR_H

            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/canvas/Processor.h>

      
#include <org/allbinary/game/input/PlayerGameInputCompositeInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class InputProcessor: public Processor {
        

    private: const playerGameInputCompositeInterface: PlayerGameInputCompositeInterface;

public constructor (PlayerGameInputCompositeInterface playerGameInputCompositeInterface);

                //@Throws(Exception.constructor)
            
    public process();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FORM_INPUTPROCESSOR_H
