
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        
            #include "java/lang/InterruptedException.h"
        
            #include "java/lang/Float.h"
        
            #include "java/lang/Double.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //TempBase
class TsUtil
            : public Object
         {

    private: static TsUtil instance() { return TsUtil(); }

    public: static TsUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TsUtil::instance();
    
}


    public: double longBitsToDouble(int64_t bits){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Double.longBitsToDouble(bits);;
    
}


    public: float intBitsToFloat(int32_t bits){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Float.intBitsToFloat(bits);;
    
}


    public: int32_t hashCode(Object* anyType){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return anyType->hashCode();;
    
}


                //@Throws(InterruptedException.constructor)
            
    public: void waitFor(Object* any, int64_t timeoutMillis){

    Object* anyType = any;;
    
;
    
}


    public: int32_t compareTo(std::string a, std::string b){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return a.compare(b);;
    
}


};

            

