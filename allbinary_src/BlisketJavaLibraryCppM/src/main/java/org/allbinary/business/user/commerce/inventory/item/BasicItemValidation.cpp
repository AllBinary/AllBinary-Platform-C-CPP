
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ITEM_BASICITEMVALIDATION_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ITEM_BASICITEMVALIDATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/commerce/inventory/item/BasicItemValidation.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlData.h>

      
#include <org/allbinary/logic/control/validate/Validation.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/commerce/inventory/item/ItemInterface.h"


BasicItemValidation::BasicItemValidation(ItemInterface* itemInterface) : logUtil(LogUtil::getInstance()){
this->itemInterface= itemInterface;
    
}


    auto BasicItemValidation::isValid() -> bool{

        try {
            
                        if(this->itemInterface->getId() == 
                                    nullptr
                                 || this->itemInterface->getId()->length() < 1 || this->itemInterface->getId()->length() > AbSqlData::MAXNUM)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

    StringValidationUtil* stringValidationUtil = StringValidationUtil::getInstance();;
    

                        if(this->itemInterface->getId() != 
                                    nullptr
                                 && !stringValidationUtil->isNumber(this->itemInterface->getId()))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

                        if(this->itemInterface->getNumber() == 
                                    nullptr
                                 || this->itemInterface->getNumber()->length() < 1 || this->itemInterface->getNumber()->length() > AbSqlData::MAXNUM)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

                        if(this->itemInterface->getNumber() != 
                                    nullptr
                                 && !stringValidationUtil->isNumber(this->itemInterface->getNumber()))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

                        if(this->itemInterface->getInBaskets() == 
                                    nullptr
                                 || this->itemInterface->getInBaskets()->length() < 1 || this->itemInterface->getInBaskets()->length() > AbSqlData::MAXNUM)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

                        if(this->itemInterface->getInBaskets() != 
                                    nullptr
                                 && !stringValidationUtil->isNumber(this->itemInterface->getInBaskets()))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

                        if(this->itemInterface->getWeight() == 
                                    nullptr
                                 || this->itemInterface->getWeight()->length() < 1 || this->itemInterface->getWeight()->length() > this->MAXWEIGHT)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

                        if(this->itemInterface->getWeight() != 
                                    nullptr
                                 && !stringValidationUtil->isNumber(this->itemInterface->getWeight()))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

                        if(this->itemInterface->getEnabled() == 
                                    nullptr
                                 || this->itemInterface->getEnabled()->length() < 1 || this->itemInterface->getEnabled()->length() > AbSqlData::MAXSTRING)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

                        if(this->itemInterface->getNewOrUsed() == 
                                    nullptr
                                 || this->itemInterface->getNewOrUsed()->length() < 1 || this->itemInterface->getNewOrUsed()->length() > AbSqlData::MAXSTRING)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

                        if(this->itemInterface->getSummary() == 
                                    nullptr
                                 || this->itemInterface->getSummary()->length() < 1 || this->itemInterface->getSummary()->length() > AbSqlData::MAXSTRING)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

                        if(this->itemInterface->getDescription() == 
                                    nullptr
                                 || this->itemInterface->getDescription()->length() < 1 || this->itemInterface->getDescription()->length() > AbSqlData::MAXBLOB)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

                        if(this->itemInterface->getKeywords() == 
                                    nullptr
                                 || this->itemInterface->getKeywords()->length() < 1 || this->itemInterface->getKeywords()->length() > AbSqlData::MAXSTRING)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

                        if(this->itemInterface->getCategory() == 
                                    nullptr
                                 || this->itemInterface->getCategory()->length() < 1 || this->itemInterface->getCategory()->length() > AbSqlData::MAXSTRING)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

                        if(this->itemInterface->getType() == 
                                    nullptr
                                 || this->itemInterface->getType()->length() < 1 || this->itemInterface->getType()->length() > AbSqlData::MAXSTRING)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

                        if(this->itemInterface->getPrice() == 
                                    nullptr
                                 || !this->itemInterface->getPrice()->isValid())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

                        if(this->itemInterface->getCustoms() == 
                                    nullptr
                                 || this->itemInterface->getCustoms()->length() < 1 || this->itemInterface->getCustoms()->length() > AbSqlData::MAXNUM)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

                        if(this->itemInterface->getDownloads() == 
                                    nullptr
                                 || this->itemInterface->getDownloads()->length() < 1 || this->itemInterface->getDownloads()->length() > AbSqlData::MAXNUM)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

                        if(this->itemInterface->getGroups() == 
                                    nullptr
                                 || this->itemInterface->getGroups()->length() < 1 || this->itemInterface->getGroups()->length() > AbSqlData::MAXNUM)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

                        if(this->itemInterface->getOptions() == 
                                    nullptr
                                 || this->itemInterface->getOptions()->length() < 1 || this->itemInterface->getOptions()->length() > AbSqlData::MAXNUM)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

                        if(this->itemInterface->getPermissions() == 
                                    nullptr
                                 || this->itemInterface->getPermissions()->length() < 1 || this->itemInterface->getPermissions()->length() > AbSqlData::MAXNUM)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

                        if(this->itemInterface->getSpecials() == 
                                    nullptr
                                 || this->itemInterface->getSpecials()->length() < 1 || this->itemInterface->getSpecials()->length() > AbSqlData::MAXNUM)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::TRUE;
    

                //: 
} catch(Exception& e) 
            {

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put("Failed to validate form", this, this->commonStrings->IS_VALID, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    
}

}


    auto BasicItemValidation::validationInfo() -> std::string{

        try {
            
    StringMaker* stringBuffer = new StringMaker();;
    

                        if(this->itemInterface->getId() == 
                                    nullptr
                                 || this->itemInterface->getId()->length() < 1 || this->itemInterface->getId()->length() > AbSqlData::MAXNUM)
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf("Id is invalid. Must be number < ") +JavaString::valueOf(AbSqlData::MAXNUM)) +JavaString::valueOf(" and > 0 digits.<br />"));
    

                                    }
                                

    StringValidationUtil* stringValidationUtil = StringValidationUtil::getInstance();;
    

                        if(this->itemInterface->getId() != 
                                    nullptr
                                 && !stringValidationUtil->isNumber(this->itemInterface->getId()))
                        
                                    {
                                    stringBuffer->append("Id is invalid. Must be > 0.<br />");
    

                                    }
                                

                        if(this->itemInterface->getNumber() == 
                                    nullptr
                                 || this->itemInterface->getNumber()->length() < 1 || this->itemInterface->getNumber()->length() > AbSqlData::MAXNUM)
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf("Number of items is invalid. Must be number < ") +JavaString::valueOf(AbSqlData::MAXNUM)) +JavaString::valueOf(" and > 0 digits.<br />"));
    

                                    }
                                

                        if(this->itemInterface->getNumber() != 
                                    nullptr
                                 && !stringValidationUtil->isNumber(this->itemInterface->getNumber()))
                        
                                    {
                                    stringBuffer->append("Number of items value is not a valid number.<br />");
    

                                    }
                                

                        if(this->itemInterface->getInBaskets() == 
                                    nullptr
                                 || this->itemInterface->getInBaskets()->length() < 1 || this->itemInterface->getInBaskets()->length() > AbSqlData::MAXNUM)
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf("Number in baskets is invalid. Must be < ") +JavaString::valueOf(AbSqlData::MAXNUM)) +JavaString::valueOf(" and > 0 digits.<br />"));
    

                                    }
                                

                        if(this->itemInterface->getInBaskets() != 
                                    nullptr
                                 && !stringValidationUtil->isNumber(this->itemInterface->getInBaskets()))
                        
                                    {
                                    stringBuffer->append("In Baskets value is not a valid number.<br />");
    

                                    }
                                

                        if(this->itemInterface->getWeight() == 
                                    nullptr
                                 || this->itemInterface->getWeight()->length() < 1 || this->itemInterface->getWeight()->length() > this->MAXWEIGHT)
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf("Weight value is invalid. Must be < ") +JavaString::valueOf(this->MAXWEIGHT)) +JavaString::valueOf(" and > 0 digits.<br />"));
    

                                    }
                                

                        if(this->itemInterface->getWeight() != 
                                    nullptr
                                 && !stringValidationUtil->isNumber(this->itemInterface->getWeight()))
                        
                                    {
                                    stringBuffer->append("Weight value is not a valid number.<br />");
    

                                    }
                                

                        if(this->itemInterface->getEnabled() == 
                                    nullptr
                                 || this->itemInterface->getEnabled()->length() < 1 || this->itemInterface->getEnabled()->length() > AbSqlData::MAXSTRING)
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf("For Sale value is invalid. Must be < ") +JavaString::valueOf(AbSqlData::MAXSTRING)) +JavaString::valueOf(" and > 0 characters long.<br />"));
    

                                    }
                                

                        if(this->itemInterface->getNewOrUsed() == 
                                    nullptr
                                 || this->itemInterface->getNewOrUsed()->length() < 1 || this->itemInterface->getNewOrUsed()->length() > AbSqlData::MAXSTRING)
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf("New Or Used value is invalid. Must be < ") +JavaString::valueOf(AbSqlData::MAXSTRING)) +JavaString::valueOf(" and > 0 characters long.<br />"));
    

                                    }
                                

                        if(this->itemInterface->getSummary() == 
                                    nullptr
                                 || this->itemInterface->getSummary()->length() < 1 || this->itemInterface->getSummary()->length() > AbSqlData::MAXSTRING)
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf("Summary value is invalid. Must be < ") +JavaString::valueOf(AbSqlData::MAXSTRING)) +JavaString::valueOf(" and > 0 characters long.<br />"));
    

                                    }
                                

                        if(this->itemInterface->getDescription() == 
                                    nullptr
                                 || this->itemInterface->getDescription()->length() < 1 || this->itemInterface->getDescription()->length() > AbSqlData::MAXBLOB)
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf("Description value is invalid. Must be < ") +JavaString::valueOf(AbSqlData::MAXBLOB)) +JavaString::valueOf(" and > 0 characters long.<br />"));
    

                                    }
                                

                        if(this->itemInterface->getKeywords() == 
                                    nullptr
                                 || this->itemInterface->getKeywords()->length() < 1 || this->itemInterface->getKeywords()->length() > AbSqlData::MAXSTRING)
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf("Keywords value is invalid. Must be < ") +JavaString::valueOf(AbSqlData::MAXSTRING)) +JavaString::valueOf(" and > 0 characters long.<br />"));
    

                                    }
                                

                        if(this->itemInterface->getCategory() == 
                                    nullptr
                                 || this->itemInterface->getCategory()->length() < 1 || this->itemInterface->getCategory()->length() > AbSqlData::MAXSTRING)
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf("Category value is invalid. Must be < ") +JavaString::valueOf(AbSqlData::MAXSTRING)) +JavaString::valueOf(" and > 0 characters long.<br />"));
    

                                    }
                                

                        if(this->itemInterface->getType() == 
                                    nullptr
                                 || this->itemInterface->getType()->length() < 1 || this->itemInterface->getType()->length() > AbSqlData::MAXSTRING)
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf("Type value is invalid. Must be < ") +JavaString::valueOf(AbSqlData::MAXSTRING)) +JavaString::valueOf(" and > 0 characters long.<br />"));
    

                                    }
                                

                        if(this->itemInterface->getPrice() == 
                                    nullptr
                                 || !this->itemInterface->getPrice()->isValid())
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf("Price value is invalid. Must be < ") +JavaString::valueOf(this->MAXPRICE)) +JavaString::valueOf(" and > 0 in length.<br />"));
    

                                    }
                                

                        if(this->itemInterface->getCustoms() == 
                                    nullptr
                                 || this->itemInterface->getCustoms()->length() < 1 || this->itemInterface->getCustoms()->length() > AbSqlData::MAXNUM)
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf("Custom items value is invalid. Must be number < ") +JavaString::valueOf(AbSqlData::MAXNUM)) +JavaString::valueOf(" and > 0 digits.<br />"));
    

                                    }
                                

                        if(this->itemInterface->getDownloads() == 
                                    nullptr
                                 || this->itemInterface->getDownloads()->length() < 1 || this->itemInterface->getDownloads()->length() > AbSqlData::MAXNUM)
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf("Downloadable item value is invalid. Must be number < ") +JavaString::valueOf(AbSqlData::MAXNUM)) +JavaString::valueOf(" and > 0 digits.<br />"));
    

                                    }
                                

                        if(this->itemInterface->getGroups() == 
                                    nullptr
                                 || this->itemInterface->getGroups()->length() < 1 || this->itemInterface->getGroups()->length() > AbSqlData::MAXNUM)
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf("Group item value is invalid. Must be number < ") +JavaString::valueOf(AbSqlData::MAXNUM)) +JavaString::valueOf(" and > 0 digits.<br />"));
    

                                    }
                                

                        if(this->itemInterface->getOptions() == 
                                    nullptr
                                 || this->itemInterface->getOptions()->length() < 1 || this->itemInterface->getOptions()->length() > AbSqlData::MAXNUM)
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf("Option item value is invalid. Must be number < ") +JavaString::valueOf(AbSqlData::MAXNUM)) +JavaString::valueOf(" and > 0 digits.<br />"));
    

                                    }
                                

                        if(this->itemInterface->getPermissions() == 
                                    nullptr
                                 || this->itemInterface->getPermissions()->length() < 1 || this->itemInterface->getPermissions()->length() > AbSqlData::MAXNUM)
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf("Permission item value is invalid. Must be number < ") +JavaString::valueOf(AbSqlData::MAXNUM)) +JavaString::valueOf(" and > 0 digits.<br />"));
    

                                    }
                                

                        if(this->itemInterface->getSpecials() == 
                                    nullptr
                                 || this->itemInterface->getSpecials()->length() < 1 || this->itemInterface->getSpecials()->length() > AbSqlData::MAXNUM)
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf("Special item value is invalid. Must be number < ") +JavaString::valueOf(AbSqlData::MAXNUM)) +JavaString::valueOf(" and > 0 digits.<br />"));
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    

                //: 
} catch(Exception& e) 
            {

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put("Failed to generate validation error info", this, "validationInfo()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return "Error Validating Form";
    
}

}


    auto BasicItemValidation::toValidationInfoDoc() -> Document*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto BasicItemValidation::toValidationInfoNode(Document* document) -> Node*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ITEM_BASICITEMVALIDATION_CPP
