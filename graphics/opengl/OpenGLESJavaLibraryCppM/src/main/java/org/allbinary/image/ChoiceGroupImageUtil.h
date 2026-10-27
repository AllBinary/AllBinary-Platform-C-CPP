
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
        



        #ifndef ORG_ALLBINARY_IMAGE_CHOICEGROUPIMAGEUTIL_H
        #define ORG_ALLBINARY_IMAGE_CHOICEGROUPIMAGEUTIL_H

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/khronos/opengles/GL.h>

      
#include <javax/microedition/lcdui/ChoiceGroupImageFactory.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/image/PreResourceImageUtil.h"

class ChoiceGroupImageUtil
            : public Object
         {

    private: static ChoiceGroupImageUtil* instance() { static std::unique_ptr<ChoiceGroupImageUtil> value(new ChoiceGroupImageUtil()); return value.get(); }

    public: static ChoiceGroupImageUtil* getInstance();

    public: void init();

    public: void update(GL* gl);

    public: void update(Graphics* graphics);

};

            


        #endif //ORG_ALLBINARY_IMAGE_CHOICEGROUPIMAGEUTIL_H
