
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
        



        #ifndef ORG_ALLBINARY_GAME_INTERMISSION_CPP
        #define ORG_ALLBINARY_GAME_INTERMISSION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/Intermission.h"
        

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


Intermission::Intermission() : timeElapsedHelper(new TimeDelayHelper(0)), intermissionEnableListener(NullIntermissionEnableListener::getInstance()){
}


    auto Intermission::setListener(IntermissionEnableListenerInterface* enableListener) -> void{
this->intermissionEnableListener= enableListener;
    
}


    auto Intermission::getTimeDelayHelper() -> TimeDelayHelper*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->timeElapsedHelper;
    
}


    auto Intermission::setEnabled(bool enabled) -> void{
this->enabled= enabled;
    

                        if(this->isEnabled())
                        
                                    {
                                    this->getTimeDelayHelper()->setStartTimeTNT();
    

                                    }
                                
this->intermissionEnableListener->notifyIntermission(enabled);
    
}


    auto Intermission::isEnabled() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->enabled;
    
}




        #endif //ORG_ALLBINARY_GAME_INTERMISSION_CPP
