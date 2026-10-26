
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
        



        #ifndef ORG_ALLBINARY_IMAGE_ANIMATIONFRAMETOIMAGEUTIL_H
        #define ORG_ALLBINARY_IMAGE_ANIMATIONFRAMETOIMAGEUTIL_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/Animation.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameFeatureImageCacheFactory.h"

class AnimationFrameToImageUtil
            : public Object
         {

    private: static AnimationFrameToImageUtil instance() { return AnimationFrameToImageUtil(); }

    public: static AnimationFrameToImageUtil getInstance();

                //@Throws(Exception.constructor)
            
    public: Image getInstanceTranslate(int32_t width, int32_t height, Animation animationInterface);

                //@Throws(Exception.constructor)
            
    public: Image getInstanceWH(int32_t width, int32_t height, Animation animationInterface);

};

            


        #endif //ORG_ALLBINARY_IMAGE_ANIMATIONFRAMETOIMAGEUTIL_H
