
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/IntermissionInterface.h"
#include "org/allbinary/game/NullIntermissionEnableListener.h"
#include "org/allbinary/game/IntermissionEnableListenerInterface.h"

class Intermission
            : public Object
        , public IntermissionInterface {

    private: bool enabled= false;

    private: TimeDelayHelper* timeElapsedHelper = new TimeDelayHelper(0);

    private: IntermissionEnableListenerInterface* intermissionEnableListener = NullIntermissionEnableListener::getInstance();

public: Intermission(){
}


    public: void setListener(IntermissionEnableListenerInterface* enableListener){
this->intermissionEnableListener= enableListener;
    
}


    public: TimeDelayHelper* getTimeDelayHelper(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->timeElapsedHelper;
    
}


    public: void setEnabled(bool enabled){
this->enabled= enabled;
    

                        if(this->isEnabled())
                        
                                    {
                                    this->getTimeDelayHelper()->setStartTimeTNT();
    

                                    }
                                
this->intermissionEnableListener->notifyIntermission(enabled);
    
}


    public: bool isEnabled(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->enabled;
    
}


};

            

