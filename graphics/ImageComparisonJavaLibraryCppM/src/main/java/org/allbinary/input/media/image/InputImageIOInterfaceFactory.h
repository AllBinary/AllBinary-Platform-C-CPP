
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class CapturedImageInputOutput;
class ComparisonImageInputOutput;
class MotionRectanglesImageInputOutput;
class ImageIOInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class InputImageType;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InputImageIOInterfaceFactory
            : public virtual Object
         {

                //@Throws(Exception.constructor)
            
    public: static ImageIOInterface* getInstance(InputImageType* imageType);

private: InputImageIOInterfaceFactory();

};

            


        #endif //ORG_ALLBINARY_INPUT_MEDIA_IMAGE_INPUTIMAGEIOINTERFACEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_MEDIA_IMAGE_INPUTIMAGEIOINTERFACEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_MEDIA_IMAGE_INPUTIMAGEIOINTERFACEFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/input/media/image/capture/CapturedImageInputOutput.h>)
#include <org/allbinary/input/media/image/capture/CapturedImageInputOutput.h>
#endif
#if __has_include(<org/allbinary/media/image/comparison/ComparisonImageInputOutput.h>)
#include <org/allbinary/media/image/comparison/ComparisonImageInputOutput.h>
#endif
#if __has_include(<org/allbinary/media/image/comparison/motion/MotionRectanglesImageInputOutput.h>)
#include <org/allbinary/media/image/comparison/motion/MotionRectanglesImageInputOutput.h>
#endif
#if __has_include(<org/allbinary/media/image/io/ImageIOInterface.h>)
#include <org/allbinary/media/image/io/ImageIOInterface.h>
#endif
#if __has_include("org/allbinary/input/media/image/InputImageType.h")
#include "org/allbinary/input/media/image/InputImageType.h"
#endif

        #endif
    
