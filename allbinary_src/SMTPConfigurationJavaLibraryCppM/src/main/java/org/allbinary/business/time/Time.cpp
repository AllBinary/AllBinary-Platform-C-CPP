
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Long.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class Time
            : public Object
         {

    private: Long timeLong;

public: Time(std::string time){
this->timeLong= Long(time);
    
}


public: Time(int64_t time){
this->timeLong= Long(time);
    
}


    public: Long getLong(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->timeLong;
    
}


    public: int64_t getlong(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->timeLong.longValue();;
    
}


    public: std::string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getLong().toString();;
    
}


};

            

