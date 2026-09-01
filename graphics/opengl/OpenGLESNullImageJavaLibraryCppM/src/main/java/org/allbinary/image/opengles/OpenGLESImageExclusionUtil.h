
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESIMAGEEXCLUSIONUTIL_H
        #define ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESIMAGEEXCLUSIONUTIL_H

            #include "../../../../java/lang/Object.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OpenGLESImageExclusionUtil
            : public Object
         {

    private: static OpenGLESImageExclusionUtil instance() { return OpenGLESImageExclusionUtil(); }

    public: static OpenGLESImageExclusionUtil getInstance();

    public: const BasicArrayList list = BasicArrayListD();

    public: bool isCustomScaling(Image image);

};

            


        #endif //ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESIMAGEEXCLUSIONUTIL_H
