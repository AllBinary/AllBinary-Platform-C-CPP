
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
        
            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
#include <java/lang/reflect/Method.h>

      
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/JspTagException.h>

      
#include <admin/taghelpers/CustomLoaderHelperFactory.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <tags/CustomTagSupport.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CustomLoaderTag: public CustomTagSupport {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: std::string command;

    private: std::string webappPath;

    private: HashMap<Object*, Object*> propertiesHashMap;

public: CustomLoaderTag(){
}


    public: void setCommand(std::string command){
this->command= command;
    
}


    public: void setWebappPath(std::string value){
this->webappPath= value;
    
}


                //@Throws(LicensingException.constructor)
            
    private: void setCustomLoaderWebappPath(){

        try {
            
    Object* anyType = CustomLoaderHelperFactory().getInstance(this->propertiesHashMap, pageContext);;
    

    Class* helperClass = anyType->getClass();;
    

    std::vector<Class*> methodParams = 
                                                        {
                                                            this->webappPath.getClass()
                                                        };;
    

    std::vector<Object*> methodArgs = 
                                                        {
                                                            this->webappPath
                                                        };;
    

    Method setMethod = helperClass.getMethod("setWebappPath", methodParams);;
    
setMethod.invoke(anyType, methodArgs);
    

                //: 
} catch(e) 
            {



                            throw e;
                    
}

                //: 
/* catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().JSPTAGERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "setCustomLoaderWebappPath()", e);
    

                                    }
                                
}
*/
}


                //@Throws(JspTagException.constructor)
            
    public: int32_t doStartTag(){

        try {
            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().JSPTAG))
                        
                                    {
                                    this->logUtil.putF(this->commonStrings.START, this, tagStrings.DO_START_TAG);
    

                                    }
                                

                        if(true)
                        
                                    {
                                    this->propertiesHashMap= StdUtil::getInstance().createHashMap();
    

                        if(this->command.compare(org.allbinary.globals.GLOBALS2.SET) == 0)
                        
                                    {
                                    this->setCustomLoaderWebappPath();
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SKIP_BODY;
    

                //: 
} catch(e) 
            {
AbResponseHandler::sendJspTagLicensingRedirect(this->pageContext, e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SKIP_BODY;
    
}

                //: 
/* catch(e) 
            {
AbResponseHandler::sendJspTagRedirect(this->pageContext, e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SKIP_BODY;
    
}
*/
}


};

            

