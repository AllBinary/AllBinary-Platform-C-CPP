
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/log/Log.h"

class LogBuffer
            : public Object
         {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    BasicArrayList* logEntryVector;

public: LogBuffer(){
this->logEntryVector= new BasicArrayListD();
    
}


    public: void add(Log* log){
this->logEntryVector->add(log);
    
}


    public: void logAll(){

    int32_t size = this->logEntryVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Log* log = dynamic_cast<Log*>(this->logEntryVector->get(index));;
    
this->logUtil->putL(log);
    
}

}


};

            

