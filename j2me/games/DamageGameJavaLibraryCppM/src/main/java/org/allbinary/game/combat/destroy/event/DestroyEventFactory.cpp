
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
        



            #include "../../../../../../java/lang/Object.h"
        
#include <org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObjectFactoryInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DestroyedEvent.h"

class DestroyEventFactory
            : public Object
        : public AllBinaryEventObjectFactoryInterface {
        

    private: combatGameCanvas: AllBinaryGameCanvas;

public constructor (AllBinaryGameCanvas combatGameCanvas){

            super();
        this.combatGameCanvas= combatGameCanvas;
    
}


    public AllBinaryEventObject getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new DestroyedEvent(this.combatGameCanvas);
    
}


};

            

