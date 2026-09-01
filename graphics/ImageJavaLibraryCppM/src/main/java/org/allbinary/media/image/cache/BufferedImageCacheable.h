
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_CACHE_BUFFEREDIMAGECACHEABLE_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_CACHE_BUFFEREDIMAGECACHEABLE_H

            #include "../../../../../java/lang/Object.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/cache/CacheableInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BufferedImageInfo.h"

class BufferedImageCacheable
            : public Object
        : public CacheableInterface {

    private: BufferedImageInfo key;

    private: BufferedImage bufferedImage;

public: BufferedImageCacheable(BufferedImageInfo key);

    public: Object* getKey();

    public: BufferedImage getBufferedImage();

    private: void setBufferedImage(BufferedImage bufferedImage);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_CACHE_BUFFEREDIMAGECACHEABLE_H
