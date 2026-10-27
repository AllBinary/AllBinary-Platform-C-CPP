
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_INPUTPROCESSORFACTORY_H
        #define ORG_ALLBINARY_GAME_INPUT_INPUTPROCESSORFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class InputProcessor;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InputProcessorFactory
            : public virtual Object
         {

    private: static InputProcessorFactory* instance_owner();
    private: static InputProcessorFactory* instance;

    public: static InputProcessorFactory* getInstance();


            
    public: InputProcessorFactory();
        
    private: InputProcessor* inputProcessor;

    public: InputProcessor* getInputProcessor();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_INPUTPROCESSORFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_INPUTPROCESSORFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_INPUTPROCESSORFACTORY_H_COMPLETE
        #if __has_include("org/allbinary/game/input/InputProcessor.h")
#include "org/allbinary/game/input/InputProcessor.h"
#endif

        #endif
    
