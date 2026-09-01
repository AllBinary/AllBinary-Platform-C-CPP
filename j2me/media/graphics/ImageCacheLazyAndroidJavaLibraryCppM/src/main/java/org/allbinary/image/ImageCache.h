
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
        



        #ifndef ORG_ALLBINARY_IMAGE_IMAGECACHE_H
        #define ORG_ALLBINARY_IMAGE_IMAGECACHE_H

            #include <vector>
        
            #include "../../../java/lang/Exception.h"
        
            #include "../../../java/lang/RuntimeException.h"
        
            #include "../../../java/lang/System.h"
        
            #include "../../../java/lang/Integer.h"
        
            #include "../../../java/lang/Thread.h"
        
#include <java/io/InputStream.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/data/resource/ResourceUtil.h>

      
#include <org/allbinary/game/gd/resource/GDResources.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/system/Memory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageCacheBase.h"

class ImageCache: public ImageCacheBase {

    public: static const ImageCache NULL_IMAGE_CACHE = ImageCache();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

public: ImageCache();

                //@Throws(Exception.constructor)
            
    public: Image get(std::string caller, int32_t width, int32_t height);

                //@Throws(Exception.constructor)
            
    public: Image get(Object* key);

    public: int32_t getIndex(Object* key);

                //@Throws(Exception.constructor)
            
    protected: Image createImage(Object* key, InputStream inputStream);

    public: bool isLazy();

};

            


        #endif //ORG_ALLBINARY_IMAGE_IMAGECACHE_H
