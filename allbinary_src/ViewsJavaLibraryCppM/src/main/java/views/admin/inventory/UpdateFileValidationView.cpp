
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
        



        #ifndef VIEWS_ADMIN_INVENTORY_UPDATEFILEVALIDATIONVIEW_CPP
        #define VIEWS_ADMIN_INVENTORY_UPDATEFILEVALIDATIONVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "views/admin/inventory/UpdateFileValidationView.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemValidation.h>

      
#include <org/allbinary/business/user/commerce/money/MoneyException.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntity.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityFactory.h>

      
#include <org/allbinary/globals/GLOBALS2.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/communication/http/file/upload/HttpFileUploadUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/FileData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/apache/commons/fileupload/FileItem.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "views/admin/inventory/InventoryItemView.h"

const std::string UpdateFileValidationView::UPDATEPRODUCT = CommonStrings::getInstance()->UPDATE;

UpdateFileValidationView::UpdateFileValidationView(TransformInfoInterface* transformInfoInterface) : InventoryItemView(transformInfoInterface), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto UpdateFileValidationView::isValid() -> bool{

        try {
            
    std::string command = this->getRequestHashMap()->get(GLOBALS2::ADMINCOMMAND);;
    

                        if(false || command.compare(UpdateFileValidationView::UPDATEPRODUCT) != 0)
                        
                                    {
                                    
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Invalid AdminCommand=") +JavaString::valueOf(command), this, this->commonStrings->IS_VALID);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                

                        if((new BasicItemValidation(this->itemInterface))->isValid() == Boolean::FALSE)
                        
                                    {
                                    
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF("BasicItem is not valid", this, this->commonStrings->IS_VALID);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                

    StoreFrontInterface* storeFrontInterface = StoreFrontFactory::getInstance(this->getWeblisketSession()->getStoreName());;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(URLGLOBALS::getWebappPath());
    
stringBuffer->append(storeFrontInterface->getCurrentHostNamePath());
    
stringBuffer->append(this->itemInterface->getCategory());
    

    std::string fullCategory = stringBuffer->toString();;
    

    AbFile* categoryFile = AbFile::createAbFile(fullCategory);;
    

                        if(!categoryFile->isDirectory())
                        
                                    {
                                    
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Category Does Not Exist: ") +JavaString::valueOf(fullCategory), this, this->commonStrings->IS_VALID);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                

    InventoryEntity* inventoryEntity = InventoryEntityFactory::getInstance()->getInventoryEntityInstance();;
    

                        if(inventoryEntity->getItem(this->itemInterface->getId()) == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                

    Object* anyType = this->getRequestHashMap()->get(basicItemData.IMAGE);;
    

                        if(HttpFileUploadUtil::getInstance()->isValid(anyType))
                        
                                    {
                                    
    FileItem* fileItem = dynamic_cast<FileItem*>(anyType);;
    

    int64_t size = fileItem->getSize();;
    

    std::string fileName = fileItem->getName();;
    
HttpFileUploadUtil::log(fileItem);
    

                        if(this->isValid(fileName, size) == Boolean::FALSE)
                        
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

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->put("Exception in validation", this, this->commonStrings->IS_VALID, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    
}

}


    auto UpdateFileValidationView::toValidationInfoDoc() -> Document*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    auto UpdateFileValidationView::toValidationInfoNode(Document* document) -> Node*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    auto UpdateFileValidationView::validationInfo() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    

    std::string command = this->getRequestHashMap()->get(GLOBALS2::ADMINCOMMAND);;
    

                        if(false || command.compare(UpdateFileValidationView::UPDATEPRODUCT) != 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CommonSeps::getInstance()->SPACE;
    

                                    }
                                
stringBuffer->append((new BasicItemValidation(this->itemInterface))->validationInfo());
    

    StoreFrontInterface* storeFrontInterface = StoreFrontFactory::getInstance(this->getWeblisketSession()->getStoreName());;
    

    std::string fullCategory = URLGLOBALS::getWebappPath() +storeFrontInterface->getCurrentHostNamePath() +this->itemInterface->getCategory();;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Category: ") +JavaString::valueOf(fullCategory), this, "validationInfo()");
    

                                    }
                                

        try {
            
                        if(InventoryEntityFactory::getInstance()->getInventoryEntityInstance()->getItem(this->itemInterface->getId()) == 
                                    nullptr
                                )
                        
                                    {
                                    stringBuffer->append("Item does not exist.<br>");
    

                                    }
                                

                //: 
} catch(MoneyException& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF("Existing Item With MoneyException", this, "validationInfo()");
    

                                    }
                                
}


    Object* anyType = this->getRequestHashMap()->get(basicItemData.IMAGE);;
    

                        if(HttpFileUploadUtil::getInstance()->isValid(anyType))
                        
                                    {
                                    
    FileItem* fileItem = dynamic_cast<FileItem*>(anyType);;
    

    int64_t size = fileItem->getSize();;
    

    std::string fileName = fileItem->getName();;
    

    std::string fileItemFieldName = fileItem->getFieldName();;
    
this->validationInfo(stringBuffer, fileName, fileItemFieldName, size);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}


                //@Throws(Exception.constructor)
            
    auto UpdateFileValidationView::isValid(std::string fileName, int64_t size) -> bool{

    FileData* fileData = FileData::getInstance();;
    

                        if(size > fileData->MINIMAGEFILESIZE)
                        
                                    {
                                    
                        if(size < fileData->MAXIMAGEFILESIZE)
                        
                                    {
                                    
                        if(!StringValidationUtil::getInstance()->isValidRequired(fileName, fileData->MINLEN, fileData->MAXLEN))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                

                                    }
                                
                        else {
                            
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("File Size To Large: ");
    
stringBuffer->appendlong(size);
    
stringBuffer->append(">");
    
stringBuffer->appendint(fileData->MAXIMAGEFILESIZE);
    
this->logUtil->putF(stringBuffer->toString(), this, this->commonStrings->IS_VALID);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                        }
                            
this->processImageFiles();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::TRUE;
    
}


    auto UpdateFileValidationView::validationInfo(StringMaker* stringBuffer, std::string fileName, std::string fileItemFieldName, int64_t size) -> void{

    FileData* fileData = FileData::getInstance();;
    

                        if(size > fileData->MINIMAGEFILESIZE)
                        
                                    {
                                    
                        if(fileItemFieldName.compare(basicItemData.IMAGE) == 0)
                        
                                    {
                                    
                        if(size < fileData->MAXIMAGEFILESIZE)
                        
                                    {
                                    
                        if(!StringValidationUtil::getInstance()->isValidRequired(fileName, fileData->MINLEN, fileData->MAXLEN))
                        
                                    {
                                    stringBuffer->append("FileName must be >");
    
stringBuffer->appendint(fileData->MINLEN);
    
stringBuffer->append("and <");
    
stringBuffer->appendint(fileData->MAXLEN);
    
stringBuffer->append("<br />");
    

                                    }
                                

                                    }
                                
                        else {
                            stringBuffer->append("Image File Is Not The Right Size. ");
    
stringBuffer->appendint(fileData->MINIMAGEFILESIZE);
    
stringBuffer->append("< > ");
    
stringBuffer->appendint(fileData->MAXIMAGEFILESIZE);
    
stringBuffer->append("<br />");
    

                        }
                            

                                    }
                                

                                    }
                                
}




        #endif //VIEWS_ADMIN_INVENTORY_UPDATEFILEVALIDATIONVIEW_CPP
