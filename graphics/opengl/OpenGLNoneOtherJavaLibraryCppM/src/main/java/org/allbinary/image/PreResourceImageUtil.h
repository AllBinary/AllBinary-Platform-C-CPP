
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

            #include "java/lang/Object.h"
        
#include <javax/microedition/khronos/opengles/GL.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PreResourceImageUtil
            : public Object
         {

    private: static PreResourceImageUtil instance() { return PreResourceImageUtil(); }

    public: static PreResourceImageUtil getInstance();

    public: Image encapsulate(Image image);

    public: void updateGL(GL gl, Image image);

    public: void update(Graphics graphics, Image image);

};

            


        #endif //ORG_ALLBINARY_IMAGE_PRERESOURCEIMAGEUTIL_H
