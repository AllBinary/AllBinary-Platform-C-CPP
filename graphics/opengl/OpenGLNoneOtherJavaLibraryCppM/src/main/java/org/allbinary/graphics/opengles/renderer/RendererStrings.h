
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class RendererStrings
            : public Object
         {

    private: static RendererStrings* instance() { static std::unique_ptr<RendererStrings> value(new RendererStrings()); return value.get(); }

    public: static RendererStrings* getInstance();

    public: const std::string ON_SURFACE_CREATED = "onSurfaceCreated";

    public: const std::string ON_SURFACE_CHANGED = "onSurfaceChanged";

    public: const std::string ON_DRAW_FRAME = "onDrawFrame";

    public: const std::string ON_DRAW_FRAME_THREED = "onDrawFrameThreed";

    public: const std::string ON_DRAW_FRAME_2D = "onDrawFrame2d";

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_RENDERER_RENDERERSTRINGS_H
