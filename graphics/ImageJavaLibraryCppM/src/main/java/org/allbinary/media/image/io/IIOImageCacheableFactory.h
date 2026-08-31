
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IO_IIOIMAGECACHEABLEFACTORY_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_IO_IIOIMAGECACHEABLEFACTORY_H

            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/util/cache/CacheableInterface.h>

      
#include <org/allbinary/logic/util/cache/CacheableInterfaceFactoryInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "IIOImageCacheable.h"

class IIOImageCacheableFactory
            : public Object
        : public CacheableInterfaceFactoryInterface {
        

public constructor ();

    public CacheableInterface getInstance(any = {} key);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IO_IIOIMAGECACHEABLEFACTORY_H
