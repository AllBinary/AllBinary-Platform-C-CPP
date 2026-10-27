
        /* Generated Code Do Not Modify */
        



        #ifndef JAVAX_MICROEDITION_LCDUI_NULLCOMMANDLISTENER_H
        #define JAVAX_MICROEDITION_LCDUI_NULLCOMMANDLISTENER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "javax/microedition/lcdui/CommandListener.h"
class Command;
class Displayable;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NullCommandListener
            : public virtual Object
        , public CommandListener {

    private: static NullCommandListener* NULL_COMMAND_LISTENER_owner();
    public: static NullCommandListener* NULL_COMMAND_LISTENER;


            
    public: NullCommandListener();
        
    public: void commandAction(Command* c, Displayable* d);

};

            


        #endif //JAVAX_MICROEDITION_LCDUI_NULLCOMMANDLISTENER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(JAVAX_MICROEDITION_LCDUI_NULLCOMMANDLISTENER_H_COMPLETE)
        #define JAVAX_MICROEDITION_LCDUI_NULLCOMMANDLISTENER_H_COMPLETE
        #if __has_include("javax/microedition/lcdui/CommandListener.h")
#include "javax/microedition/lcdui/CommandListener.h"
#endif
#if __has_include("javax/microedition/lcdui/Command.h")
#include "javax/microedition/lcdui/Command.h"
#endif
#if __has_include("javax/microedition/lcdui/Displayable.h")
#include "javax/microedition/lcdui/Displayable.h"
#endif

        #endif
    
