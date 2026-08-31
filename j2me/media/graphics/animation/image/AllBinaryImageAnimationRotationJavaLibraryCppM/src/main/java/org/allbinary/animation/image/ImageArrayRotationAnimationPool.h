
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYROTATIONANIMATIONPOOL_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYROTATIONANIMATIONPOOL_H

            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/util/cache/BasicArrayListResetablePool.h>

      
#include <org/allbinary/logic/util/cache/CacheableInterface.h>

      
#include <org/allbinary/logic/util/cache/CacheableInterfaceFactoryInterface.h>

      
#include <org/allbinary/logic/util/cache/PoolInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageArrayRotationAnimationCacheableInterfaceFactory.h"
#include "ImageArrayRotationAnimationInfo.h"
#include "ImageArrayRotationAnimationCacheable.h"

class ImageArrayRotationAnimationPool: public BasicArrayListResetablePool {
        

    private: static IMAGE_ROTATION_ANIMATION_POOL: PoolInterface = new ImageArrayRotationAnimationPool(new ImageArrayRotationAnimationCacheableInterfaceFactory());

    public static PoolInterface getInstance();

public constructor (CacheableInterfaceFactoryInterface cacheableInterfaceFactoryInterface);

                //@Throws(Exception.constructor)
            
    public CacheableInterface remove(any = {} key);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYROTATIONANIMATIONPOOL_H
