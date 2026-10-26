
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

            #include "java/lang/Object.h"
        
#include <org/allbinary/image/ImageCache.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //OpenGLNoneOtherJavaLibrary
class OpenGLImageCacheFactory
            : public Object
         {

    private: static ImageCache IMAGE_CACHE = ImageCache::NULL_IMAGE_CACHE;

    public: static ImageCache getInstance();

    public: static void init();

};

            


        #endif //ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLIMAGECACHEFACTORY_H
