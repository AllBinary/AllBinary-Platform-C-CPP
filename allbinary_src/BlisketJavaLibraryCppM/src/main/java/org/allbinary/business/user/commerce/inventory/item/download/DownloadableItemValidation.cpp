
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ITEM_DOWNLOAD_DOWNLOADABLEITEMVALIDATION_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ITEM_DOWNLOAD_DOWNLOADABLEITEMVALIDATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/commerce/inventory/item/download/DownloadableItemValidation.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Boolean.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlData.h>

      
#include <org/allbinary/logic/control/validate/Validation.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/commerce/inventory/item/download/DownloadableItem.h"


DownloadableItemValidation::DownloadableItemValidation(DownloadableItem* downloadableItem) : logUtil(LogUtil::getInstance()){
this->downloadableItem= downloadableItem;
    
}


    auto DownloadableItemValidation::isValid() -> bool{

        try {
            
                        if(this->downloadableItem->getId() == 
                                    nullptr
                                 || this->downloadableItem->getId()->length() < 1 || this->downloadableItem->getId()->length() > AbSqlData::MAXNUM)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

                        if(this->downloadableItem->getId() != 
                                    nullptr
                                 && !StringValidationUtil::getInstance()->isNumber(this->downloadableItem->getId()))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

                        if(this->downloadableItem->getSystem() == 
                                    nullptr
                                 || this->downloadableItem->getSystem()->length() < 1 || this->downloadableItem->getSystem()->length() > AbSqlData::MAXSTRING)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

                        if(this->downloadableItem->getPlatform() == 
                                    nullptr
                                 || this->downloadableItem->getPlatform()->length() < 1 || this->downloadableItem->getPlatform()->length() > AbSqlData::MAXSTRING)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

                        if(this->downloadableItem->getSpecialName() == 
                                    nullptr
                                 || this->downloadableItem->getSpecialName()->length() < 0 || this->downloadableItem->getSpecialName()->length() > AbSqlData::MAXSTRING)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

                        if(this->downloadableItem->getVersion() == 
                                    nullptr
                                 || this->downloadableItem->getVersion()->length() < 1 || this->downloadableItem->getVersion()->length() > AbSqlData::MAXSTRING)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

                        if(this->downloadableItem->getChanges() == 
                                    nullptr
                                 || this->downloadableItem->getChanges()->length() < 1 || this->downloadableItem->getChanges()->length() > AbSqlData::MAXBLOB)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

                        if(this->downloadableItem->getSize() == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                
                        else {
                            
    std::string size = this->downloadableItem->getSize()->toString();;
    

                        if(size.size() < 1 || size.size() > AbSqlData::MAXNUM)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

                        }
                            

                        if(this->downloadableItem->getValidTime() == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                
                        else {
                            
    std::string size = this->downloadableItem->getValidTime()->toString();;
    

                        if(size.size() < 1 || size.size() > AbSqlData::MAXNUM)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

                        }
                            

                        if(this->downloadableItem->getRetries() == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                
                        else {
                            
    std::string size = this->downloadableItem->getRetries()->toString();;
    

                        if(size.size() < 1 || size.size() > AbSqlData::MAXNUM)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::TRUE;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put("Failed to validate form", this, this->commonStrings->IS_VALID, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    
}

}


    auto DownloadableItemValidation::validationInfo() -> std::string{

        try {
            
    StringMaker* stringBuffer = new StringMaker();;
    

                        if(this->downloadableItem->getId() == 
                                    nullptr
                                 || this->downloadableItem->getId()->length() < 1 || this->downloadableItem->getId()->length() > AbSqlData::MAXNUM)
                        
                                    {
                                    stringBuffer->append("Id is invalid. Must be number < ");
    
stringBuffer->appendint(AbSqlData::MAXNUM);
    
stringBuffer->append(" and > 0 digits.<br/>");
    

                                    }
                                

                        if(this->downloadableItem->getId() != 
                                    nullptr
                                 && !StringValidationUtil::getInstance()->isNumber(this->downloadableItem->getId()))
                        
                                    {
                                    stringBuffer->append("Id is invalid. Must be > 0.<br/>");
    

                                    }
                                

                        if(this->downloadableItem->getSystem() == 
                                    nullptr
                                 || this->downloadableItem->getSystem()->length() < 1 || this->downloadableItem->getSystem()->length() > AbSqlData::MAXSTRING)
                        
                                    {
                                    stringBuffer->append("System value is invalid. Must be < ");
    
stringBuffer->appendint(AbSqlData::MAXSTRING);
    
stringBuffer->append(" and > 0 characters long.<br/>");
    

                                    }
                                

                        if(this->downloadableItem->getPlatform() == 
                                    nullptr
                                 || this->downloadableItem->getPlatform()->length() < 1 || this->downloadableItem->getPlatform()->length() > AbSqlData::MAXSTRING)
                        
                                    {
                                    stringBuffer->append("Platform value is invalid. Must be < ");
    
stringBuffer->appendint(AbSqlData::MAXSTRING);
    
stringBuffer->append(" and > 0 characters long.<br/>");
    

                                    }
                                

                        if(this->downloadableItem->getSpecialName() == 
                                    nullptr
                                 || this->downloadableItem->getSpecialName()->length() < 0 || this->downloadableItem->getSpecialName()->length() > AbSqlData::MAXSTRING)
                        
                                    {
                                    stringBuffer->append("Special Name value is invalid. Must be < ");
    
stringBuffer->appendint(AbSqlData::MAXSTRING);
    
stringBuffer->append(" and > 0 characters long.<br/>");
    

                                    }
                                

                        if(this->downloadableItem->getVersion() == 
                                    nullptr
                                 || this->downloadableItem->getVersion()->length() < 1 || this->downloadableItem->getVersion()->length() > AbSqlData::MAXSTRING)
                        
                                    {
                                    stringBuffer->append("Version value is invalid. Must be < ");
    
stringBuffer->appendint(AbSqlData::MAXSTRING);
    
stringBuffer->append(" and > 0 characters long.<br/>");
    

                                    }
                                

                        if(this->downloadableItem->getChanges() == 
                                    nullptr
                                 || this->downloadableItem->getChanges()->length() < 0 || this->downloadableItem->getChanges()->length() > AbSqlData::MAXBLOB)
                        
                                    {
                                    stringBuffer->append("Changes value is invalid. Must be < ");
    
stringBuffer->appendint(AbSqlData::MAXBLOB);
    
stringBuffer->append(" and >= 0 characters long.<br/>");
    

                                    }
                                

                        if(this->downloadableItem->getSize() == 
                                    nullptr
                                )
                        
                                    {
                                    stringBuffer->append("File Size is null");
    

                                    }
                                
                        else {
                            
    std::string size = this->downloadableItem->getSize()->toString();;
    

                        if(size.size() < 1 || size.size() > AbSqlData::MAXNUM)
                        
                                    {
                                    stringBuffer->append("File Size is invalid. Must be number < ");
    
stringBuffer->appendint(AbSqlData::MAXNUM);
    
stringBuffer->append(" and > 0 digits.<br/>");
    

                                    }
                                

                        }
                            

                        if(this->downloadableItem->getValidTime() == 
                                    nullptr
                                )
                        
                                    {
                                    stringBuffer->append("Valid Time is null");
    

                                    }
                                
                        else {
                            
    std::string size = this->downloadableItem->getValidTime()->toString();;
    

                        if(size.size() < 1 || size.size() > AbSqlData::MAXNUM)
                        
                                    {
                                    stringBuffer->append("Valid Time is invalid. Must be number < ");
    
stringBuffer->appendint(AbSqlData::MAXNUM);
    
stringBuffer->append(" and > 0 digits.<br/>");
    

                                    }
                                

                        }
                            

                        if(this->downloadableItem->getRetries() == 
                                    nullptr
                                )
                        
                                    {
                                    stringBuffer->append("Retries is null");
    

                                    }
                                
                        else {
                            
    std::string size = this->downloadableItem->getRetries()->toString();;
    

                        if(size.size() < 1 || size.size() > AbSqlData::MAXNUM)
                        
                                    {
                                    stringBuffer->append("Retries is invalid. Must be number < ");
    
stringBuffer->appendint(AbSqlData::MAXNUM);
    
stringBuffer->append(" and > 0 digits.<br/>");
    

                                    }
                                

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put("Failed to generate validation error info", this, "validationInfo()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return "Error Validating Form";
    
}

}


    auto DownloadableItemValidation::toValidationInfoDoc() -> Document*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto DownloadableItemValidation::toValidationInfoNode(Document* document) -> Node*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ITEM_DOWNLOAD_DOWNLOADABLEITEMVALIDATION_CPP
