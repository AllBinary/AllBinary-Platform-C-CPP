
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYROTATIONANIMATIONPOOL_CPP
        #define ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYROTATIONANIMATIONPOOL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/image/ImageArrayRotationAnimationPool.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/util/cache/BasicArrayListResetablePool.h>

      
#include <org/allbinary/logic/util/cache/CacheableInterface.h>

      
#include <org/allbinary/logic/util/cache/CacheableInterfaceFactoryInterface.h>

      
#include <org/allbinary/logic/util/cache/PoolInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/image/ImageArrayRotationAnimationCacheableInterfaceFactory.h"
#include "org/allbinary/animation/image/ImageArrayRotationAnimationInfo.h"
#include "org/allbinary/animation/image/ImageArrayRotationAnimationCacheable.h"

PoolInterface* ImageArrayRotationAnimationPool::IMAGE_ROTATION_ANIMATION_POOL = new ImageArrayRotationAnimationPool(new ImageArrayRotationAnimationCacheableInterfaceFactory());

ImageArrayRotationAnimationPool::ImageArrayRotationAnimationPool(CacheableInterfaceFactoryInterface* cacheableInterfaceFactoryInterface) : BasicArrayListResetablePool(cacheableInterfaceFactoryInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto ImageArrayRotationAnimationPool::getInstance() -> PoolInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ImageArrayRotationAnimationPool::IMAGE_ROTATION_ANIMATION_POOL;
    
}


                //@Throws(Exception.constructor)
            
    auto ImageArrayRotationAnimationPool::remove(Object* key) -> CacheableInterface*{

    CacheableInterface* cacheableInterface = BasicArrayListResetablePool::remove(key);;
    

    ImageArrayRotationAnimationInfo* allBinaryImageRotationAnimationInfo = dynamic_cast<ImageArrayRotationAnimationInfo*>(key);;
    

    ImageArrayRotationAnimationCacheable* imageArrayRotationAnimationCacheable = (dynamic_cast<ImageArrayRotationAnimationCacheable*>(cacheableInterface));;
    
imageArrayRotationAnimationCacheable->setImageArray(allBinaryImageRotationAnimationInfo->getImageArray());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return cacheableInterface;
    
}




        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYROTATIONANIMATIONPOOL_CPP
