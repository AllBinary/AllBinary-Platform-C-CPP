
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
        



        #ifndef ADMIN_TAGS_TABLETAG_CPP
        #define ADMIN_TAGS_TABLETAG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "admin/tags/TableTag.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/lang/reflect/Method.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/JspTagException.h>

      
#include <admin/taghelpers/TagHelperFactoryInterface.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/SqlStrings.h>

      
#include <org/allbinary/logic/java/bool/BooleanUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <tags/PropertiesTag.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/globals/GLOBALS2.h>

#include <org/allbinary/globals/GLOBALS2.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

TableTag::TableTag() : logUtil(LogUtil::getInstance()){

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->JSPTAG))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                
}


    auto TableTag::setIsSelected(std::string enabled) -> void{
this->enabled= enabled;
    
}


                //@Throws(Exception.constructor)
            
    auto TableTag::isEnabled() -> bool{

                        if(!StringValidationUtil::getInstance()->isEmpty(this->enabled))
                        
                                    {
                                    
                        if(BooleanUtil::getInstance()->getFromString(this->enabled) || this->enabled.compare("on") == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


    auto TableTag::setTagHelperFactory(TagHelperFactoryInterface* tagHelperFactoryInterface) -> void{
this->tagHelperFactoryInterface= tagHelperFactoryInterface;
    
}


    auto TableTag::getTagHelperFactoryInterface() -> TagHelperFactoryInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->tagHelperFactoryInterface;
    
}


    auto TableTag::setTagRequestHelperFactory(TagHelperFactoryInterface* tagHelperFactoryInterface) -> void{
this->tagRequestHelperFactoryInterface= tagHelperFactoryInterface;
    
}


    auto TableTag::getTagRequestHelperFactoryInterface() -> TagHelperFactoryInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->tagRequestHelperFactoryInterface;
    
}


    auto TableTag::setCurrent(int32_t current) -> void{
this->current= current;
    
}


    auto TableTag::getCurrent() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->current;
    
}


    auto TableTag::setTotal(int32_t total) -> void{
this->total= total;
    
}


    auto TableTag::getTotal() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->total;
    
}


                //@Throws(LicensingException.constructor)
            
    auto TableTag::drop() -> std::string{

        try {
            
    Object* anyType = JavaBoxes::toObject(this->getTagHelperFactoryInterface()->getInstance(this->getPropertiesHashMap(), pageContext));;
    

    Class* addressHelperClass = anyType->getClass();;
    

    Method* method = addressHelperClass->getMethod("drop", 
                            nullptr);;
    

    std::string result = JavaBoxes::unbox<std::string>(method->invoke(anyType, 
                            nullptr));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return result;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to drop table";;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->DROP, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return error;
    
}

}


                //@Throws(LicensingException.constructor)
            
    auto TableTag::create() -> std::string{

        try {
            
    Object* anyType = JavaBoxes::toObject(this->getTagHelperFactoryInterface()->getInstance(this->getPropertiesHashMap(), pageContext));;
    

    Class* addressHelperClass = anyType->getClass();;
    

    Method* method = addressHelperClass->getMethod("create", 
                            nullptr);;
    

    std::string result = JavaBoxes::unbox<std::string>(method->invoke(anyType, 
                            nullptr));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return result;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to create table";;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "create()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return error;
    
}

}


                //@Throws(LicensingException.constructor)
            
    auto TableTag::restore() -> std::string{

        try {
            
    Object* anyType = JavaBoxes::toObject(this->getTagHelperFactoryInterface()->getInstance(this->getPropertiesHashMap(), pageContext));;
    

    Class* addressHelperClass = anyType->getClass();;
    

    Method* method = addressHelperClass->getMethod("restore", 
                            nullptr);;
    

    std::string result = JavaBoxes::unbox<std::string>(method->invoke(anyType, 
                            nullptr));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return result;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to restore backup";;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "restore()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return error;
    
}

}


                //@Throws(LicensingException.constructor)
            
    auto TableTag::backup() -> std::string{

        try {
            
    Object* anyType = JavaBoxes::toObject(this->getTagHelperFactoryInterface()->getInstance(this->getPropertiesHashMap(), pageContext));;
    

    Class* addressHelperClass = anyType->getClass();;
    

    Method* method = addressHelperClass->getMethod("backup", 
                            nullptr);;
    

    std::string result = JavaBoxes::unbox<std::string>(method->invoke(anyType, 
                            nullptr));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return result;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to make backup";;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "backup()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return error;
    
}

}


                //@Throws(LicensingException.constructor)
            
    auto TableTag::insert() -> std::string{

        try {
            
    Class* helperClass = this->requestObject->getClass();;
    

    Method* method = helperClass->getMethod("insert", 
                            nullptr);;
    

    std::string result = JavaBoxes::unbox<std::string>(method->invoke(this->requestObject, 
                            nullptr));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return result;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to insert";;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "insert()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return error;
    
}

}


                //@Throws(LicensingException.constructor)
            
    auto TableTag::delete_() -> std::string{

        try {
            
    Class* helperClass = this->requestObject->getClass();;
    

    Method* method = helperClass->getMethod(commonStrings.delete_, 
                            nullptr);;
    

    std::string result = JavaBoxes::unbox<std::string>(method->invoke(this->requestObject, 
                            nullptr));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return result;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to delete";;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "delete()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return error;
    
}

}


                //@Throws(LicensingException.constructor)
            
    auto TableTag::update() -> std::string{

        try {
            
    Class* helperClass = this->requestObject->getClass();;
    

    Method* method = helperClass->getMethod("update", 
                            nullptr);;
    

    std::string result = JavaBoxes::unbox<std::string>(method->invoke(this->requestObject, 
                            nullptr));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return result;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to update";;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "update()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return error;
    
}

}


                //@Throws(JspTagException.constructor)
            
    auto TableTag::doStartTag() -> int32_t{

        try {
            
                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->JSPTAG))
                        
                                    {
                                    
    HttpServletRequest* request = dynamic_cast<HttpServletRequest*>(this->pageContext->getRequest());;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("TableTag Helper: ");
    
stringBuffer->append(this->getTagHelperFactoryInterface()->getClass()->getName());
    
stringBuffer->append(" Request URI: ");
    
stringBuffer->append(request->getRequestURI());
    
this->logUtil->putF(JavaString::valueOf(stringBuffer), this, this->tagStrings->DO_START_TAG);
    

                                    }
                                

                        if(this->getTagRequestHelperFactoryInterface() != 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->JSPTAG))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("TableTag RequestHelper: ") +JavaString::valueOf(this->getTagRequestHelperFactoryInterface()->getClass()->getName()), this, this->tagStrings->DO_START_TAG);
    

                                    }
                                

                                    }
                                
                        else {
                            
                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->JSPTAG))
                        
                                    {
                                    this->logUtil->putF("TableTag RequestHelper: null", this, this->tagStrings->DO_START_TAG);
    

                                    }
                                

                        }
                            

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->JSPTAG))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("TableTag this.getCommand(): ") +JavaString::valueOf(this->getCommand()), this, tagStrings.DO_START_TAG);
    

                                    }
                                

                        if(this->isEnabled())
                        
                                    {
                                    
                        if(this->getCommand() != 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(this->getCommand()->compareTo(this->commonStrings->INSERT) == 0 || this->getCommand()->compareTo(SqlStrings::getInstance()->INSERT_INTO) == 0 || this->getCommand()->compareTo(commonStrings.DELETE) == 0 || this->getCommand()->compareTo(commonStrings.UPDATE) == 0 || this->getCommand()->compareTo(SqlStrings::getInstance()->UPDATE) == 0)
                        
                                    {
                                    this->requestObject= this->getTagRequestHelperFactoryInterface()->getInstance(this->getPropertiesHashMap(), pageContext);
    

                                    }
                                

                        if(this->getCommand()->compareTo(this->commonStrings->INSERT) == 0 || this->getCommand()->compareTo(SqlStrings::getInstance()->INSERT_INTO) == 0)
                        
                                    {
                                    this->insert();
    

                                    }
                                
                             else 
                        if(this->getCommand()->compareTo(commonStrings.DELETE) == 0)
                        
                                    {
                                    this->delete_();
    

                                    }
                                
                             else 
                        if(this->getCommand()->compareTo(commonStrings.UPDATE) == 0 || this->getCommand()->compareTo(SqlStrings::getInstance()->UPDATE) == 0)
                        
                                    {
                                    this->update();
    

                                    }
                                

                        if(this->getCommand()->compareTo(GLOBALS2::BACKUP) == 0)
                        
                                    {
                                    
    std::string output = this->backup();;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->JSPTAGEXTRAOUTPUT))
                        
                                    {
                                    this->pageContext->getOut()->print(JavaString::valueOf(output) +JavaString::valueOf("<br />"));
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SKIP_BODY;
    

                                    }
                                
                             else 
                        if(this->getCommand()->compareTo(GLOBALS2::RESTORE) == 0)
                        
                                    {
                                    this->getPropertiesHashMap()->put("current", this->getCurrent());
    
this->getPropertiesHashMap()->put("total", this->getTotal());
    

    std::string output = this->restore();;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->JSPTAGEXTRAOUTPUT))
                        
                                    {
                                    this->pageContext->getOut()->print(JavaString::valueOf(output) +JavaString::valueOf("<br />"));
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SKIP_BODY;
    

                                    }
                                
                             else 
                        if(this->getCommand()->compareTo(commonStrings.DROP) == 0)
                        
                                    {
                                    
    std::string output = this->drop();;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->JSPTAGEXTRAOUTPUT))
                        
                                    {
                                    this->pageContext->getOut()->print(JavaString::valueOf(output) +JavaString::valueOf("<br />"));
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SKIP_BODY;
    

                                    }
                                
                             else 
                        if(this->getCommand()->compareTo(commonStrings.CREATE) == 0)
                        
                                    {
                                    
    std::string output = this->create();;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->JSPTAGEXTRAOUTPUT))
                        
                                    {
                                    this->pageContext->getOut()->print(JavaString::valueOf(output) +JavaString::valueOf("<br />"));
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SKIP_BODY;
    

                                    }
                                
                             else 
                        if(this->getCommand()->compareTo(commonStrings.INSERT) == 0)
                        
                                    {
                                    
    std::string output = this->insert();;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->JSPTAGEXTRAOUTPUT))
                        
                                    {
                                    this->pageContext->getOut()->print(JavaString::valueOf(output) +JavaString::valueOf("<br />"));
    

                                    }
                                

                                    }
                                
                             else 
                        if(this->getCommand()->compareTo(commonStrings.DELETE) == 0)
                        
                                    {
                                    
    std::string output = this->delete_();;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->JSPTAGEXTRAOUTPUT))
                        
                                    {
                                    this->pageContext->getOut()->print(JavaString::valueOf(output) +JavaString::valueOf("<br />"));
    

                                    }
                                

                                    }
                                
                             else 
                        if(this->getCommand()->compareTo(commonStrings.UPDATE) == 0)
                        
                                    {
                                    
    std::string output = this->update();;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->JSPTAGEXTRAOUTPUT))
                        
                                    {
                                    this->pageContext->getOut()->print(JavaString::valueOf(output) +JavaString::valueOf("<br />"));
    

                                    }
                                

                                    }
                                

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return EVAL_BODY_INCLUDE;
    

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




        #endif //ADMIN_TAGS_TABLETAG_CPP
