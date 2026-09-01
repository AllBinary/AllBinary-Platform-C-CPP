
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Class.h"
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Integer.h"
        
#include <java/lang/reflect/Method.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "WorkFlowInterface.h"

class WorkFlowWrapper
            : public Object
        : public WorkFlowInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

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
            
    Function helperClass = this->anyType.constructor;;
    

    Method method = helperClass.getMethod("getName", 
                            nullptr);;
    

    std::string result = method.invoke(this->anyType, 
                            nullptr) as string;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(e) 
            {

    std::string error = "Reflection Exception";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "getName()", e);
    

                                    }
                                



                            throw Exception(error);
                    
}

}


                //@Throws(Exception.constructor)
            
    public: std::string getStoreName(){

        try {
            
    Function helperClass = this->anyType.constructor;;
    

    Method method = helperClass.getMethod("getStoreName", 
                            nullptr);;
    

    std::string result = method.invoke(this->anyType, 
                            nullptr) as string;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(e) 
            {

    std::string error = "Reflection Exception";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "getStoreName()", e);
    

                                    }
                                



                            throw Exception(error);
                    
}

}


                //@Throws(Exception.constructor)
            
    public: Integer process(){

        try {
            
    Function helperClass = this->anyType.constructor;;
    

    Method method = helperClass.getMethod(this->commonStrings.PROCESS, 
                            nullptr);;
    

    Integer result = method.invoke(this->anyType, 
                            nullptr) as Integer;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(e) 
            {

    std::string error = "Reflection Exception";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.PROCESS, e);
    

                                    }
                                



                            throw Exception(error);
                    
}

}


};

            

