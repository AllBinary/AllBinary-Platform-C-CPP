
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
        



        #ifndef ORG_ALLBINARY_TSUTIL_CPP
        #define ORG_ALLBINARY_TSUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/TsUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/InterruptedException.h"
        
            #include "java/lang/Float.h"
        
            #include "java/lang/Double.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //TempBase

TsUtil::TsUtil() {
        }
        auto TsUtil::instance_owner() -> TsUtil* { static std::unique_ptr<TsUtil> value(new TsUtil()); return value.get(); }
TsUtil* TsUtil::instance = TsUtil::instance_owner();

    auto TsUtil::getInstance() -> TsUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return TsUtil::instance;
    
}


    auto TsUtil::longBitsToDouble(int64_t bits) -> double{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Double.longBitsToDouble(bits);;
    
}


    auto TsUtil::intBitsToFloat(int32_t bits) -> float{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Float.intBitsToFloat(bits);;
    
}


    auto TsUtil::hashCode(Object* anyType) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return anyType->hashCode();;
    
}


                //@Throws(InterruptedException.constructor)
            
    auto TsUtil::waitFor(Object* any, int64_t timeoutMillis) -> void{

    Object* anyType = any;;
    
anyType->wait(timeoutMillis);
    
}


    auto TsUtil::compareTo(std::string a, std::string b) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return a.compare(b);;
    
}




        #endif //ORG_ALLBINARY_TSUTIL_CPP
