
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
        



        #ifndef ORG_ALLBINARY_INPUT_MEDIA_IMAGE_INPUTIMAGEIOINTERFACEFACTORY_CPP
        #define ORG_ALLBINARY_INPUT_MEDIA_IMAGE_INPUTIMAGEIOINTERFACEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/media/image/InputImageIOInterfaceFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/input/media/image/capture/CapturedImageInputOutput.h>

      
#include <org/allbinary/media/image/comparison/ComparisonImageInputOutput.h>

      
#include <org/allbinary/media/image/comparison/motion/MotionRectanglesImageInputOutput.h>

      
#include <org/allbinary/media/image/io/ImageIOInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/media/image/InputImageType.h"


InputImageIOInterfaceFactory::InputImageIOInterfaceFactory(){
}


                //@Throws(Exception.constructor)
            
    auto InputImageIOInterfaceFactory::getInstance(InputImageType* imageType) -> ImageIOInterface*{

                        if(imageType == InputImageType::CAPTURE)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new CapturedImageInputOutput();
    

                                    }
                                
                             else 
                        if(imageType == InputImageType::COMPARISON)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new ComparisonImageInputOutput();
    

                                    }
                                
                             else 
                        if(imageType == InputImageType::MOTION)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new MotionRectanglesImageInputOutput();
    

                                    }
                                
                        else {
                            


                            throw Exception(JavaString::valueOf("No ImageIOInterface for: ") +JavaString::valueOf(JavaString::valueOf(imageType)));
                    

                        }
                            
}




        #endif //ORG_ALLBINARY_INPUT_MEDIA_IMAGE_INPUTIMAGEIOINTERFACEFACTORY_CPP
