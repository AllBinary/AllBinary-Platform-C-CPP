
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_RENDERER_RENDERERSTRINGS_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_RENDERER_RENDERERSTRINGS_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RendererStrings
            : public virtual Object
         {

    private: static RendererStrings* instance_owner();
    private: static RendererStrings* instance;

    public: static RendererStrings* getInstance();


            
    public: RendererStrings();
        
    public: const std::string ON_SURFACE_CREATED = "onSurfaceCreated";

    public: const std::string ON_SURFACE_CHANGED = "onSurfaceChanged";

    public: const std::string ON_DRAW_FRAME = "onDrawFrame";

    public: const std::string ON_DRAW_FRAME_THREED = "onDrawFrameThreed";

    public: const std::string ON_DRAW_FRAME_2D = "onDrawFrame2d";

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_RENDERER_RENDERERSTRINGS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_OPENGLES_RENDERER_RENDERERSTRINGS_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_RENDERER_RENDERERSTRINGS_H_COMPLETE
        
        #endif
    
