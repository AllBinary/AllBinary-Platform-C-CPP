
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_TIME_GAMETICKTIMEDELAYHELPER_CPP
        #define ORG_ALLBINARY_TIME_GAMETICKTIMEDELAYHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/time/GameTickTimeDelayHelper.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/System.h"
        
            #include "java/lang/Long.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

GameTickTimeDelayHelper::GameTickTimeDelayHelper(int64_t startTime){
this->startTime= startTime;
    
this->lastStartTime= 0;
    
}


    auto GameTickTimeDelayHelper::setStartTime() -> int64_t{
this->startTime= System.currentTimeMillis();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->startTime;
    
}


    auto GameTickTimeDelayHelper::loop() -> void{

                        if(this->lastStartTime == Long.MIN_VALUE)
                        
                                    {
                                    this->timeDelta= 0;
    

                                    }
                                
                        else {
                            this->timeDelta= System.currentTimeMillis() -this->lastStartTime;
    

                        }
                            
}


    auto GameTickTimeDelayHelper::getTimeFromStart() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->startTime -this->lastStartTime;
    
}




        #endif //ORG_ALLBINARY_TIME_GAMETICKTIMEDELAYHELPER_CPP
