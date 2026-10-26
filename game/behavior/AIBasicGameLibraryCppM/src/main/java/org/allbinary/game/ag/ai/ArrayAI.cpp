
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

      
#include <org/allbinary/game/ai/BasicAI.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ArrayAI: public BasicAI {

    private: std::vector<ArtificialIntelligenceInterface> artificialIntelligenceInterfaceArray;

public: ArrayAI(std::vector<ArtificialIntelligenceInterface> artificialIntelligenceInterface, AllBinaryLayer ownerLayerInterface, GameInput gameInput) : BasicAI(ownerLayerInterface, gameInput){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->artificialIntelligenceInterfaceArray= artificialIntelligenceInterface;
    
}


                //@Throws(Exception.constructor)
            
    public: void processAI(AllBinaryLayerManager allBinaryLayerManager){

    int32_t size = this->artificialIntelligenceInterfaceArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
this->artificialIntelligenceInterfaceArray[index].processAI(allBinaryLayerManager);
    
}

}


    public: std::vector<ArtificialIntelligenceInterface> getArtificialIntelligenceInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->artificialIntelligenceInterfaceArray;
    
}


};

            

