
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_SCREENINFO_CPP
        #define ORG_ALLBINARY_GRAPHICS_FORM_SCREENINFO_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/form/ScreenInfo.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ScreenInfo::ScreenInfo() {
        }
        auto ScreenInfo::instance_owner() -> ScreenInfo* { static std::unique_ptr<ScreenInfo> value(new ScreenInfo()); return value.get(); }
ScreenInfo* ScreenInfo::instance = ScreenInfo::instance_owner();

    auto ScreenInfo::getInstance() -> ScreenInfo*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ScreenInfo::instance;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_FORM_SCREENINFO_CPP
