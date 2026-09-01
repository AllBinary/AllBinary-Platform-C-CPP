
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
        



        #ifndef ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESGL11EXTIMAGEFACTORY_H
        #define ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESGL11EXTIMAGEFACTORY_H

#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/platform/graphics/PlatformBitmapBaseFactory.h>

      
#include <org/allbinary/platform/opengles/PlatformTextureBaseFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "OpenGLImageFactory.h"
#include "OpenGLESGL11ExtImage.h"

class OpenGLESGL11ExtImageFactory: public OpenGLImageFactory {

    public: Image getInstance(Image image, PlatformBitmapBaseFactory bitmapFactory, PlatformTextureBaseFactory textureFactory);

};

            


        #endif //ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESGL11EXTIMAGEFACTORY_H
