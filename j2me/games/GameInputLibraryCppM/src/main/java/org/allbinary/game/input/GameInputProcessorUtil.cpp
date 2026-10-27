
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_GAMEINPUTPROCESSORUTIL_CPP
        #define ORG_ALLBINARY_GAME_INPUT_GAMEINPUTPROCESSORUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/GameInputProcessorUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/GameInputProcessor.h"
#include "org/allbinary/game/input/InputFactory.h"


GameInputProcessorUtil::GameInputProcessorUtil() {
        }
        
    auto GameInputProcessorUtil::init(std::vector<GameInputProcessor*> inputProcessorArray) -> void{

    GameInputProcessor* noInputProcessor = GameInputProcessor::getInstance();;
    

    int32_t total = InputFactory::getInstance()->MAX;;
    




                        for (
    int32_t index = 0;index < total; index++)
        {

    GameInputProcessor* inputProcessorCanBeNull = inputProcessorArray[index];;
    

                        if(inputProcessorCanBeNull == 
                                    nullptr
                                )
                        
                                    {
                                    inputProcessorArray[index]= noInputProcessor;
    

                                    }
                                
}

}




        #endif //ORG_ALLBINARY_GAME_INPUT_GAMEINPUTPROCESSORUTIL_CPP
