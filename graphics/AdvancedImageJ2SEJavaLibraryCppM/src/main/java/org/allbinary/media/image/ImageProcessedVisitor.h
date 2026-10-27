
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <java/awt/image/BufferedImage.h>

      
#include <java/io/IOException.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/ImageProcessorInputCompositeInterface.h"

class ImageProcessedVisitor: public ImageProcessorInputCompositeInterface {

                //@Throws(IOException.constructor)
            
    public: virtual void visit(BufferedImage* generatedBufferedImage, std::string nameEnding, int32_t index) = 0;

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEPROCESSEDVISITOR_H
