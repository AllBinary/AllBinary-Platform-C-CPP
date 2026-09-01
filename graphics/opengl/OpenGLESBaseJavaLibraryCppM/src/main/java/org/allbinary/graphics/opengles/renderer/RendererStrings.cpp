
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
        



            #include "../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class RendererStrings
            : public Object
         {

    private: static RendererStrings instance() { return RendererStrings(); }

    public: static RendererStrings getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RendererStrings::instance();
    
}


    public: const std::string ON_SURFACE_CREATED = "onSurfaceCreated";

    public: const std::string ON_SURFACE_CHANGED = "onSurfaceChanged";

    public: const std::string ON_DRAW_FRAME = "onDrawFrame";

    public: const std::string ON_DRAW_FRAME_THREED = "onDrawFrameThreed";

    public: const std::string ON_DRAW_FRAME_2D = "onDrawFrame2d";

};

            

