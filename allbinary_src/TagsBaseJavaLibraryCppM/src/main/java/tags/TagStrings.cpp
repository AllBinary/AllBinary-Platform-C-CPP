
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
        



        #ifndef TAGS_TAGSTRINGS_CPP
        #define TAGS_TAGSTRINGS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "tags/TagStrings.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

TagStrings::TagStrings() {
        }
        auto TagStrings::instance_owner() -> TagStrings* { static std::unique_ptr<TagStrings> value(new TagStrings()); return value.get(); }
TagStrings* TagStrings::instance = TagStrings::instance_owner();

    auto TagStrings::getInstance() -> TagStrings*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TagStrings::instance;
    
}




        #endif //TAGS_TAGSTRINGS_CPP
