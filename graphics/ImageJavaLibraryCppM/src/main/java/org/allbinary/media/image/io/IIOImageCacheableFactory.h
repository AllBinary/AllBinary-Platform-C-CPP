
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class CacheableInterface;
#include <org/allbinary/logic/util/cache/CacheableInterfaceFactoryInterface.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class IIOImageCacheable;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class IIOImageCacheableFactory
            : public virtual Object
        , public CacheableInterfaceFactoryInterface {

public: IIOImageCacheableFactory();

    public: CacheableInterface* getInstance(Object* key);
    public: CacheableInterface* getInstance(const std::string& key) { return getInstance(JavaString::box(key)); }

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IO_IIOIMAGECACHEABLEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_IO_IIOIMAGECACHEABLEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_IO_IIOIMAGECACHEABLEFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/logic/util/cache/CacheableInterface.h>)
#include <org/allbinary/logic/util/cache/CacheableInterface.h>
#endif
#if __has_include(<org/allbinary/logic/util/cache/CacheableInterfaceFactoryInterface.h>)
#include <org/allbinary/logic/util/cache/CacheableInterfaceFactoryInterface.h>
#endif
#if __has_include("org/allbinary/media/image/io/IIOImageCacheable.h")
#include "org/allbinary/media/image/io/IIOImageCacheable.h"
#endif

        #endif
    
