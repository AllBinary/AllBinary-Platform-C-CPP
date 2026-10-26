
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
        



            #include "java/lang/Exception.h"
        
#include <org/allbinary/business/advertisement/GameAdStateBase.h>

      
#include <org/allbinary/business/advertisement/AdConfiguration.h>

      
#include <org/allbinary/input/event/VirtualKeyboardEvent.h>

      
#include <org/allbinary/input/event/VirtualKeyboardEventHandler.h>

      
#include <org/allbinary/input/event/VirtualKeyboardEventListenerInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameAdState: public GameAdStateBase, public VirtualKeyboardEventListenerInterface {

public: GameAdState(AdConfiguration adConfiguration) : GameAdStateBase(adConfiguration){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
VirtualKeyboardEventHandler::getInstance().addListenerInterface(this);
    
}


                //@Throws(Exception.constructor)
            
    public: void onVirtualKeyboardEvent(VirtualKeyboardEvent virtualKeyboardEvent){
}


};

            

