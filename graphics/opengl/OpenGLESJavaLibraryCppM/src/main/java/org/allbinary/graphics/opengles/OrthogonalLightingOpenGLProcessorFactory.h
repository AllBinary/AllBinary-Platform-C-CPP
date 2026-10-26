
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_ORTHOGONALLIGHTINGOPENGLPROCESSORFACTORY_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_ORTHOGONALLIGHTINGOPENGLPROCESSORFACTORY_H

            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "NullOpenGLProcessorFactory.h"
#include "OpenGLProcessor.h"

class OrthogonalLightingOpenGLProcessorFactory
            : public Object
         {

    private: static OrthogonalLightingOpenGLProcessorFactory instance() { return OrthogonalLightingOpenGLProcessorFactory(); }

    public: static OrthogonalLightingOpenGLProcessorFactory getInstance();

    public: OpenGLProcessor sceneLightingOrthogonalModeOpenGLProcessor = NullOpenGLProcessorFactory::getInstance();

    public: OpenGLProcessor sceneLightsOrthogonalModeOpenGLProcessor = NullOpenGLProcessorFactory::getInstance();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_ORTHOGONALLIGHTINGOPENGLPROCESSORFACTORY_H
