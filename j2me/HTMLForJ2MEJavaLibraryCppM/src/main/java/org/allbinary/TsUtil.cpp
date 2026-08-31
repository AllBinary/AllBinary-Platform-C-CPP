
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
        



            #include "../../java/lang/Object.h"
        
            #include "../../java/lang/RuntimeException.h"
        
            #include "../../java/lang/InterruptedException.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Displayable.h>

      
#include <javax/microedition/lcdui/Form.h>

      
#include <javax/microedition/rms/InvalidRecordIDException.h>

      
#include <javax/microedition/rms/RecordStore.h>

      
#include <javax/microedition/rms/RecordStoreException.h>

      
#include <javax/microedition/rms/RecordStoreNotOpenException.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TsUtil
            : public Object
         {
        

    private: static const instance: TsUtil = new TsUtil();

    public static TsUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TsUtil.instance;
    
}


    public int32_t hashCode(any = {} anyType){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return anyType!.hashCode();;
    
}


                //@Throws(InterruptedException.constructor)
            
    public waitFor(any = {} any, int64_t timeoutMillis){



                            throw new RuntimeException();
                    
}


                //@Throws(RecordStoreNotOpenException.constructor, InvalidRecordIDException.constructor, RecordStoreException.constructor)
            
    public std::vector<int8_t> getRecord(any = {} anyType, int32_t recordId){

    recordStore: RecordStore = anyType as RecordStore;;
    

    data: std::vector<int8_t>;;
    

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this) 

        //mutex.withLock
        
data= new Array(recordStore!.getRecordSize(recordId));
    
recordStore!.getRecord(recordId, data, 0);
    





                        //if statement needs to be on the same line and ternary does not work the same way.
                        return data.length < 1
                        ?       
                                NullUtil.getInstance()!.NULL_BYTE_ARRAY
                                :

                            data;

    ;
    
}


    public int32_t compareTo(string a, string b){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return a.compareTo(b);;
    
}


    public bool equalIgnoreCase(string a, string b){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return a.equalsIgnoreCase(b);;
    
}


    public bool equalsNotstring(any = {} anyType, any = {} object2){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return anyType! === object2;;
    
}


    public int32_t toNumberFromChar(char value){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return static_cast<int32_t>(value);
    
}


    public int32_t toNumber(int32_t value){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return value;
    
}


    public std::vector<int8_t> getByteArray(string string){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return string.getBytes();;
    
}


    public bool isItemListener(Displayable owner){

                        if(owner instanceof Form)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


};

            

