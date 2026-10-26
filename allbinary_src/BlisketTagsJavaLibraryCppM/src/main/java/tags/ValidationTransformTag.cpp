
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
        



            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
#include <java/lang/reflect/Method.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/JspTagException.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <taghelpers/ValidatedViewHelperFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TransformTag.h"

class ValidationTransformTag: public TransformTag {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: std::string xslFile;

    private: bool logic;

public: ValidationTransformTag() : TransformTag(ValidatedViewHelperFactory()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->logic= true;
    
}


    public: void setXsl(std::string value){
this->xslFile= value;
    
this->setTemplateFile(this->xslFile);
    
}


    public: void setLogic(bool logic){
this->logic= logic;
    
}


                //@Throws(Exception.constructor)
            
    private: bool isValid(){

        try {
            
    Class* helperClass = this->getHelper().getClass();;
    

    Method method = helperClass.getMethod(commonStrings.IS_VALID, 
                            nullptr);;
    

    Boolean result = method.invoke(this->getHelper(), 
                            nullptr);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result.valueOf();;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.IS_VALID, e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    private: std::string validationInfo(){

        try {
            
    Class* addressHelperClass = this->getHelper().getClass();;
    

    Method method = addressHelperClass.getMethod("validationInfo", 
                            nullptr);;
    

    std::string result = method.invoke(this->getHelper(), 
                            nullptr);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "validationInfo()", e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(JspTagException.constructor)
            
    public: int32_t doStartTag(){

        try {
            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().JSPTAG))
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    

    HttpServletRequest request = this->pageContext.getRequest();;
    
stringBuffer.append("ValidationViewTag Start For: ");
    
stringBuffer.append(this->getName());
    
stringBuffer.append("\nView FIle: ");
    
stringBuffer.append(this->getObjectFile());
    
stringBuffer.append("\nRequest URI: ");
    
stringBuffer.append(request.getRequestURI());
    
this->logUtil.putF(stringBuffer.toString(), this, tagStrings.DO_START_TAG);
    

                                    }
                                
this->setHelper();
    

                        if(this->isValid())
                        
                                    {
                                    super.doStartTag();
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().JSPTAG))
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("View File: ");
    
stringBuffer.append(this->getObjectFile());
    
stringBuffer.append("\nLogic includes body if true=");
    
stringBuffer.appendboolean(this->logic);
    
this->logUtil.putF(stringBuffer.toString(), this, tagStrings.DO_START_TAG);
    

                                    }
                                

                        if(this->logic)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return EVAL_BODY_INCLUDE;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SKIP_BODY;
    

                        }
                            

                                    }
                                
                        else {
                            pageContext.getOut().print(this->validationInfo());
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().JSPTAG))
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("View File: ");
    
stringBuffer.append(this->getObjectFile());
    
stringBuffer.append("\nisValid()=false");
    
stringBuffer.append("\nLogic skips body if true=");
    
stringBuffer.appendboolean(this->logic);
    
this->logUtil.putF(stringBuffer.toString(), this, tagStrings.DO_START_TAG);
    

                                    }
                                

                        if(this->logic)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SKIP_BODY;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return EVAL_BODY_INCLUDE;
    

                        }
                            

                        }
                            

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


    public: int32_t doEndTag(){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().JSPTAG))
                        
                                    {
                                    this->logUtil.putF("Tag Ended", this, "doEndTag");
    

                                    }
                                
this->logic= true;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.doEndTag();;
    
}


};

            

