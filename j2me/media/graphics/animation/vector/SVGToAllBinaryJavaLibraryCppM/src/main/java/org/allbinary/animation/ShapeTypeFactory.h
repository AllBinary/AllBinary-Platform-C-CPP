
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ShapeType;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ShapeTypeFactory
            : public virtual Object
         {

    private: static ShapeTypeFactory* instance_owner();
    private: static ShapeTypeFactory* instance;

    public: static ShapeTypeFactory* getInstance();


            
    public: ShapeTypeFactory();
        
    public: const std::string KEY_LINE = "line";

    public: const std::string KEY_CIRCLE = "circle";

    public: const std::string KEY_RECTANGLE = "rectangle";

    public: const std::string KEY_RECT = "rect";

    public: ShapeType* LINE;

    public: ShapeType* CIRCLE;

    public: ShapeType* RECTANGLE;

};

            


        #endif //ORG_ALLBINARY_ANIMATION_SHAPETYPEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_SHAPETYPEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_SHAPETYPEFACTORY_H_COMPLETE
        #if __has_include("org/allbinary/animation/ShapeType.h")
#include "org/allbinary/animation/ShapeType.h"
#endif

        #endif
    
