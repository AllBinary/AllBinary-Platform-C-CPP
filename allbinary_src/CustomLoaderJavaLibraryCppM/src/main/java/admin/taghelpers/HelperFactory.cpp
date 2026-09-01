
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
        



            #include <vector>
        
            #include "../../java/lang/Object.h"
        
            #include "../../java/lang/Class.h"
        
            #include "../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/loader/AbeFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HelperFactory
            : public Object
         {

                //@Throws(LicensingException.constructor)
            
    public: static Object* getInstance(AbeClientInformationInterface abeClientInformation, std::string factoryName, std::string className, HashMap<any, any> hashMap, HttpServletRequest httpServletRequest){

    LogUtil logUtil = LogUtil::getInstance();;
    

        try {
            
    std::vector<Object*> params = new Array(2);;
    

    std::vector<Function> classes = new Array(2);;
    

    AbeFactory abeFactory = AbeFactory::getInstance();;
    
classes[0]= hashMap.constructor;
    
classes[1]= abeFactory.constructor;
    
params[0]= hashMap;
    
params[1]= httpServletRequest;
    

    Object* anyType = abeFactory.getInstance(abeClientInformation, className, classes, params);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return anyType;
    

                //: 
} catch(e) 
            {

    std::string error = "Failed To Get Instance Args: HashMap=" +hashMap.toString() +" HttpServletRequest=" +httpServletRequest;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPERFACTORYERROR))
                        
                                    {
                                    logUtil.put(error, factoryName +"->HelperFactory", "getInstance(String, String, HashMap, PageContext)", e);
    

                                    }
                                



                            throw e;
                    
}

                //: 
/* catch(e) 
            {

    std::string error = "Failed To Get Instance";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPERFACTORYERROR))
                        
                                    {
                                    logUtil.put(error, factoryName +"->HelperFactory", "getInstance(String, String, HashMap, PageContext)", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}
*/
}


                //@Throws(LicensingException.constructor)
            
    public: static Object* getInstance(AbeClientInformationInterface abeClientInformation, std::string factoryName, std::string className, HashMap<any, any> hashMap, PageContext pageContext){

    LogUtil logUtil = LogUtil::getInstance();;
    

        try {
            
    std::vector<Object*> params = new Array(2);;
    

    std::vector<Function> classes = new Array(2);;
    

    AbeFactory abeFactory = AbeFactory::getInstance();;
    
classes[0]= hashMap.constructor;
    
classes[1]= abeFactory.constructor;
    
params[0]= hashMap;
    
params[1]= pageContext;
    

    Object* anyType = abeFactory.getInstance(abeClientInformation, className, classes, params);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return anyType;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPERFACTORYERROR))
                        
                                    {
                                    
    std::string error = "Failed To Get Instance Args: HashMap=" +hashMap.toString() +" PageContext=" +pageContext;;
    
logUtil.put(error, factoryName +"->HelperFactory", "getInstance(String, String, HashMap, PageContext)", e);
    

                                    }
                                



                            throw e;
                    
}

                //: 
/* catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPERFACTORYERROR))
                        
                                    {
                                    
    CommonStrings commonStrings = CommonStrings::getInstance();;
    
logUtil.put(commonStrings.EXCEPTION, factoryName +"->HelperFactory", "getInstance(String, String, HashMap, PageContext)", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}
*/
}


                //@Throws(LicensingException.constructor)
            
    public: static Object* getInstance(AbeClientInformationInterface abeClientInformation, std::string factoryName, std::string className, HashMap<any, any> hashMap, HashMap<any, any> specialhashMap, PageContext pageContext){

    LogUtil logUtil = LogUtil::getInstance();;
    

        try {
            
    std::vector<Object*> params = new Array(3);;
    

    std::vector<Function> classes = new Array(3);;
    

    AbeFactory abeFactory = AbeFactory::getInstance();;
    
classes[0]= hashMap.constructor;
    
classes[1]= specialhashMap.constructor;
    
classes[2]= abeFactory.constructor;
    
params[0]= hashMap;
    
params[1]= specialhashMap;
    
params[2]= pageContext;
    

    Object* anyType = abeFactory.getInstance(abeClientInformation, className, classes, params);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return anyType;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPERFACTORYERROR))
                        
                                    {
                                    
    std::string error = "Failed To Get Instance Args: HashMap=" +hashMap.toString() +" PageContext=" +pageContext;;
    
logUtil.put(error, factoryName +"->HelperFactory", "getInstance(String, String, HashMap, PageContext)", e);
    

                                    }
                                



                            throw e;
                    
}

                //: 
/* catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPERFACTORYERROR))
                        
                                    {
                                    
    CommonStrings commonStrings = CommonStrings::getInstance();;
    
logUtil.put(commonStrings.EXCEPTION, factoryName +"->HelperFactory", "getInstance(String, String, HashMap, PageContext)", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}
*/
}


                //@Throws(LicensingException.constructor)
            
    public: static Object* getInstance(AbeClientInformationInterface abeClientInformation, std::string factoryName, std::string className){

    LogUtil logUtil = LogUtil::getInstance();;
    

        try {
            
    Object* anyType = AbeFactory::getInstance().getInstance(abeClientInformation, className);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return anyType;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPERFACTORYERROR))
                        
                                    {
                                    
    CommonStrings commonStrings = CommonStrings::getInstance();;
    
logUtil.put(commonStrings.EXCEPTION, factoryName +"->HelperFactory", "getInstance(String, String, HashMap, PageContext)", e);
    

                                    }
                                



                            throw e;
                    
}

                //: 
/* catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPERFACTORYERROR))
                        
                                    {
                                    
    CommonStrings commonStrings = CommonStrings::getInstance();;
    
logUtil.put(commonStrings.EXCEPTION, factoryName +"->HelperFactory", "getInstance(String, String, HashMap, PageContext)", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}
*/
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

public: HelperFactory(){
}


};

            

