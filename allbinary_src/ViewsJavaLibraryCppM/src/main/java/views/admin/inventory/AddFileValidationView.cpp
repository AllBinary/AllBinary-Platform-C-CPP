
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
        



            #include "../../../java/lang/Exception.h"
        
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemValidation.h>

      
#include <org/allbinary/business/user/commerce/money/MoneyException.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityFactory.h>

      
#include <org/allbinary/globals/GLOBALS2.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/communication/http/file/upload/HttpFileUploadUtil.h>

      
#include <org/allbinary/logic/communication/http/file/upload/media/UploadMediaSingleton.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/FileData.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/io/path/PathUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/apache/commons/fileupload/FileItem.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "InventoryItemView.h"

class AddFileValidationView: public InventoryItemView, public ValidationComponentInterface {

    private: static const std::string ADDPRODUCT = "Add Product";

    private: static const std::string NEXTSTEP = "Next Step";

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const BasicItemData basicItemData = BasicItemData::getInstance();

public: AddFileValidationView(TransformInfoInterface transformInfoInterface){
            super(transformInfoInterface);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: Boolean isValid(){

        try {
            
    std::string command = this->getRequestHashMap().get(GLOBALS2::ADMINCOMMAND) as string;;
    

                        if(StringValidationUtil::getInstance().isEmpty(command) || (command.compareTo(AddFileValidationView::ADDPRODUCT) != 0 && command.compareTo(NEXTSTEP) != 0))
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("Invalid AdminCommand: ");
    
stringBuffer.append(command);
    
stringBuffer.append(" must be: ");
    
stringBuffer.append(AddFileValidationView::ADDPRODUCT);
    
stringBuffer.append(" or ");
    
stringBuffer.append(AddFileValidationView::NEXTSTEP);
    
this->logUtil.putF(stringBuffer.toString(), this, this->commonStrings.IS_VALID);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                

    BasicItemValidation basicItemValidation = BasicItemValidation(this->itemInterface);;
    

                        if(basicItemValidation.isValid() == Boolean::FALSE)
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF(basicItemValidation.validationInfo(), this, this->commonStrings.IS_VALID);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                

    StoreFrontInterface storeFrontInterface = StoreFrontFactory::getInstance(this->getWeblisketSession().getStoreName());;
    
this->itemInterface.setCategory(storeFrontInterface.getCategoryPath() +this->itemInterface.getCategory());
    

    std::string fullCategory = StringMaker().append(URLGLOBALS::getWebappPath()).append(storeFrontInterface.getCurrentHostNamePath()).append(this->itemInterface.getCategory()).toString();;
    

    AbFile categoryFile = AbFile::createAbFile(fullCategory);;
    

                        if(!categoryFile.isDirectory())
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("Category Does Not Exist: " +fullCategory, this, this->commonStrings.IS_VALID);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                

                        if(InventoryEntityFactory::getInstance().getInventoryEntityInstance().getItem(this->itemInterface.getId()) != 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("Item Already Exists", this, this->commonStrings.IS_VALID);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                

    Object* imageFileItemObject = this->getRequestHashMap().get(basicItemData.IMAGE);;
    

                        if(HttpFileUploadUtil::getInstance().isValid(imageFileItemObject))
                        
                                    {
                                    
    FileItem fileItem = imageFileItemObject as FileItem;;
    

    std::string fileName = fileItem.getName();;
    

    int64_t size = fileItem.getSize();;
    
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
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEWERROR))
                        
                                    {
                                    this->logUtil.put("Exception in validation", this, this->commonStrings.IS_VALID, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    
}

}


    public: Document toValidationInfoDoc(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: Node toValidationInfoNode(Document document){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: std::string validationInfo(){

        try {
            
    StringMaker stringBuffer = StringMaker();;
    

    std::string command = this->getRequestHashMap().get(GLOBALS2::ADMINCOMMAND) as string;;
    

                        if(StringValidationUtil::getInstance().isEmpty(command) || (command.compareTo(AddFileValidationView::ADDPRODUCT) != 0 && command.compareTo(NEXTSTEP) != 0))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::getInstance().EMPTY_STRING;
    

                                    }
                                

    BasicItemValidation basicItemValidation = BasicItemValidation(this->itemInterface);;
    

                        if(basicItemValidation.isValid() == Boolean::FALSE)
                        
                                    {
                                    stringBuffer.append(basicItemValidation.validationInfo());
    
stringBuffer.append("<br/>");
    

                                    }
                                

    StoreFrontInterface storeFrontInterface = StoreFrontFactory::getInstance(this->getWeblisketSession().getStoreName());;
    

    std::string fullCategory = StringMaker().append(URLGLOBALS::getWebappPath()).append(storeFrontInterface.getCurrentHostNamePath()).append(this->itemInterface.getCategory()).toString();;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("Category: " +fullCategory, this, "validationInfo()");
    

                                    }
                                

    AbFile categoryFile = AbFile::createAbFile(fullCategory);;
    

                        if(!categoryFile.isDirectory())
                        
                                    {
                                    stringBuffer.append("Category ");
    
stringBuffer.append(this->itemInterface.getCategory());
    
stringBuffer.append(" does not exist.<br />");
    

                                    }
                                

        try {
            
                        if(InventoryEntityFactory::getInstance().getInventoryEntityInstance().getItem(this->itemInterface.getId()) != 
                                    nullptr
                                )
                        
                                    {
                                    stringBuffer.append("Id is already in use. Refresh the page for a valid id.<br/>");
    

                                    }
                                

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("Existing Item With MoneyException", this, "validationInfo()");
    

                                    }
                                
}


    Object* anyType = this->getRequestHashMap().get(basicItemData.IMAGE);;
    

                        if(HttpFileUploadUtil::getInstance().isValid(anyType))
                        
                                    {
                                    
    FileItem fileItem = anyType as FileItem;;
    

    std::string fileName = fileItem.getName();;
    

    std::string fileItemFieldName = fileItem.getFieldName();;
    

    int64_t size = fileItem.getSize();;
    
this->validationInfo(stringBuffer, fileName, fileItemFieldName, size);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEWERROR))
                        
                                    {
                                    this->logUtil.put("Failed to generate validation error info", this, "validationInfo()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Error Getting Validation Info";
    
}

}


                //@Throws(Exception.constructor)
            
    private: Boolean isValid(std::string fileName, int64_t size){

    FileData fileData = FileData::getInstance();;
    

                        if(size > fileData.MINIMAGEFILESIZE)
                        
                                    {
                                    
                        if(size < fileData.MAXIMAGEFILESIZE)
                        
                                    {
                                    
                        if(!StringValidationUtil::getInstance().isValidRequired(fileName, fileData.MINLEN, fileData.MAXLEN))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                
                        else {
                            
    AbPathData pathData = AbPathData::getInstance();;
    

    std::string extension = pathData.getExtension(fileName);;
    

    UploadMediaSingleton uploadMedia = UploadMediaSingleton::getInstance();;
    

                        if(!uploadMedia.isWriterSupported(extension) && !uploadMedia.isReaderSupported(extension))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                

                        }
                            

                                    }
                                
                        else {
                            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("File Size To Large: ");
    
stringBuffer.appendlong(size);
    
stringBuffer.append(">");
    
stringBuffer.appendint(fileData.MAXIMAGEFILESIZE);
    
this->logUtil.putF(stringBuffer.toString(), this, this->commonStrings.IS_VALID);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                        }
                            
this->processImageFiles();
    

                                    }
                                
                        else {
                            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("File Size To Small: ");
    
stringBuffer.appendlong(size);
    
stringBuffer.append(">");
    
stringBuffer.appendint(fileData.MINIMAGEFILESIZE);
    
this->logUtil.putF(stringBuffer.toString(), this, this->commonStrings.IS_VALID);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::TRUE;
    
}


    private: void validationInfo(StringMaker stringBuffer, std::string fileName, std::string fileItemFieldName, int64_t size){

    FileData fileData = FileData::getInstance();;
    

                        if(size > fileData.MINIMAGEFILESIZE)
                        
                                    {
                                    
                        if(fileItemFieldName.compareTo(basicItemData.IMAGE) == 0)
                        
                                    {
                                    
                        if(size < fileData.MAXIMAGEFILESIZE)
                        
                                    {
                                    
                        if(!StringValidationUtil::getInstance().isValidRequired(fileName, fileData.MINLEN, fileData.MAXLEN))
                        
                                    {
                                    stringBuffer.append("FileName must be >");
    
stringBuffer.appendint(fileData.MINLEN);
    
stringBuffer.append(" and <");
    
stringBuffer.appendint(fileData.MAXLEN);
    
stringBuffer.append("<br/>");
    

                                    }
                                
                        else {
                            
    AbPathData pathData = AbPathData::getInstance();;
    

    std::string extension = pathData.getExtension(fileName);;
    

    UploadMediaSingleton uploadMedia = UploadMediaSingleton::getInstance();;
    

                        if(!uploadMedia.isWriterSupported(extension) && !uploadMedia.isReaderSupported(extension))
                        
                                    {
                                    stringBuffer.append("Image type: ");
    
stringBuffer.append(extension);
    
stringBuffer.append(" not supported.<br />");
    

                                    }
                                

                        }
                            

                                    }
                                
                        else {
                            stringBuffer.append("Image File Is To Large. ");
    
stringBuffer.appendint(fileData.MINIMAGEFILESIZE);
    
stringBuffer.append(" < > ");
    
stringBuffer.appendint(fileData.MAXIMAGEFILESIZE);
    
stringBuffer.append("<br/>");
    

                        }
                            

                                    }
                                

                                    }
                                
                        else {
                            stringBuffer.append("Image File Is To Small. ");
    
stringBuffer.appendint(fileData.MINIMAGEFILESIZE);
    
stringBuffer.append(" < > ");
    
stringBuffer.appendint(fileData.MAXIMAGEFILESIZE);
    
stringBuffer.append("<br/>");
    

                        }
                            
}


};

            

