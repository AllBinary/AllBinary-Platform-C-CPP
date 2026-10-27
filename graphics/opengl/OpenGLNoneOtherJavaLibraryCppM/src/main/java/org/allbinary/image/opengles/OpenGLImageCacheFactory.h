
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
        



        #ifndef ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLIMAGECACHEFACTORY_H
        #define ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLIMAGECACHEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class ImageCache;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //OpenGLNoneOtherJavaLibrary
class OpenGLImageCacheFactory
            : public virtual Object
         {

    private: static ImageCache* IMAGE_CACHE;

    public: static ImageCache* getInstance();

    public: static void init();


            
    public: OpenGLImageCacheFactory();
        
};

            


        #endif //ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLIMAGECACHEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLIMAGECACHEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLIMAGECACHEFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/image/ImageCache.h>)
#include <org/allbinary/image/ImageCache.h>
#endif

        #endif
    
