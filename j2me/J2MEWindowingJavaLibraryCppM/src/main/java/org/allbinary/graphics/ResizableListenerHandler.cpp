
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
        



            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ResizableListenerInterface.h"

class ResizableListenerHandler
            : public Object
         {

    private: static ResizableListenerHandler instance() { return ResizableListenerHandler(); }

    public: static ResizableListenerHandler getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ResizableListenerHandler::instance();
    
}


    public: void setListener(ResizableListenerInterface resizableListenerInterface){
}


    public: void fire(bool isFullScreen){
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void fireEvent(bool value){
}


};

            

