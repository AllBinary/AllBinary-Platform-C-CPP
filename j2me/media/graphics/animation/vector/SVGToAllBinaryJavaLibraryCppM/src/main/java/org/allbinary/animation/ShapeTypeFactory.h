
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_SHAPETYPEFACTORY_H
        #define ORG_ALLBINARY_ANIMATION_SHAPETYPEFACTORY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/ShapeType.h"

class ShapeTypeFactory
            : public Object
         {

    private: static ShapeTypeFactory* instance() { static std::unique_ptr<ShapeTypeFactory> value(new ShapeTypeFactory()); return value.get(); }

    public: static ShapeTypeFactory* getInstance();

    public: const std::string KEY_LINE = "line";

    public: const std::string KEY_CIRCLE = "circle";

    public: const std::string KEY_RECTANGLE = "rectangle";

    public: const std::string KEY_RECT = "rect";

    public: ShapeType* LINE = new ShapeType(KEY_LINE);

    public: ShapeType* CIRCLE = new ShapeType(KEY_CIRCLE);

    public: ShapeType* RECTANGLE = new ShapeType(KEY_RECTANGLE);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_SHAPETYPEFACTORY_H
