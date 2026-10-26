
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
        



        #ifndef ORG_ALLBINARY_IMAGE_INDEXEDANIMATIONTOIMAGEARRAYUTIL_H
        #define ORG_ALLBINARY_IMAGE_INDEXEDANIMATIONTOIMAGEARRAYUTIL_H

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AnimationFrameToImageUtil.h"

class IndexedAnimationToImageArrayUtil
            : public Object
         {

                //@Throws(Exception.constructor)
            
    public: static std::vector<Image> getInstance(int32_t width, int32_t height, IndexedAnimation sequentialAnimationInterface);

};

            


        #endif //ORG_ALLBINARY_IMAGE_INDEXEDANIMATIONTOIMAGEARRAYUTIL_H
