
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_GRAPHICSSTRINGS_H
        #define ORG_ALLBINARY_GRAPHICS_GRAPHICSSTRINGS_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GraphicsStrings
            : public Object
         {

    private: static GraphicsStrings* instance() { static std::unique_ptr<GraphicsStrings> value(new GraphicsStrings()); return value.get(); }

    public: static GraphicsStrings* getInstance();

    public: const std::string ANIMATION = "animation";

    public: const std::string ANGLE = "angle";

    public: const std::string MOVEMENT_ANGLE = "movement_angle";

    public: const std::string ROTATION = "rotation";

    public: const std::string OPACITY = "opacity";

    public: const std::string HTML = "HTML";

    public: const std::string WIDTH = "width";

    public: const std::string HEIGHT = "height";

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_GRAPHICSSTRINGS_H
