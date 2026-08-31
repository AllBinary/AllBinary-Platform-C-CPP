
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/logic/util/cache/CacheableInterface.h>

      
#include <org/allbinary/logic/util/cache/CacheableInterfaceFactoryInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageArrayRotationAnimationCacheable.h"

class ImageArrayRotationAnimationCacheableInterfaceFactory
            : public Object
        : public CacheableInterfaceFactoryInterface {
        

                //@Throws(Exception.constructor)
            
    public CacheableInterface getInstance(any = {} key){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new ImageArrayRotationAnimationCacheable(key, AnimationBehavior.getInstance());
    
}


};

            

