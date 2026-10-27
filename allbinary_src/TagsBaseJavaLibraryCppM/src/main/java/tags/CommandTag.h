
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
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
        



        #ifndef TAGS_COMMANDTAG_H
        #define TAGS_COMMANDTAG_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "tags/CustomTagSupport.h"
class TagStrings;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CommandTag: public CustomTagSupport {

    /*protected*/ public: TagStrings* tagStrings;

    private: std::string command;

public: CommandTag();

    public: void setCommand(std::string command);

    public: std::string getCommand();

};

            


        #endif //TAGS_COMMANDTAG_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(TAGS_COMMANDTAG_H_COMPLETE)
        #define TAGS_COMMANDTAG_H_COMPLETE
        #if __has_include("tags/CustomTagSupport.h")
#include "tags/CustomTagSupport.h"
#endif
#if __has_include("tags/TagStrings.h")
#include "tags/TagStrings.h"
#endif

        #endif
    
