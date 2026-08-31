
        /* Generated Code Do Not Modify */
        



        #ifndef JAVAX_MICROEDITION_LCDUI_NULLCOMMANDLISTENER_H
        #define JAVAX_MICROEDITION_LCDUI_NULLCOMMANDLISTENER_H

            #include "../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CommandListener.h"
#include "Command.h"
#include "Displayable.h"

class NullCommandListener
            : public Object
        : public CommandListener {
        

    public static const NULL_COMMAND_LISTENER: NullCommandListener = new NullCommandListener();

    public commandAction(Command c, Displayable d);

};

            


        #endif //JAVAX_MICROEDITION_LCDUI_NULLCOMMANDLISTENER_H
