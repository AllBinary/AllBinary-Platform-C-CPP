
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
        



            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/InterruptedException.h"
        
            #include "java/lang/System.h"
        
#include <javax/microedition/lcdui/Displayable.h>

      
#include <javax/microedition/lcdui/Form.h>

      
#include <javax/microedition/rms/InvalidRecordIDException.h>

      
#include <javax/microedition/rms/RecordStore.h>

      
#include <javax/microedition/rms/RecordStoreException.h>

      
#include <javax/microedition/rms/RecordStoreNotOpenException.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //J2ME
class TsUtil
            : public Object
         {

    private: static TsUtil* instance() { static std::unique_ptr<TsUtil> value(new TsUtil()); return value.get(); }

    public: static TsUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TsUtil::instance();
    
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


                //@Throws(RecordStoreNotOpenException.constructor, InvalidRecordIDException.constructor, RecordStoreException.constructor)
            
    public: std::vector<int8_t> getRecord(Object* anyType, int32_t recordId){

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


    public: int32_t compareTo(std::string a, std::string b){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return a.compare(b);;
    
}


    public: bool equalIgnoreCase(std::string a, std::string b){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return JavaString::equalsIgnoreCase(a, b);;
    
}


    public: bool equalsNotstring(Object* anyType, Object* object2){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return anyType === object2;;
    
}


    public: int32_t toNumberFromChar(char value){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return static_cast<int32_t>(value);
    
}


    public: int32_t toNumber(int32_t value){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return value;
    
}


    public: std::vector<int8_t> getByteArray(std::string string){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return JavaString::getBytes(string);;
    
}


    public: bool isItemListener(Displayable* owner){

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


    public: void printAvailableMethods(Object* anyType){
}


    public: void gc(){
System.gc();
    
}


};

            

