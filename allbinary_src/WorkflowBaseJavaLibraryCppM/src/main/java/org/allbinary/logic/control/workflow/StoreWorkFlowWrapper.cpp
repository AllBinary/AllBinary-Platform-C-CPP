
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
        



            #include "../../../../../java/lang/Class.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <java/lang/reflect/Method.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "WorkFlowWrapper.h"

class StoreWorkFlowWrapper: public WorkFlowWrapper {

    protected: const LogUtil logUtil = LogUtil::getInstance();

public: StoreWorkFlowWrapper(Object* anyType){
            super(anyType);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    public: std::string getStoreName(){

        try {
            
    Function helperClass = this->getWorkFlowObject().constructor;;
    

    Method method = helperClass.getMethod("getStoreName", 
                            nullptr);;
    

    std::string result = method.invoke(this->getWorkFlowObject(), 
                            nullptr) as string;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(e) 
            {

    std::string error = "Reflection Exception";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    
    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(commonStrings.EXCEPTION, this, "getStoreName()", e);
    

                                    }
                                



                            throw Exception(error);
                    
}

}


};

            

