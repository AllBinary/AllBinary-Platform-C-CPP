
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/InputProcessor.h"

class InputProcessorFactory
            : public Object
         {

    private: static InputProcessorFactory* instance() { static std::unique_ptr<InputProcessorFactory> value(new InputProcessorFactory()); return value.get(); }

    public: static InputProcessorFactory* getInstance();

    private: InputProcessor* inputProcessor = new InputProcessor();

    public: InputProcessor* getInputProcessor();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_INPUTPROCESSORFACTORY_H
