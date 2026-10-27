
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class GL;
class ChoiceGroupImageFactory;
class Graphics;
class Image;
class OpenGLFeatureFactory;
class Features;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class PreResourceImageUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ChoiceGroupImageUtil
            : public virtual Object
         {

    private: static ChoiceGroupImageUtil* instance_owner();
    private: static ChoiceGroupImageUtil* instance;

    public: static ChoiceGroupImageUtil* getInstance();


            
    public: ChoiceGroupImageUtil();
        
    public: void init();

    public: void update(GL* gl);

    public: void update(Graphics* graphics);

};

            


        #endif //ORG_ALLBINARY_IMAGE_CHOICEGROUPIMAGEUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_IMAGE_CHOICEGROUPIMAGEUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_IMAGE_CHOICEGROUPIMAGEUTIL_H_COMPLETE
        #if __has_include(<javax/microedition/khronos/opengles/GL.h>)
#include <javax/microedition/khronos/opengles/GL.h>
#endif
#if __has_include(<javax/microedition/lcdui/ChoiceGroupImageFactory.h>)
#include <javax/microedition/lcdui/ChoiceGroupImageFactory.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>)
#include <org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/Features.h>)
#include <org/allbinary/game/configuration/feature/Features.h>
#endif
#if __has_include("org/allbinary/image/PreResourceImageUtil.h")
#include "org/allbinary/image/PreResourceImageUtil.h"
#endif

        #endif
    
