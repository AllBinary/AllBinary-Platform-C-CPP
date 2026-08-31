
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
        



            #include "../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CachePolicy
            : public Object
         {
        

    private: const name: string;

    private: maxTime: int64_t= 0;

    private: maxSize: int64_t= 0;

public constructor (string name, int64_t maxTime, int64_t maxSize){

            super();
        this.name= name;
    
this.setMaxTime(maxTime);
    
this.setMaxSize(maxSize);
    
}


    public int64_t getMaxTime(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.maxTime;
    
}


    public setMaxTime(int64_t maxTime){
this.maxTime= maxTime;
    
}


    public int64_t getMaxSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.maxSize;
    
}


    public setMaxSize(int64_t maxSize){
this.maxSize= maxSize;
    
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.name;
    
}


};

            

