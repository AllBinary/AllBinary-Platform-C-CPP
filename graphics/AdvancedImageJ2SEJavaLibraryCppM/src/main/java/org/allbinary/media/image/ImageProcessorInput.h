
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGEPROCESSORINPUT_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEPROCESSORINPUT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/awt/image/BufferedImage.h>
#include <java/io/File.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageProcessorInput
            : public virtual Object
         {

    private: std::vector<BufferedImage*> bufferedImageArray;

    private: std::vector<File*> files;

public: ImageProcessorInput(std::vector<File*> files, std::vector<BufferedImage*> bufferedImageArray);

    public: std::vector<BufferedImage*> getBufferedImageArray();

    public: std::vector<File*> getFiles();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEPROCESSORINPUT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_IMAGEPROCESSORINPUT_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEPROCESSORINPUT_H_COMPLETE
        #if __has_include(<java/awt/image/BufferedImage.h>)
#include <java/awt/image/BufferedImage.h>
#endif
#if __has_include(<java/io/File.h>)
#include <java/io/File.h>
#endif

        #endif
    
