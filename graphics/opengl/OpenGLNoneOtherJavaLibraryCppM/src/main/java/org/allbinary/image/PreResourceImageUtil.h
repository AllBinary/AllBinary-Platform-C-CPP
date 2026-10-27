
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
        



        #ifndef ORG_ALLBINARY_IMAGE_PRERESOURCEIMAGEUTIL_H
        #define ORG_ALLBINARY_IMAGE_PRERESOURCEIMAGEUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class GL;
class Graphics;
class Image;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PreResourceImageUtil
            : public virtual Object
         {

    private: static PreResourceImageUtil* instance_owner();
    private: static PreResourceImageUtil* instance;

    public: static PreResourceImageUtil* getInstance();


            
    public: PreResourceImageUtil();
        
    public: Image* encapsulate(Image* image);

    public: void updateGL(GL* gl, Image* image);

    public: void update(Graphics* graphics, Image* image);

};

            


        #endif //ORG_ALLBINARY_IMAGE_PRERESOURCEIMAGEUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_IMAGE_PRERESOURCEIMAGEUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_IMAGE_PRERESOURCEIMAGEUTIL_H_COMPLETE
        #if __has_include(<javax/microedition/khronos/opengles/GL.h>)
#include <javax/microedition/khronos/opengles/GL.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif

        #endif
    
