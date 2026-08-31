
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_COMPARISONIMAGEINPUTOUTPUT_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_COMPARISONIMAGEINPUTOUTPUT_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Long.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/input/automation/ImageOutputData.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/java/number/LongUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/cache/AutomaticCacheInterface.h>

      
#include <org/allbinary/logic/visual/media/MediaDataFactory.h>

      
#include <org/allbinary/media/image/ImagePersistanceUtil.h>

      
#include <org/allbinary/media/image/cache/BufferedImageCacheable.h>

      
#include <org/allbinary/media/image/io/ImageIOInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageComparisonResultCacheSingleton.h"
#include "ImageComparisonResultFrameCacheable.h"
#include "ImageComparisonResult.h"
#include "ChangedPixelsUtil.h"

class ComparisonImageInputOutput
            : public Object
        : public ImageIOInterface {
        

    private: static const ROOT_NAME: string = "_Changed_";

    const logUtil: LogUtil = LogUtil.getInstance()!;

public constructor ();

                //@Throws(Exception.constructor)
            
    public save(Long frame);

                //@Throws(Exception.constructor)
            
    public save(ImageComparisonResult imageComparisonResult, Long frame);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_COMPARISONIMAGEINPUTOUTPUT_H
