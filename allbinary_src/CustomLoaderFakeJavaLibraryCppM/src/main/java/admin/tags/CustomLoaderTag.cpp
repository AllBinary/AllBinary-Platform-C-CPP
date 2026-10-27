
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

        
            #include "java/lang/Exception.h"
        
#include <javax/servlet/jsp/JspTagException.h>

      
#include <org/allbinary/globals/AppUrlGlobals.h>

      
#include <org/allbinary/globals/GLOBALS2.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <tags/CustomTagSupport.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CustomLoaderTag: public CustomTagSupport {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: std::string command;

    private: std::string webappPath;

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
            
    AppUrlGlobals* urlGlobals = new AppUrlGlobals();;
    
urlGlobals->setWebappPath(this->webappPath);
    
URLGLOBALS::init(urlGlobals);
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->JSPTAGERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings.EXCEPTION, this, "setCustomLoaderWebappPath()", &e);
    

                                    }
                                
}

}


                //@Throws(JspTagException.constructor)
            
    public: int32_t doStartTag(){

        try {
            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->JSPTAG))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings.START, this, tagStrings.DO_START_TAG);
    

                                    }
                                

                        if(true)
                        
                                    {
                                    
                        if(this->command.compare(GLOBALS2::SET) == 0)
                        
                                    {
                                    this->setCustomLoaderWebappPath();
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SKIP_BODY;
    

                //: 
} catch(LicensingException& e) 
            {
AbResponseHandler::sendJspTagLicensingRedirect(this->pageContext, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SKIP_BODY;
    
}

                //: 
 catch(Exception& e) 
            {
AbResponseHandler::sendJspTagRedirect(this->pageContext, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SKIP_BODY;
    
}

}


};

            

