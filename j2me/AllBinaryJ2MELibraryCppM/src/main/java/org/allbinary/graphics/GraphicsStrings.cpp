
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
        



            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GraphicsStrings
            : public Object
         {

    private: static GraphicsStrings instance() { return GraphicsStrings(); }

    public: static GraphicsStrings getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GraphicsStrings::instance();
    
}


    public: const std::string ANIMATION = "animation";

    public: const std::string ANGLE = "angle";

    public: const std::string MOVEMENT_ANGLE = "movement_angle";

    public: const std::string ROTATION = "rotation";

    public: const std::string OPACITY = "opacity";

    public: const std::string HTML = "HTML";

    public: const std::string WIDTH = "width";

    public: const std::string HEIGHT = "height";

};

            

