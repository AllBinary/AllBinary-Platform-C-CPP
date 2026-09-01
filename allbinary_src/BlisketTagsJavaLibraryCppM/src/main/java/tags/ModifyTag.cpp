
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
        



            #include "../java/lang/Class.h"
        
            #include "../java/lang/Exception.h"
        
#include <java/lang/reflect/Method.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/JspTagException.h>

      
#include <admin/taghelpers/TagHelperFactoryInterface.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HelperTag.h"

class ModifyTag: public HelperTag {

    protected: const LogUtil logUtil = LogUtil::getInstance();

public: ModifyTag(TagHelperFactoryInterface tagHelperFactoryInterface){
            super(tagHelperFactoryInterface);
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().JSPTAG))
                        
                                    {
                                    this->logUtil.putF(this->commonStrings.START, this, this->commonStrings.CONSTRUCTOR);
    

                                    }
                                
}


                //@Throws(LicensingException.constructor)
            
    public: std::string insert(){

        try {
            
    Function helperClass = this->getHelper().constructor;;
    

    Method method = helperClass.getMethod("insert", 
                            nullptr);;
    

    std::string result = method.invoke(this->getHelper(), 
                            nullptr) as string;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(e) 
            {

    std::string error = "Failed to insert";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "insert()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


                //@Throws(LicensingException.constructor)
            
    public: std::string delete_(){

        try {
            
    Function helperClass = this->getHelper().constructor;;
    

    Method method = helperClass.getMethod(commonStrings.delete_, 
                            nullptr);;
    

    std::string result = method.invoke(this->getHelper(), 
                            nullptr) as string;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(e) 
            {

    std::string error = "Failed to delete";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "delete()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


                //@Throws(LicensingException.constructor)
            
    public: std::string update(){

        try {
            
    Function helperClass = this->getHelper().constructor;;
    

    Method method = helperClass.getMethod("update", 
                            nullptr);;
    

    std::string result = method.invoke(this->getHelper(), 
                            nullptr) as string;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(e) 
            {

    std::string error = "Failed to update";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "update()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


                //@Throws(JspTagException.constructor)
            
    public: int32_t doStartTag(){

        try {
            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().JSPTAG))
                        
                                    {
                                    
    HttpServletRequest request = this->pageContext.getRequest() as HttpServletRequest;;
    

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("Command: ");
    
stringBuffer.append(this->getCommand());
    
stringBuffer.append(" Request URI: ");
    
stringBuffer.append(request.getRequestURI());
    
this->logUtil.putF(stringBuffer.toString(), this, tagStrings.DO_START_TAG);
    

                                    }
                                

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().JSPTAG))
                        
                                    {
                                    
                                    }
                                

                        if(this->getCommand() != 
                                    nullptr
                                )
                        
                                    {
                                    this->setHelper();
    

    CommonStrings commonStrings = CommonStrings::getInstance();;
    

                        if(this->getCommand().compareTo(commonStrings.INSERT) == 0)
                        
                                    {
                                    
    std::string output = this->insert();;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().JSPTAGEXTRAOUTPUT))
                        
                                    {
                                    this->pageContext.getOut().print(output +"<br />");
    

                                    }
                                

                                    }
                                
                             else 
                        if(this->getCommand().compareTo(commonStrings.DELETE) == 0)
                        
                                    {
                                    
    std::string output = this->delete_();;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().JSPTAGEXTRAOUTPUT))
                        
                                    {
                                    this->pageContext.getOut().print(output +"<br />");
    

                                    }
                                

                                    }
                                
                             else 
                        if(this->getCommand().compareTo(commonStrings.UPDATE) == 0)
                        
                                    {
                                    
    std::string output = this->update();;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().JSPTAGEXTRAOUTPUT))
                        
                                    {
                                    this->pageContext.getOut().print(output +"<br />");
    

                                    }
                                

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->EVAL_BODY_INCLUDE;
    

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

            

