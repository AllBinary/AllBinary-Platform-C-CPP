
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_THREED_GLHOLDER_H
        #define ORG_ALLBINARY_GRAPHICS_THREED_GLHOLDER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GLHolder
            : public virtual Object
         {

    public: bool isCreated = true;

public: GLHolder();

    public: void runOnSurfaceCreated(Object* renderer);
    public: void runOnSurfaceCreated(const std::string& renderer) { return runOnSurfaceCreated(JavaString::box(renderer)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void runOnSurfaceCreated(BoxValue renderer) { return runOnSurfaceCreated(JavaBoxes::toObject(renderer)); }
    public: template<typename BoxElement> void runOnSurfaceCreated(const std::vector<BoxElement>& renderer) { return runOnSurfaceCreated(JavaBoxes::toObject(renderer)); }

    public: void runOnSurfaceChanged(Object* renderer, int32_t width, int32_t height);
    public: void runOnSurfaceChanged(const std::string& renderer, int32_t width, int32_t height) { return runOnSurfaceChanged(JavaString::box(renderer), width, height); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void runOnSurfaceChanged(BoxValue renderer, int32_t width, int32_t height) { return runOnSurfaceChanged(JavaBoxes::toObject(renderer), width, height); }
    public: template<typename BoxElement> void runOnSurfaceChanged(const std::vector<BoxElement>& renderer, int32_t width, int32_t height) { return runOnSurfaceChanged(JavaBoxes::toObject(renderer), width, height); }

    public: void run(Object* renderer);
    public: void run(const std::string& renderer) { return run(JavaString::box(renderer)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void run(BoxValue renderer) { return run(JavaBoxes::toObject(renderer)); }
    public: template<typename BoxElement> void run(const std::vector<BoxElement>& renderer) { return run(JavaBoxes::toObject(renderer)); }

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_THREED_GLHOLDER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_THREED_GLHOLDER_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_THREED_GLHOLDER_H_COMPLETE
        
        #endif
    
