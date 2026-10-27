
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_COMMAND_MYCOMMANDSFACTORY_H
        #define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_COMMAND_MYCOMMANDSFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Command;
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MyCommandsFactory
            : public virtual Object
         {

    private: static MyCommandsFactory* instance_owner();
    private: static MyCommandsFactory* instance;

    public: static MyCommandsFactory* getInstance();

    public: Command* NO_COMMAND;

    public: Command* GAUGE_CHANGE;

    public: Command* SET_DISPLAYABLE;

    public: Command* PAUSE_COMMAND;

    public: Command* RESUME_COMMAND;

/*protected*/ public: MyCommandsFactory();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_COMMAND_MYCOMMANDSFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_COMMAND_MYCOMMANDSFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_COMMAND_MYCOMMANDSFACTORY_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Command.h>)
#include <javax/microedition/lcdui/Command.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif

        #endif
    
