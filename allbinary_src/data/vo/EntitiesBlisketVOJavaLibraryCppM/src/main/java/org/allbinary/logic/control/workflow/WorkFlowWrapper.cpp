
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
        
            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/lang/reflect/Method.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/control/workflow/WorkFlowInterface.h"

class WorkFlowWrapper
            : public Object
        , public WorkFlowInterface {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: Object* anyType;

public: WorkFlowWrapper(Object* anyType){
this->anyType= anyType;
    
}


    protected: Object* getWorkFlowObject(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->anyType;
    
}


                //@Throws(Exception.constructor)
            
    public: std::string getName(){

        try {
            
    Class* helperClass = this->anyType->getClass();;
    

    Method* method = helperClass->getMethod("getName", 
                            nullptr);;
    

    std::string result = method->invoke(this->anyType, 
                            nullptr);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Reflection Exception";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "getName()", &e);
    

                                    }
                                



                            throw new Exception(error);
                    
}

}


                //@Throws(Exception.constructor)
            
    public: std::string getStoreName(){

        try {
            
    Class* helperClass = this->anyType->getClass();;
    

    Method* method = helperClass->getMethod("getStoreName", 
                            nullptr);;
    

    std::string result = method->invoke(this->anyType, 
                            nullptr);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Reflection Exception";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "getStoreName()", &e);
    

                                    }
                                



                            throw new Exception(error);
                    
}

}


                //@Throws(Exception.constructor)
            
    public: int32_t process(){

        try {
            
    Class* helperClass = this->anyType->getClass();;
    

    Method* method = helperClass->getMethod(this->commonStrings->PROCESS, 
                            nullptr);;
    

    int32_t result = method->invoke(this->anyType, 
                            nullptr);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Reflection Exception";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->PROCESS, &e);
    

                                    }
                                



                            throw new Exception(error);
                    
}

}


};

            

