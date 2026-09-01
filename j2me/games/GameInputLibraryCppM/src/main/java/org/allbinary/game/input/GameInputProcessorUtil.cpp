
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
        
            #include "../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameInputProcessor.h"
#include "InputFactory.h"

class GameInputProcessorUtil
            : public Object
         {

    public: static void init(std::vector<GameInputProcessor> inputProcessorArray){

    GameInputProcessor noInputProcessor = GameInputProcessor::getInstance();;
    

    int32_t total = InputFactory::getInstance().MAX;;
    




                        for (
    int32_t index = 0;index < total; index++)
        {

    GameInputProcessor inputProcessorCanBeNull = inputProcessorArray[index];;
    

                        if(inputProcessorCanBeNull == 
                                    nullptr
                                )
                        
                                    {
                                    inputProcessorArray[index]= noInputProcessor;
    

                                    }
                                
}

}


};

            

