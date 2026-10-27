
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
        



        #ifndef ORG_ALLBINARY_IMAGE_GAMEFEATUREIMAGECACHEFACTORY_H
        #define ORG_ALLBINARY_IMAGE_GAMEFEATUREIMAGECACHEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ImageCacheFactory;
class ImageCache;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameFeatureImageCacheFactory
            : public virtual Object
         {

    public: static ImageCache* getInstance();

    public: static void init();

    public: static void releaseAll();


            
    public: GameFeatureImageCacheFactory();
        
};

            


        #endif //ORG_ALLBINARY_IMAGE_GAMEFEATUREIMAGECACHEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_IMAGE_GAMEFEATUREIMAGECACHEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_IMAGE_GAMEFEATUREIMAGECACHEFACTORY_H_COMPLETE
        #if __has_include("org/allbinary/image/ImageCacheFactory.h")
#include "org/allbinary/image/ImageCacheFactory.h"
#endif
#if __has_include("org/allbinary/image/ImageCache.h")
#include "org/allbinary/image/ImageCache.h"
#endif

        #endif
    
