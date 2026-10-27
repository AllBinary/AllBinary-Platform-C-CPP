
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_ANDROIDRESOURCES_CPP
        #define ORG_ALLBINARY_ANDROIDRESOURCES_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/AndroidResources.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/testgamedemo/R.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

AndroidResources::AndroidResources() : drawable(new R::Companion::drawable()), id(new R::Companion::id()), layout(new R::Companion::layout()), raw(new R::Companion::raw()), string(new R::Companion::string()) {
        }
        auto AndroidResources::instance_owner() -> AndroidResources* { static std::unique_ptr<AndroidResources> value(new AndroidResources()); return value.get(); }
AndroidResources* AndroidResources::instance = AndroidResources::instance_owner();

    auto AndroidResources::getInstance() -> AndroidResources*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AndroidResources::instance;
    
}




        #endif //ORG_ALLBINARY_ANDROIDRESOURCES_CPP
