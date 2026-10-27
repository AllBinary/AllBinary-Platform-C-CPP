
        /* Generated Code Do Not Modify */
        



        #ifndef JAVAX_MICROEDITION_LCDUI_NULLCOMMANDLISTENER_CPP
        #define JAVAX_MICROEDITION_LCDUI_NULLCOMMANDLISTENER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "javax/microedition/lcdui/NullCommandListener.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "javax/microedition/lcdui/CommandListener.h"
#include "javax/microedition/lcdui/Command.h"
#include "javax/microedition/lcdui/Displayable.h"


NullCommandListener::NullCommandListener() {
        }
        auto NullCommandListener::NULL_COMMAND_LISTENER_owner() -> NullCommandListener* { static std::unique_ptr<NullCommandListener> value(new NullCommandListener()); return value.get(); }
NullCommandListener* NullCommandListener::NULL_COMMAND_LISTENER = NullCommandListener::NULL_COMMAND_LISTENER_owner();

    auto NullCommandListener::commandAction(Command* c, Displayable* d) -> void{
}




        #endif //JAVAX_MICROEDITION_LCDUI_NULLCOMMANDLISTENER_CPP
