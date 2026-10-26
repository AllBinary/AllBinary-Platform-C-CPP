
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
        



            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemValidation.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/download/DownloadItemData.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/download/DownloadableItem.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/download/DownloadableItemValidation.h>

      
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

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/apache/commons/fileupload/FileItem.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DownloadableInventoryItemView.h"

class UpdateFileValidationView: public DownloadableInventoryItemView, public ValidationComponentInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

public: UpdateFileValidationView(TransformInfoInterface transformInfoInterface) : DownloadableInventoryItemView(transformInfoInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: Boolean isValid(){

        try {
            
    std::string command = this->getRequestHashMap().get(GLOBALS2::ADMINCOMMAND);;
    

                        if(StringValidationUtil::getInstance().isEmpty(command) || command.compare(this->commonStrings.UPDATE) != 0)
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("Invalid AdminCommand=" +command, this, this->commonStrings.IS_VALID);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                

        try {
            
    InventoryEntity inventoryEntity = InventoryEntityFactory::getInstance().getInventoryEntityInstance();;
    
this->itemInterface= inventoryEntity.getItem(this->id);
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.put("Existing Item With MoneyException", this, this->commonStrings.IS_VALID, e);
    

                                    }
                                
}


                        if(this->itemInterface == 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("Item Does Not Exist", this, this->commonStrings.IS_VALID);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                

                        if(BasicItemValidation(this->itemInterface).isValid() == Boolean::FALSE)
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("BasicItem is not valid", this, this->commonStrings.IS_VALID);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                

    StoreFrontInterface storeFrontInterface = StoreFrontFactory::getInstance(this->getWeblisketSession().getStoreName());;
    

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
                                

    Object* downloadableFileObject = this->getRequestHashMap().get(DownloadItemData::FILE);;
    

                        if(HttpFileUploadUtil::getInstance().isValid(downloadableFileObject))
                        
                                    {
                                    
    FileItem fileItem = *dynamic_cast<FileItem*>(downloadableFileObject);;
    

    std::string fileName = fileItem.getName();;
    

    int64_t size = fileItem.getSize();;
    
HttpFileUploadUtil::log(fileItem);
    

                        if(this->isValid(fileName, size) == Boolean::FALSE)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                
                        else {
                            this->processFile(fileItem);
    
this->getRequestHashMap().put(DownloadItemData::SIZE, std::to_string(size));
    

                        }
                            

                                    }
                                
                        else {
                            this->getRequestHashMap().remove(DownloadItemData::FILE);
    

                        }
                            

    Object* licenseFileObject = this->getRequestHashMap().get(DownloadItemData::LICENSE_FILE);;
    

                        if(HttpFileUploadUtil::getInstance().isValid(licenseFileObject))
                        
                                    {
                                    
    FileItem fileItem = *dynamic_cast<FileItem*>(licenseFileObject);;
    

    std::string fileName = fileItem.getName();;
    

    int64_t size = fileItem.getSize();;
    
HttpFileUploadUtil::log(fileItem);
    

                        if(this->isValid(fileName, size) == Boolean::FALSE)
                        
                                    {
                                    
                                    }
                                
                        else {
                            this->processFile(fileItem);
    

                        }
                            

                                    }
                                
                        else {
                            this->getRequestHashMap().remove(DownloadItemData::LICENSE_FILE);
    

                        }
                            

    Object* extraFilesObject = this->getRequestHashMap().get(DownloadItemData::EXTRA_FILES);;
    

                        if(HttpFileUploadUtil::getInstance().isValid(extraFilesObject))
                        
                                    {
                                    
    FileItem fileItem = *dynamic_cast<FileItem*>(extraFilesObject);;
    

    std::string fileName = fileItem.getName();;
    

    int64_t size = fileItem.getSize();;
    
HttpFileUploadUtil::log(fileItem);
    

                        if(this->isValid(fileName, size) == Boolean::FALSE)
                        
                                    {
                                    
                                    }
                                
                        else {
                            this->processFile(fileItem);
    
this->unzip(fileItem);
    

                        }
                            

                                    }
                                
                        else {
                            this->getRequestHashMap().remove(DownloadItemData::EXTRA_FILES);
    

                        }
                            

    HashMap<Object*, Object*> hashMap = this->getRequestHashMap();;
    
hashMap.put(basicItemData.ID, this->itemInterface.getId());
    

    Object* licenseObject = hashMap.get(DownloadItemData::LICENSE_FILE);;
    

                        if(licenseObject != 
                                    nullptr
                                )
                        
                                    {
                                    hashMap.put(DownloadItemData::LICENSE_FILE, (licenseObject)).getName());
    

                                    }
                                
                        else {
                            hashMap.put(DownloadItemData::LICENSE_FILE, StringUtil::getInstance().EMPTY_STRING);
    

                        }
                            

    Object* fileObject = hashMap.get(DownloadItemData::FILE);;
    

                        if(fileObject != 
                                    nullptr
                                )
                        
                                    {
                                    hashMap.put(DownloadItemData::FILE, (fileObject)).getName());
    

                                    }
                                
                        else {
                            hashMap.put(DownloadItemData::FILE, StringUtil::getInstance().EMPTY_STRING);
    

                        }
                            
this->downloadableItem= DownloadableItem(hashMap);
    

    DownloadableItemValidation downloadableItemValidation = DownloadableItemValidation(this->downloadableItem);;
    

                        if(downloadableItemValidation.isValid() == Boolean::FALSE)
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("DownloadableItem is not valid", this, this->commonStrings.IS_VALID);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

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
    

    std::string command = this->getRequestHashMap().get(GLOBALS2::ADMINCOMMAND);;
    

                        if(StringValidationUtil::getInstance().isEmpty(command) || command.compare(this->commonStrings.UPDATE) != 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::getInstance().EMPTY_STRING;
    

                                    }
                                

                        if(this->itemInterface == 
                                    nullptr
                                )
                        
                                    {
                                    
    std::string ITEM_NOT_FOUND = "Item Does Not Exist";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF(ITEM_NOT_FOUND, this, "validationInfo()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ITEM_NOT_FOUND;
    

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
    
stringBuffer.append(" does not exist.");
    
stringBuffer.append("<br />");
    

                                    }
                                

    Object* downloadableFileObject = this->getRequestHashMap().get(DownloadItemData::FILE);;
    

                        if(HttpFileUploadUtil::getInstance().isValid(downloadableFileObject))
                        
                                    {
                                    
    FileItem fileItem = *dynamic_cast<FileItem*>(downloadableFileObject);;
    

    std::string fileName = fileItem.getName();;
    

    int64_t size = fileItem.getSize();;
    
this->validationInfo(stringBuffer, fileName, size);
    

                                    }
                                
                        else {
                            stringBuffer.append("Download File Missing");
    
stringBuffer.append("<br/>");
    

                        }
                            

    Object* licenseFileObject = this->getRequestHashMap().get(DownloadItemData::LICENSE_FILE);;
    

                        if(HttpFileUploadUtil::getInstance().isValid(licenseFileObject))
                        
                                    {
                                    
    FileItem fileItem = *dynamic_cast<FileItem*>(licenseFileObject);;
    

    std::string fileName = fileItem.getName();;
    

    int64_t size = fileItem.getSize();;
    
this->validationInfo(stringBuffer, fileName, size);
    

                                    }
                                
                        else {
                            
                        }
                            

    Object* extraFilesObject = this->getRequestHashMap().get(DownloadItemData::EXTRA_FILES);;
    

                        if(HttpFileUploadUtil::getInstance().isValid(extraFilesObject))
                        
                                    {
                                    
    FileItem fileItem = *dynamic_cast<FileItem*>(extraFilesObject);;
    

    std::string fileName = fileItem.getName();;
    

    int64_t size = fileItem.getSize();;
    
this->validationInfo(stringBuffer, fileName, size);
    

                                    }
                                
                        else {
                            
                        }
                            

                        if(this->downloadableItem != 
                                    nullptr
                                )
                        
                                    {
                                    
    DownloadableItemValidation downloadableItemValidation = DownloadableItemValidation(this->downloadableItem);;
    

                        if(downloadableItemValidation.isValid() == Boolean::FALSE)
                        
                                    {
                                    
    std::string log = downloadableItemValidation.validationInfo();;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF(log, this, this->commonStrings.IS_VALID);
    

                                    }
                                
stringBuffer.append(log);
    
stringBuffer.append("<br/>");
    

                                    }
                                

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
    

                        if(size > fileData.MINDOWNLOADABLEFILESIZE)
                        
                                    {
                                    
                        if(size < fileData.MAXDOWNLOADABLEFILESIZE)
                        
                                    {
                                    
                        if(!StringValidationUtil::getInstance().isValidRequired(fileName, fileData.MINLEN, fileData.MAXLEN))
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("File name is not valid: ");
    
stringBuffer.append(fileName);
    
this->logUtil.putF(stringBuffer.toString(), this, this->commonStrings.IS_VALID);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                
                        else {
                            
                        }
                            

                                    }
                                
                        else {
                            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("File Size To Large: ");
    
stringBuffer.appendlong(size);
    
stringBuffer.append(">");
    
stringBuffer.appendint(fileData.MAXDOWNLOADABLEFILESIZE);
    
this->logUtil.putF(stringBuffer.toString(), this, this->commonStrings.IS_VALID);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                        }
                            

                                    }
                                
                        else {
                            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("File Size To Small: ");
    
stringBuffer.appendlong(size);
    
stringBuffer.append(">");
    
stringBuffer.appendint(fileData.MINDOWNLOADABLEFILESIZE);
    
this->logUtil.putF(stringBuffer.toString(), this, this->commonStrings.IS_VALID);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::TRUE;
    
}


    private: void validationInfo(StringMaker stringBuffer, std::string fileName, int64_t size){

    FileData fileData = FileData::getInstance();;
    

                        if(size > fileData.MINDOWNLOADABLEFILESIZE)
                        
                                    {
                                    
                        if(size < fileData.MAXDOWNLOADABLEFILESIZE)
                        
                                    {
                                    
                        if(!StringValidationUtil::getInstance().isValidRequired(fileName, fileData.MINLEN, fileData.MAXLEN))
                        
                                    {
                                    stringBuffer.append("File Name must be more than ");
    
stringBuffer.appendint(fileData.MINLEN);
    
stringBuffer.append(" and less than ");
    
stringBuffer.appendint(fileData.MAXLEN);
    
stringBuffer.append(" characters in length: ");
    
stringBuffer.append(fileName);
    
stringBuffer.append("<br/>");
    

                                    }
                                
                        else {
                            
                        }
                            

                                    }
                                
                        else {
                            stringBuffer.append("File Is Not The Right Size. ");
    
stringBuffer.appendint(fileData.MINDOWNLOADABLEFILESIZE);
    
stringBuffer.append("< >");
    
stringBuffer.appendint(fileData.MAXDOWNLOADABLEFILESIZE);
    
stringBuffer.append("<br/>");
    

                        }
                            

                                    }
                                
}


};

            

