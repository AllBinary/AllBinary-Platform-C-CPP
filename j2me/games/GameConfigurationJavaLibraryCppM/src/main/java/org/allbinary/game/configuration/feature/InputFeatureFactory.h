
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

            #include "../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "InputFeature.h"
#include "Features.h"

class InputFeatureFactory
            : public Object
         {

    private: static InputFeatureFactory instance() { return InputFeatureFactory(); }

    public: static InputFeatureFactory getInstance();

private: InputFeatureFactory();

    public: const InputFeature REMOVE_DUPLICATE_KEY_PRESSES = InputFeature("Remove Duplicate Key Presses");

    public: const InputFeature INPUT_MAPPING = InputFeature("Input Mapping");

    public: const InputFeature MULTI_KEY_PRESS = InputFeature("Multi Key Press");

    public: const InputFeature SINGLE_KEY_REPEAT_PRESS = InputFeature("Single Key Repeat Press");

    public: const InputFeature SINGLE_KEY_PRESS = InputFeature("Single Key Press");

    public: bool isSingleKeyProcessing();

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_INPUTFEATUREFACTORY_H
