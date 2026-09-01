
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2026 AllBinary 
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
        



            #include "../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ShapeType.h"

class ShapeTypeFactory
            : public Object
         {

    private: static ShapeTypeFactory instance() { return ShapeTypeFactory(); }

    public: static ShapeTypeFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return instance;
    
}


    public: const std::string KEY_LINE = "line";

    public: const std::string KEY_CIRCLE = "circle";

    public: const std::string KEY_RECTANGLE = "rectangle";

    public: const std::string KEY_RECT = "rect";

    public: const ShapeType LINE = ShapeType(KEY_LINE);

    public: const ShapeType CIRCLE = ShapeType(KEY_CIRCLE);

    public: const ShapeType RECTANGLE = ShapeType(KEY_RECTANGLE);

};

            

