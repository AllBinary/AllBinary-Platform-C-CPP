
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_SHAPETYPEFACTORY_CPP
        #define ORG_ALLBINARY_ANIMATION_SHAPETYPEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/ShapeTypeFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/ShapeType.h"


ShapeTypeFactory::ShapeTypeFactory() : LINE(new ShapeType(KEY_LINE)), CIRCLE(new ShapeType(KEY_CIRCLE)), RECTANGLE(new ShapeType(KEY_RECTANGLE)) {
        }
        auto ShapeTypeFactory::instance_owner() -> ShapeTypeFactory* { static std::unique_ptr<ShapeTypeFactory> value(new ShapeTypeFactory()); return value.get(); }
ShapeTypeFactory* ShapeTypeFactory::instance = ShapeTypeFactory::instance_owner();

    auto ShapeTypeFactory::getInstance() -> ShapeTypeFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ShapeTypeFactory::instance;
    
}




        #endif //ORG_ALLBINARY_ANIMATION_SHAPETYPEFACTORY_CPP
