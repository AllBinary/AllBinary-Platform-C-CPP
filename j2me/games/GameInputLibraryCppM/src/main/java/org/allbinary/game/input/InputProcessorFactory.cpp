
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_INPUTPROCESSORFACTORY_CPP
        #define ORG_ALLBINARY_GAME_INPUT_INPUTPROCESSORFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/InputProcessorFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/InputProcessor.h"


InputProcessorFactory::InputProcessorFactory() : inputProcessor(new InputProcessor()) {
        }
        auto InputProcessorFactory::instance_owner() -> InputProcessorFactory* { static std::unique_ptr<InputProcessorFactory> value(new InputProcessorFactory()); return value.get(); }
InputProcessorFactory* InputProcessorFactory::instance = InputProcessorFactory::instance_owner();

    auto InputProcessorFactory::getInstance() -> InputProcessorFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InputProcessorFactory::instance;
    
}


    auto InputProcessorFactory::getInputProcessor() -> InputProcessor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->inputProcessor;
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_INPUTPROCESSORFACTORY_CPP
