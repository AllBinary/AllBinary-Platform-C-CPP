
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
        



        #ifndef ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLIMAGESPECIFICFACTORY_CPP
        #define ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLIMAGESPECIFICFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/image/opengles/OpenGLImageSpecificFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/image/opengles/OpenGLImageFactory.h"


OpenGLImageSpecificFactory::OpenGLImageSpecificFactory() : imageFactory(OpenGLImageFactory::NULL_OPENGL_IMAGE_FACTORY) {
        }
        auto OpenGLImageSpecificFactory::instance_owner() -> OpenGLImageSpecificFactory* { static std::unique_ptr<OpenGLImageSpecificFactory> value(new OpenGLImageSpecificFactory()); return value.get(); }
OpenGLImageSpecificFactory* OpenGLImageSpecificFactory::instance = OpenGLImageSpecificFactory::instance_owner();

    auto OpenGLImageSpecificFactory::getInstance() -> OpenGLImageSpecificFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return OpenGLImageSpecificFactory::instance;
    
}


    auto OpenGLImageSpecificFactory::setImageFactory(OpenGLImageFactory* imageFactory) -> void{
this->imageFactory= imageFactory;
    
PreLogUtil::put((new StringMaker())->append("Selected Image Factory: ")->append(StringUtil::getInstance()->toString(this->imageFactory))->toString(), this, "setImageFactory");
    
}


    auto OpenGLImageSpecificFactory::getImageFactory() -> OpenGLImageFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->imageFactory;
    
}




        #endif //ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLIMAGESPECIFICFACTORY_CPP
