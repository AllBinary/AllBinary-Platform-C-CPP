
        /* Generated Code Do Not Modify */
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "javax/microedition/lcdui/CommandListener.h"
#include "javax/microedition/lcdui/Command.h"
#include "javax/microedition/lcdui/Displayable.h"

class NullCommandListener
            : public Object
        , public CommandListener {

    public: static NullCommandListener* NULL_COMMAND_LISTENER() { static std::unique_ptr<NullCommandListener> value(new NullCommandListener()); return value.get(); }

    public: void commandAction(Command* c, Displayable* d){
}


};

            

