
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
        



            #include "../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameInputProcessor.h"
#include "InputFactory.h"

class GameInputProcessorUtil
            : public Object
         {
        

    public static init(std::vector<GameInputProcessor> inputProcessorArray){

    noInputProcessor: GameInputProcessor = GameInputProcessor.getInstance()!;;
    

    total: int32_t = InputFactory.getInstance()!.MAX;;
    




                        for (
    index: int32_t = 0;index < total; index++)
        {

    inputProcessorCanBeNull: GameInputProcessor = inputProcessorArray[index];;
    

                        if(inputProcessorCanBeNull == 
                                    null
                                )
                        
                                    {
                                    inputProcessorArray[index]= noInputProcessor;
    

                                    }
                                
}

}


};

            

