
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_INPUTFEATUREFACTORY_CPP
        #define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_INPUTFEATUREFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/configuration/feature/InputFeatureFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/configuration/feature/InputFeature.h"
#include "org/allbinary/game/configuration/feature/Features.h"

auto InputFeatureFactory::instance_owner() -> InputFeatureFactory* { static std::unique_ptr<InputFeatureFactory> value(new InputFeatureFactory()); return value.get(); }
InputFeatureFactory* InputFeatureFactory::instance = InputFeatureFactory::instance_owner();

    auto InputFeatureFactory::getInstance() -> InputFeatureFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return InputFeatureFactory::instance;
    
}


InputFeatureFactory::InputFeatureFactory() : REMOVE_DUPLICATE_KEY_PRESSES(new InputFeature("Remove Duplicate Key Presses")), INPUT_MAPPING(new InputFeature("Input Mapping")), MULTI_KEY_PRESS(new InputFeature("Multi Key Press")), SINGLE_KEY_REPEAT_PRESS(new InputFeature("Single Key Repeat Press")), SINGLE_KEY_PRESS(new InputFeature("Single Key Press")){
}


    auto InputFeatureFactory::isSingleKeyProcessing() -> bool{

    Features* features = Features::getInstance();;
    

                        if(features->isFeature(this->SINGLE_KEY_REPEAT_PRESS) || features->isFeature(this->SINGLE_KEY_PRESS))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                        }
                            
}




        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_INPUTFEATUREFACTORY_CPP
