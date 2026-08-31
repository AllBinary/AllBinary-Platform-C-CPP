
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

            #include "../../../java/lang/Object.h"
        
#include <javax/microedition/khronos/opengles/GL.h>

      
#include <javax/microedition/lcdui/ChoiceGroupImageFactory.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PreResourceImageUtil.h"

class ChoiceGroupImageUtil
            : public Object
         {
        

    private: static const instance: ChoiceGroupImageUtil = new ChoiceGroupImageUtil();

    public static ChoiceGroupImageUtil getInstance();

    public init();

    public update(GL gl);

    public update(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_IMAGE_CHOICEGROUPIMAGEUTIL_H
