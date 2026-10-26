
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/ai/ArtificialIntelligenceInterface.h>

      
#include <org/allbinary/game/ai/ArtificialIntelligenceInterfaceFactoryInterface.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HorizontalScreenPatrolAI.h"

class HorizontalScreenPatrolFiringAIFactory
            : public Object
        : public ArtificialIntelligenceInterfaceFactoryInterface {

                //@Throws(Exception.constructor)
            
    public: ArtificialIntelligenceInterface getInstance(ABHashtable<Object*, Object*> hashtable, AllBinaryLayer ownerLayerInterface, GameInput gameInput){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HorizontalScreenPatrolAI(hashtable, ownerLayerInterface, gameInput);
    
}


};

            

