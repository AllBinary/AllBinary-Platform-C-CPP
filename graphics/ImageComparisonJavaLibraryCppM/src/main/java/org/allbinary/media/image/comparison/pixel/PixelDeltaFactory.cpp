
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
        



            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
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
        #include "PixelDelta.h"

class PixelDeltaFactory
            : public Object
         {
        

    private: static cacheInterface: AutomaticCacheInterface = 
                null
            ;

                    static int32_t initResult = PixelDeltaFactory::init();
                static int32_t init() { 
                    

    logUtil: LogUtil = LogUtil.getInstance()!;;
    

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    

    STATIC_BLOCK: string = "Static Block";;
    

    instance: string = "PixelDeltaFactory";;
    

        try {
            logUtil!.putF(commonStrings!.START, instance, STATIC_BLOCK);
    
PixelDeltaFactory.cacheInterface= CacheInterfaceFactory.getInstance(CacheTypeFactory.getInstance()!.CACHE, CachePolicyFactory.getInstance()!.THIRTY_MINUTES_TEN_THOUSAND_MAX) as AutomaticCacheInterface;
    
logUtil!.putF(commonStrings!.END, instance, STATIC_BLOCK);
    

                //: 
} catch(e) 
            {
logUtil!.put(commonStrings!.EXCEPTION, instance, STATIC_BLOCK, e);
    
}



                    return 0;
                }
            
                //@Throws(Exception.constructor)
            
    public static PixelDelta getInstance(int32_t x, int32_t y, int32_t rgb1, int32_t rgb2){

    point: GPoint = PointFactory.getInstance()!.createXY(x, y)!;;
    

    colorDelta: ColorDelta = ColorDeltaFactory.getInstance(rgb1, rgb2)!;;
    

    pixelDelta: PixelDelta = PixelDeltaFactory.cacheInterface!.get(PixelDelta.getKey(point, colorDelta)) as PixelDelta;;
    

                        if(pixelDelta == 
                                    null
                                )
                        
                                    {
                                    pixelDelta= new PixelDelta(point, colorDelta);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return pixelDelta;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

private constructor (){

            super();
        }


};

            

