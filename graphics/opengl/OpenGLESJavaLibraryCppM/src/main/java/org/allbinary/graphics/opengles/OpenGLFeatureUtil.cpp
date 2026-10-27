
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLFEATUREUTIL_CPP
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLFEATUREUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/opengles/OpenGLFeatureUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/configuration/feature/Features.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/opengles/OpenGLConfiguration.h"
#include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"

auto OpenGLFeatureUtil::instance_owner() -> OpenGLFeatureUtil* { static std::unique_ptr<OpenGLFeatureUtil> value(new OpenGLFeatureUtil()); return value.get(); }
OpenGLFeatureUtil* OpenGLFeatureUtil::instance = OpenGLFeatureUtil::instance_owner();

    auto OpenGLFeatureUtil::getInstance() -> OpenGLFeatureUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OpenGLFeatureUtil::instance;
    
}


OpenGLFeatureUtil::OpenGLFeatureUtil(){

    OpenGLConfiguration* openGLConfiguration = OpenGLConfiguration::getInstance();;
    

    Features* features = Features::getInstance();;
    

    OpenGLFeatureFactory* openGLFeatureFactory = OpenGLFeatureFactory::getInstance();;
    
this->anyThreed= openGLConfiguration->isOpenGL() && (features->isFeature(openGLFeatureFactory->OPENGL_2D_AND_3D) || features->isFeature(openGLFeatureFactory->OPENGL_3D));
    
}


    auto OpenGLFeatureUtil::isAnyThreed() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->anyThreed;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLFEATUREUTIL_CPP
