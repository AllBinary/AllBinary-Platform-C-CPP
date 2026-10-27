
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLOPTIONS_CPP
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLOPTIONS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/opengles/OpenGLOptions.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/GameFeatureChoiceGroups.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"


OpenGLOptions::OpenGLOptions() {
        }
        
    auto OpenGLOptions::init() -> void{

    OpenGLFeatureFactory* openGLFeatureFactory = OpenGLFeatureFactory::getInstance();;
    

                        if(Features::getInstance()->isFeature(openGLFeatureFactory->OPENGL_OPTIONS))
                        
                                    {
                                    
    BasicArrayList* openGLMultipleList = new BasicArrayListD();;
    
openGLMultipleList->add(openGLFeatureFactory->OPENGL);
    
GameFeatureChoiceGroups::getMultipleInstance()->add("OpenGL (Complete Restart)", openGLMultipleList);
    

    BasicArrayList* openGLVersionSelectorMultipleList = new BasicArrayListD();;
    
openGLVersionSelectorMultipleList->add(openGLFeatureFactory->OPENGL_AUTO_SELECT);
    
openGLVersionSelectorMultipleList->add(openGLFeatureFactory->OPENGL_MINIMUM);
    
GameFeatureChoiceGroups::getExclusiveInstance()->add("OpenGL Version Selector", openGLVersionSelectorMultipleList);
    

    BasicArrayList* openGLImageColorMultipleList = new BasicArrayListD();;
    
openGLImageColorMultipleList->add(openGLFeatureFactory->IMAGE_COLOR_DEPTH_4444);
    
openGLImageColorMultipleList->add(openGLFeatureFactory->IMAGE_COLOR_DEPTH_8888);
    
GameFeatureChoiceGroups::getExclusiveInstance()->add("OpenGL Image Color RGBA", openGLImageColorMultipleList);
    

                                    }
                                
}




        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLOPTIONS_CPP
