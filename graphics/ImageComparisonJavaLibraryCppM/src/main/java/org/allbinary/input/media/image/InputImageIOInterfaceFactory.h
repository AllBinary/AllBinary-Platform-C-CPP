
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
        



        #ifndef ORG_ALLBINARY_INPUT_MEDIA_IMAGE_INPUTIMAGEIOINTERFACEFACTORY_H
        #define ORG_ALLBINARY_INPUT_MEDIA_IMAGE_INPUTIMAGEIOINTERFACEFACTORY_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/input/media/image/capture/CapturedImageInputOutput.h>

      
#include <org/allbinary/media/image/comparison/ComparisonImageInputOutput.h>

      
#include <org/allbinary/media/image/comparison/motion/MotionRectanglesImageInputOutput.h>

      
#include <org/allbinary/media/image/io/ImageIOInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "InputImageType.h"

class InputImageIOInterfaceFactory
            : public Object
         {

                //@Throws(Exception.constructor)
            
    public: static ImageIOInterface getInstance(InputImageType imageType);

private: InputImageIOInterfaceFactory();

};

            


        #endif //ORG_ALLBINARY_INPUT_MEDIA_IMAGE_INPUTIMAGEIOINTERFACEFACTORY_H
