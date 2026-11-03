
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGEPROCESSEDVISITOR_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEPROCESSEDVISITOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <java/awt/image/BufferedImage.h>
#include <java/io/IOException.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/ImageProcessorInputCompositeInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageProcessedVisitor: public virtual ImageProcessorInputCompositeInterface {

                //@Throws(IOException.constructor)
            
    public: virtual void visit(BufferedImage* generatedBufferedImage, std::string nameEnding, int32_t index) = 0;

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEPROCESSEDVISITOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_IMAGEPROCESSEDVISITOR_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEPROCESSEDVISITOR_H_COMPLETE
        #if __has_include(<java/awt/image/BufferedImage.h>)
#include <java/awt/image/BufferedImage.h>
#endif
#if __has_include(<java/io/IOException.h>)
#include <java/io/IOException.h>
#endif
#if __has_include("org/allbinary/media/image/ImageProcessorInputCompositeInterface.h")
#include "org/allbinary/media/image/ImageProcessorInputCompositeInterface.h"
#endif

        #endif
    
