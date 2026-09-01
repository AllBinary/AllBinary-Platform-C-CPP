
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

            #include <vector>
        
            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <java/io/File.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ImageProcessorInput
            : public Object
         {

    private: std::vector<BufferedImage> bufferedImageArray;

    private: std::vector<File> files;

public: ImageProcessorInput(std::vector<File> files, std::vector<BufferedImage> bufferedImageArray);

    public: std::vector<BufferedImage> getBufferedImageArray();

    public: std::vector<File> getFiles();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEPROCESSORINPUT_H
