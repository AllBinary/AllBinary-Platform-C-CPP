
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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

        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/media/image/ImageModifierUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/image/AlphaBaseProcessor.h"

class AlphaProcessor: public AlphaBaseProcessor {

    private: static AlphaProcessor* instanceC() { static std::unique_ptr<AlphaProcessor> value(new AlphaProcessor()); return value.get(); }

    public: static AlphaProcessor* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AlphaProcessor::instanceC();
    
}


    public: void setAlpha(ImageModifierUtil* imageModifierUtil, Image* originalImage, Image* imageToShow, int32_t alpha){
imageModifierUtil->setAlpha3(imageToShow, alpha);
    
}


};

            

