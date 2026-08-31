
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
        



            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AnalogControllerConfigurationEventListenerInterface.h"
#include "AnalogControllerConfigurationEvent.h"

class AnalogControllerConfigurationEventHandler: public BasicEventHandler {
        

    private: static const instance: AnalogControllerConfigurationEventHandler = new AnalogControllerConfigurationEventHandler();

    public static AnalogControllerConfigurationEventHandler getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AnalogControllerConfigurationEventHandler.instance;
    
}


    private: const list: BasicArrayList = new BasicArrayListD();

private constructor (){

            super();
        }


    public addListener(AnalogControllerConfigurationEventListenerInterface analogControllerConfigurationEventListenerInterface){

                        if(!this.list.contains(analogControllerConfigurationEventListenerInterface))
                        
                                    {
                                    this.list.add(analogControllerConfigurationEventListenerInterface);
    

                                    }
                                
}


    public removeAllListeners(){
this.list.clear();
    
super.removeAllListeners();
    
}


    public removeListener(EventListenerInterface eventListenerInterface){
this.list.remove(eventListenerInterface);
    
super.removeListener(eventListenerInterface);
    
}


                //@Throws(Exception.constructor)
            
    public fireEvent(AllBinaryEventObject eventObject){




                        for (
    index: int32_t = this.list.size()!;--index >= 0; )
        {

        try {
            
    playerGameInput: AnalogControllerConfigurationEventListenerInterface = this.list.objectArray[index]! as AnalogControllerConfigurationEventListenerInterface;;
    
playerGameInput!.onAnalogControllerConfigurationEvent(eventObject as AnalogControllerConfigurationEvent);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, EventStrings.getInstance()!.FIRE_EVENT, e);
    
}

}

super.fireEvent(eventObject);
    
}


                //@Throws(Exception.constructor)
            
    process(AllBinaryEventObject eventObject, EventListenerInterface eventListenerInterface){

    analogControllerConfigurationEventListenerInterface: AnalogControllerConfigurationEventListenerInterface = (eventListenerInterface as AnalogControllerConfigurationEventListenerInterface);;
    
analogControllerConfigurationEventListenerInterface!.onAnalogControllerConfigurationEvent(eventObject as AnalogControllerConfigurationEvent);
    
}


};

            

