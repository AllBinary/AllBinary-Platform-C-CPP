
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
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LogUtil.h"
#include "Log.h"

class LogBuffer
            : public Object
         {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    BasicArrayList logEntryVector;

public: LogBuffer(){
this->logEntryVector= BasicArrayListD();
    
}


    public: void add(Log log){
this->logEntryVector.add(log);
    
}


    public: void logAll(){

    int32_t size = this->logEntryVector.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Log log = this->logEntryVector.get(index);;
    
this->logUtil.putL(log);
    
}

}


};

            

