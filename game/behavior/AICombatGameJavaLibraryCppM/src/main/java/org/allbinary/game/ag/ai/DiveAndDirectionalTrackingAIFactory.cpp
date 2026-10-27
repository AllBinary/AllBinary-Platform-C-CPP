
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/ai/ArtificialIntelligenceInterface.h>

      
#include <org/allbinary/game/ag/ai/tactical/BasicRandomAIFactory.h>

      
#include <org/allbinary/game/ai/ArtificialIntelligenceInterfaceFactoryInterface.h>

      
#include <org/allbinary/game/ai/BasicAI.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/util/visitor/Visitor.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/ag/ai/ThrustAIVisitorFactory.h"
#include "org/allbinary/game/ag/ai/BasicProbabilityAIDataFactory.h"
#include "org/allbinary/game/ag/ai/LastKeyAIVisitorFactory.h"
#include "org/allbinary/game/ag/ai/DiveAndDirectionalTrackingAI.h"

class DiveAndDirectionalTrackingAIFactory
            : public Object
        , public ArtificialIntelligenceInterfaceFactoryInterface {

                //@Throws(Exception.constructor)
            
    public: ArtificialIntelligenceInterface* getInstance(ABHashtable<Object*, Object*>* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput){

    Object* visitorCanBeNull = hashtable->get(BasicAI::AI_VISITOR);;
    

                        if(visitorCanBeNull == 
                                    nullptr
                                )
                        
                                    {
                                    visitorCanBeNull= ThrustAIVisitorFactory::getInstance();
    

                                    }
                                

    ABHashtable<Object*, Object*>* hashtable2 = (new BasicProbabilityAIDataFactory())->getInstance();;
    
hashtable2->put(BasicAI::AI_VISITOR, LastKeyAIVisitorFactory::getInstance());
    

    ArtificialIntelligenceInterface* artificialIntelligenceInterface = (new BasicRandomAIFactory())->getInstance(hashtable2, ownerLayerInterface, gameInput);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new DiveAndDirectionalTrackingAI(ownerLayerInterface, artificialIntelligenceInterface, gameInput, dynamic_cast<Visitor*>(visitorCanBeNull));
    
}


};

            

