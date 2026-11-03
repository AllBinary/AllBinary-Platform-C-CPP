
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_PIXEL_PIXELDELTAFACTORY_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_PIXEL_PIXELDELTAFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/comparison/pixel/PixelDeltaFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/util/cache/AutomaticCacheInterface.h>

      
#include <org/allbinary/logic/util/cache/CacheInterfaceFactory.h>

      
#include <org/allbinary/logic/util/cache/CachePolicyFactory.h>

      
#include <org/allbinary/logic/util/cache/CacheTypeFactory.h>

      
#include <org/allbinary/media/image/comparison/color/ColorDelta.h>

      
#include <org/allbinary/media/image/comparison/color/ColorDeltaFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/comparison/pixel/PixelDelta.h"

int32_t PixelDeltaFactory::initResult = PixelDeltaFactory::init();
        auto PixelDeltaFactory::init() -> int32_t {
                    

    LogUtil* logUtil = LogUtil::getInstance();;
    

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

    std::string STATIC_BLOCK = "Static Block";;
    

    std::string instance = "PixelDeltaFactory";;
    

        try {
            logUtil->putF(commonStrings->START, instance, STATIC_BLOCK);
    
PixelDeltaFactory::cacheInterface= dynamic_cast<AutomaticCacheInterface*>(CacheInterfaceFactory::getInstance(CacheTypeFactory::getInstance()->CACHE, CachePolicyFactory::getInstance()->THIRTY_MINUTES_TEN_THOUSAND_MAX));
    
logUtil->putF(commonStrings->END, instance, STATIC_BLOCK);
    

                //: 
} catch(Exception& e) 
            {
logUtil->put(commonStrings->EXCEPTION, instance, STATIC_BLOCK, &e);
    
}



                    return 0;
        }
                
PixelDeltaFactory::PixelDeltaFactory() : logUtil(LogUtil::getInstance()){
}


                //@Throws(Exception.constructor)
            
    auto PixelDeltaFactory::getInstance(int32_t x, int32_t y, int32_t rgb1, int32_t rgb2) -> PixelDelta*{

    GPoint* point = PointFactory::getInstance()->createXY(x, y);;
    

    ColorDelta* colorDelta = ColorDeltaFactory::getInstance(rgb1, rgb2);;
    

    PixelDelta* pixelDelta = dynamic_cast<PixelDelta*>(PixelDeltaFactory::cacheInterface->get(PixelDelta::getKey(point, colorDelta)));;
    

                        if(pixelDelta == 
                                    nullptr
                                )
                        
                                    {
                                    pixelDelta= new PixelDelta(point, colorDelta);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return pixelDelta;
    
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_PIXEL_PIXELDELTAFACTORY_CPP
