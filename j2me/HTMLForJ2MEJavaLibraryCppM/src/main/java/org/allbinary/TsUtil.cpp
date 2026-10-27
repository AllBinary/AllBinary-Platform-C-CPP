
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
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
            #include "java/lang/InterruptedException.h"
        
            #include "java/lang/Float.h"
        
            #include "java/lang/Double.h"
        
#include <javax/microedition/lcdui/Displayable.h>

      
#include <javax/microedition/lcdui/Form.h>

      
#include <javax/microedition/rms/InvalidRecordIDException.h>

      
#include <javax/microedition/rms/RecordStore.h>

      
#include <javax/microedition/rms/RecordStoreException.h>

      
#include <javax/microedition/rms/RecordStoreNotOpenException.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //HTML

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



                            throw RuntimeException();
                    
}


                //@Throws(RecordStoreNotOpenException.constructor, InvalidRecordIDException.constructor, RecordStoreException.constructor)
            
    auto TsUtil::getRecord(Object* anyType, int32_t recordId) -> std::vector<int8_t>{

    RecordStore* recordStore = dynamic_cast<RecordStore*>(anyType);;
    

    std::vector<int8_t> data;;
    

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this) 

        //mutex.withLock
        
data= std::vector<int8_t>(recordStore->getRecordSize(recordId));
    
recordStore->getRecord(recordId, data, 0);
    





                        //if statement needs to be on the same line and ternary does not work the same way.
                        return data.size() < 1
                        ?       
                                NullUtil::getInstance()->NULL_BYTE_ARRAY
                                :

                            data;

    ;
    
}


    auto TsUtil::compareTo(std::string a, std::string b) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return a.compare(b);;
    
}


    auto TsUtil::equalIgnoreCase(std::string a, std::string b) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return JavaString::equalsIgnoreCase(a, b);;
    
}


    auto TsUtil::equalsNotstring(Object* anyType, Object* object2) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return anyType->equals(object2);;
    
}


    auto TsUtil::toNumberFromChar(char value) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return static_cast<int32_t>(value);
    
}


    auto TsUtil::toNumber(int32_t value) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return value;
    
}


    auto TsUtil::getByteArray(std::string string) -> std::vector<int8_t>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return JavaString::getBytes(string);;
    
}


    auto TsUtil::isItemListener(Displayable* owner) -> bool{

                        if(
                                        (dynamic_cast<const Form*>(owner) != nullptr)
                                    )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    auto TsUtil::gc() -> void{
}




        #endif //ORG_ALLBINARY_TSUTIL_CPP
