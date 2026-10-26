
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_COLOR_COLORCACHEFACTORY_H
        #define ORG_ALLBINARY_GRAPHICS_COLOR_COLORCACHEFACTORY_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/util/cache/AutomaticCacheInterface.h>

      
#include <org/allbinary/logic/util/cache/AutomaticCacheInterfaceFactory.h>

      
#include <org/allbinary/logic/util/cache/CachePolicyFactory.h>

      
#include <org/allbinary/logic/util/cache/CacheTypeFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ColorCacheableFactory.h"

class ColorCacheFactory
            : public Object
         {

    private: static AutomaticCacheInterface cacheInterface = 
                nullptr
            ;

                    static int32_t initResult;
                static int32_t init();
            
    public: static AutomaticCacheInterface getInstance();

private: ColorCacheFactory();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_COLOR_COLORCACHEFACTORY_H
