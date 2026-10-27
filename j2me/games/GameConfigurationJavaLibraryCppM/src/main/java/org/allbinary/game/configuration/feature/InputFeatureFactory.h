
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_INPUTFEATUREFACTORY_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_INPUTFEATUREFACTORY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/configuration/feature/InputFeature.h"
#include "org/allbinary/game/configuration/feature/Features.h"

class InputFeatureFactory
            : public Object
         {

    private: static InputFeatureFactory* instance() { static std::unique_ptr<InputFeatureFactory> value(new InputFeatureFactory()); return value.get(); }

    public: static InputFeatureFactory* getInstance();

private: InputFeatureFactory();

    public: InputFeature* REMOVE_DUPLICATE_KEY_PRESSES = new InputFeature("Remove Duplicate Key Presses");

    public: InputFeature* INPUT_MAPPING = new InputFeature("Input Mapping");

    public: InputFeature* MULTI_KEY_PRESS = new InputFeature("Multi Key Press");

    public: InputFeature* SINGLE_KEY_REPEAT_PRESS = new InputFeature("Single Key Repeat Press");

    public: InputFeature* SINGLE_KEY_PRESS = new InputFeature("Single Key Press");

    public: bool isSingleKeyProcessing();

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_INPUTFEATUREFACTORY_H
