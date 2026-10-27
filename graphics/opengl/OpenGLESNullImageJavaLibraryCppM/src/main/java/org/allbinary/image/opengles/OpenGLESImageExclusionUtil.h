
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OpenGLESImageExclusionUtil
            : public Object
         {

    private: static OpenGLESImageExclusionUtil* instance() { static std::unique_ptr<OpenGLESImageExclusionUtil> value(new OpenGLESImageExclusionUtil()); return value.get(); }

    public: static OpenGLESImageExclusionUtil* getInstance();

    public: BasicArrayList* list = new BasicArrayListD();

    public: bool isCustomScaling(Image* image);

};

            


        #endif //ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESIMAGEEXCLUSIONUTIL_H
