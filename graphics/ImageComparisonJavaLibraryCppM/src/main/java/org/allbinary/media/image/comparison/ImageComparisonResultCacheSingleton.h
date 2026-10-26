
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARISONRESULTCACHESINGLETON_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARISONRESULTCACHESINGLETON_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/util/cache/CacheInterface.h>

      
#include <org/allbinary/logic/util/cache/CacheInterfaceFactory.h>

      
#include <org/allbinary/logic/util/cache/CachePolicyFactory.h>

      
#include <org/allbinary/logic/util/cache/CacheTypeFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ImageComparisonResultCacheSingleton
            : public Object
         {

    private: static CacheInterface cacheInterface = 
                nullptr
            ;

                    static int32_t initResult;
                static int32_t init();
            
    public: static CacheInterface getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

private: ImageComparisonResultCacheSingleton();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARISONRESULTCACHESINGLETON_H
