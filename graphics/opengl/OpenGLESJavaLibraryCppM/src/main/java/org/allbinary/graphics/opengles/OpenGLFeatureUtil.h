
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLFEATUREUTIL_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLFEATUREUTIL_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/configuration/feature/Features.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/opengles/OpenGLConfiguration.h"
#include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"

class OpenGLFeatureUtil
            : public Object
         {

    private: static OpenGLFeatureUtil* instance() { static std::unique_ptr<OpenGLFeatureUtil> value(new OpenGLFeatureUtil()); return value.get(); }

    public: static OpenGLFeatureUtil* getInstance();

    private: bool anyThreed;

public: OpenGLFeatureUtil();

    public: bool isAnyThreed();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLFEATUREUTIL_H
