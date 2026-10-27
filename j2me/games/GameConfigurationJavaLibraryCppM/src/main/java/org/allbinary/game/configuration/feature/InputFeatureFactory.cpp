
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

    public: static InputFeatureFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InputFeatureFactory::instance();
    
}


private: InputFeatureFactory(){
}


    public: InputFeature* REMOVE_DUPLICATE_KEY_PRESSES = new InputFeature("Remove Duplicate Key Presses");

    public: InputFeature* INPUT_MAPPING = new InputFeature("Input Mapping");

    public: InputFeature* MULTI_KEY_PRESS = new InputFeature("Multi Key Press");

    public: InputFeature* SINGLE_KEY_REPEAT_PRESS = new InputFeature("Single Key Repeat Press");

    public: InputFeature* SINGLE_KEY_PRESS = new InputFeature("Single Key Press");

    public: bool isSingleKeyProcessing(){

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


};

            

