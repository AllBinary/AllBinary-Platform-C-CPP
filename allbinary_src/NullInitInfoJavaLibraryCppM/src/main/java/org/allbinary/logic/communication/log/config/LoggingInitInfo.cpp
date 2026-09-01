
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
        



            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LogConfig.h"

class LoggingInitInfo
            : public Object
         {

    private: static BasicArrayList logConfigInfoList = 
                null
            ;

    private: static bool hasRead = false;

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static void write(){

        try {
            LoggingInitInfo::hasRead= false;
    

                //: 
} catch(e) 
            {



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    private: static void read(){

        try {
            
                //: 
} catch(e) 
            {



                            throw e;
                    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static void setHasRead(bool value){
LoggingInitInfo::hasRead= value;
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    private: static void updateIfNeeded(){

                        if(!LoggingInitInfo::hasRead)
                        
                                    {
                                    LoggingInitInfo::read();
    
LoggingInitInfo::hasRead= true;
    

                        if(LoggingInitInfo::logConfigInfoList == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw Exception("Read Failed");
                    

                                    }
                                

                                    }
                                
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static void set(BasicArrayList logConfigInfoList){
LoggingInitInfo::logConfigInfoList= logConfigInfoList;
    
}


                //@Throws(Exception.constructor)
            
    public: static BasicArrayList get(){
LoggingInitInfo::updateIfNeeded();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LoggingInitInfo::logConfigInfoList;
    
}


                //@Throws(Exception.constructor)
            
    public: static BasicArrayList getTypeList(){
LoggingInitInfo::updateIfNeeded();
    

    BasicArrayList allLogTypeVector = BasicArrayListD();;
    

    int32_t size = LoggingInitInfo::logConfigInfoList.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    LogConfig logConfigInfo = LoggingInitInfo::logConfigInfoList.objectArray[index]! as LogConfig;;
    

    BasicArrayList logTypeVector = logConfigInfo.getTypeVector();;
    

                        if(logConfigInfo.isEnabled())
                        
                                    {
                                    allLogTypeVector.addAllList(logTypeVector);
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return allLogTypeVector;
    
}


public: LoggingInitInfo(){
}


    public: bool isValid(){

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                //: 
} catch(e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


                //@Throws(Exception.constructor)
            
    public: int32_t getNumberOfLogConfigs(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LoggingInitInfo::logConfigInfoList.size();;
    
}


    public: std::string toString(){

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    

                //: 
} catch(e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Error";
    
}

}


};

            

