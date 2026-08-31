
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
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <java/util/Hashtable.h>

      
#include <org/allbinary/ai/ArtificialIntelligenceInterface.h>

      
#include <org/allbinary/game/ag/ai/ArrayAI.h>

      
#include <org/allbinary/game/ai/ArtificialIntelligenceInterfaceFactoryInterface.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RandomPatrolAI.h"
#include "TimedFireAI.h"

class RandomPatrolFlockingFiringAIFactory
            : public Object
        : public ArtificialIntelligenceInterfaceFactoryInterface {
        

                //@Throws(Exception.constructor)
            
    public ArtificialIntelligenceInterface getInstance(Hashtable<any, any> hashtable, AllBinaryLayer ownerLayerInterface, GameInput gameInput){

    artificialIntelligenceInterface: std::vector<ArtificialIntelligenceInterface> = new Array(2);;
    
artificialIntelligenceInterface[0]= new RandomPatrolAI(hashtable, ownerLayerInterface, gameInput);
    
artificialIntelligenceInterface[1]= new TimedFireAI(1800, ownerLayerInterface, gameInput);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new ArrayAI(artificialIntelligenceInterface, ownerLayerInterface, gameInput);
    
}


};

            

