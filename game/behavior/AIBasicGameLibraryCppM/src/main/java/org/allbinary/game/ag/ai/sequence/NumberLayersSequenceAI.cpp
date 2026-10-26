
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
        



            #include <vector>
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/ai/ArtificialIntelligenceInterface.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SequenceAI.h"

class NumberLayersSequenceAI: public SequenceAI {

    private: int32_t numberOfLayersLeft;

public: NumberLayersSequenceAI(int32_t numberOfEnemiesLeft, std::vector<ArtificialIntelligenceInterface> artificialIntelligenceInterface, AllBinaryLayer ownerLayerInterface, GameInput gameInput) : SequenceAI(artificialIntelligenceInterface, ownerLayerInterface, gameInput){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->numberOfLayersLeft= numberOfEnemiesLeft;
    
}


                //@Throws(Exception.constructor)
            
    public: void processAI(AllBinaryLayerManager allBinaryLayerManager){

                        if(this->getIndex() == 0)
                        
                                    {
                                    
                        if(allBinaryLayerManager.getSize() < this->numberOfLayersLeft)
                        
                                    {
                                    this->setIndex(1);
    

                                    }
                                

                                    }
                                
super.processAI(allBinaryLayerManager);
    
}


};

            

