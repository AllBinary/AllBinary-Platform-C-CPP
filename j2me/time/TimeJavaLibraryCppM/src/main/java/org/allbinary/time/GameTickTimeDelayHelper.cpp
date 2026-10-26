
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/System.h"
        
            #include "java/lang/Long.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameTickTimeDelayHelper
            : public Object
         {

    public: int64_t timeDelta= 0;

    public: int64_t startTime;

    public: int64_t lastStartTime;

public: GameTickTimeDelayHelper(int64_t startTime){
this->startTime= startTime;
    
this->lastStartTime= 0;
    
}


    public: int64_t setStartTime(){
this->startTime= System.currentTimeMillis();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->startTime;
    
}


    public: void loop(){

                        if(this->lastStartTime == Long::MIN_VALUE)
                        
                                    {
                                    this->timeDelta= 0;
    

                                    }
                                
                        else {
                            this->timeDelta= System.currentTimeMillis() -this->lastStartTime;
    

                        }
                            
}


    public: int64_t getTimeFromStart(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->startTime -this->lastStartTime;
    
}


};

            

