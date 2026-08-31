
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
        



            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Long.h"
        
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

class UpdateFileValidationView: public DownloadableInventoryItemView: public ValidationComponentInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

public constructor (TransformInfoInterface transformInfoInterface){
            super(transformInfoInterface);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public Boolean isValid(){

        try {
            
    command: string = this.getRequestHashMap()!.get(GLOBALS2.ADMINCOMMAND) as string;;
    

                        if(StringValidationUtil.getInstance()!.isEmpty(command) || command.compareTo(this.commonStrings!.UPDATE) != 0)
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("Invalid AdminCommand=" +command, this, this.commonStrings!.IS_VALID);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.FALSE;
    

                                    }
                                

        try {
            
    inventoryEntity: InventoryEntity = InventoryEntityFactory.getInstance()!.getInventoryEntityInstance()!;;
    
this.itemInterface= inventoryEntity!.getItem(this.id);
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.put("Existing Item With MoneyException", this, this.commonStrings!.IS_VALID, e);
    

                                    }
                                
}


                        if(this.itemInterface == 
                                    null
                                )
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("Item Does Not Exist", this, this.commonStrings!.IS_VALID);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.FALSE;
    

                                    }
                                

                        if(new BasicItemValidation(this.itemInterface).isValid() == Boolean.FALSE)
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("BasicItem is not valid", this, this.commonStrings!.IS_VALID);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.FALSE;
    

                                    }
                                

    storeFrontInterface: StoreFrontInterface = StoreFrontFactory.getInstance(this.getWeblisketSession()!.getStoreName())!;;
    

    fullCategory: string = new StringMaker().append(URLGLOBALS.getWebappPath())!.append(storeFrontInterface!.getCurrentHostNamePath())!.append(this.itemInterface!.getCategory())!.toString()!;;
    

    categoryFile: AbFile = AbFile.createAbFile(fullCategory)!;;
    

                        if(!categoryFile!.isDirectory())
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("Category Does Not Exist: " +fullCategory, this, this.commonStrings!.IS_VALID);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.FALSE;
    

                                    }
                                

    downloadableFileObject: any = this.getRequestHashMap()!.get(DownloadItemData.FILE)!;;
    

                        if(HttpFileUploadUtil.getInstance()!.isValid(downloadableFileObject))
                        
                                    {
                                    
    fileItem: FileItem = downloadableFileObject as FileItem;;
    

    fileName: string = fileItem!.getName()!;;
    

    size: int64_t = fileItem!.getSize()!;;
    
HttpFileUploadUtil.log(fileItem);
    

                        if(this.isValid(fileName, size) == Boolean.FALSE)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.FALSE;
    

                                    }
                                
                        else {
                            this.processFile(fileItem);
    
this.getRequestHashMap()!.put(DownloadItemData.SIZE, (size).toString());
    

                        }
                            

                                    }
                                
                        else {
                            this.getRequestHashMap()!.remove(DownloadItemData.FILE);
    

                        }
                            

    licenseFileObject: any = this.getRequestHashMap()!.get(DownloadItemData.LICENSE_FILE)!;;
    

                        if(HttpFileUploadUtil.getInstance()!.isValid(licenseFileObject))
                        
                                    {
                                    
    fileItem: FileItem = licenseFileObject as FileItem;;
    

    fileName: string = fileItem!.getName()!;;
    

    size: int64_t = fileItem!.getSize()!;;
    
HttpFileUploadUtil.log(fileItem);
    

                        if(this.isValid(fileName, size) == Boolean.FALSE)
                        
                                    {
                                    
                                    }
                                
                        else {
                            this.processFile(fileItem);
    

                        }
                            

                                    }
                                
                        else {
                            this.getRequestHashMap()!.remove(DownloadItemData.LICENSE_FILE);
    

                        }
                            

    extraFilesObject: any = this.getRequestHashMap()!.get(DownloadItemData.EXTRA_FILES)!;;
    

                        if(HttpFileUploadUtil.getInstance()!.isValid(extraFilesObject))
                        
                                    {
                                    
    fileItem: FileItem = extraFilesObject as FileItem;;
    

    fileName: string = fileItem!.getName()!;;
    

    size: int64_t = fileItem!.getSize()!;;
    
HttpFileUploadUtil.log(fileItem);
    

                        if(this.isValid(fileName, size) == Boolean.FALSE)
                        
                                    {
                                    
                                    }
                                
                        else {
                            this.processFile(fileItem);
    
this.unzip(fileItem);
    

                        }
                            

                                    }
                                
                        else {
                            this.getRequestHashMap()!.remove(DownloadItemData.EXTRA_FILES);
    

                        }
                            

    hashMap: HashMap<any, any> = this.getRequestHashMap()!;;
    
hashMap!.put(BasicItemData.ID, this.itemInterface!.getId());
    

    licenseObject: any = hashMap!.get(DownloadItemData.LICENSE_FILE)!;;
    

                        if(licenseObject != 
                                    null
                                )
                        
                                    {
                                    hashMap!.put(DownloadItemData.LICENSE_FILE, (licenseObject as FileItem).getName());
    

                                    }
                                
                        else {
                            hashMap!.put(DownloadItemData.LICENSE_FILE, StringUtil.getInstance()!.EMPTY_STRING);
    

                        }
                            

    fileObject: any = hashMap!.get(DownloadItemData.FILE)!;;
    

                        if(fileObject != 
                                    null
                                )
                        
                                    {
                                    hashMap!.put(DownloadItemData.FILE, (fileObject as FileItem).getName());
    

                                    }
                                
                        else {
                            hashMap!.put(DownloadItemData.FILE, StringUtil.getInstance()!.EMPTY_STRING);
    

                        }
                            
this.downloadableItem= new DownloadableItem(hashMap);
    

    downloadableItemValidation: DownloadableItemValidation = new DownloadableItemValidation(this.downloadableItem);;
    

                        if(downloadableItemValidation!.isValid() == Boolean.FALSE)
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("DownloadableItem is not valid", this, this.commonStrings!.IS_VALID);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.FALSE;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.TRUE;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEWERROR))
                        
                                    {
                                    this.logUtil!.put("Exception in validation", this, this.commonStrings!.IS_VALID, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.FALSE;
    
}

}


    public Document toValidationInfoDoc(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public Node toValidationInfoNode(Document document){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public string validationInfo(){

        try {
            
    stringBuffer: StringMaker = new StringMaker();;
    

    command: string = this.getRequestHashMap()!.get(GLOBALS2.ADMINCOMMAND) as string;;
    

                        if(StringValidationUtil.getInstance()!.isEmpty(command) || command.compareTo(this.commonStrings!.UPDATE) != 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil.getInstance()!.EMPTY_STRING;
    

                                    }
                                

                        if(this.itemInterface == 
                                    null
                                )
                        
                                    {
                                    
    ITEM_NOT_FOUND: string = "Item Does Not Exist";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF(ITEM_NOT_FOUND, this, "validationInfo()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ITEM_NOT_FOUND;
    

                                    }
                                

    basicItemValidation: BasicItemValidation = new BasicItemValidation(this.itemInterface);;
    

                        if(basicItemValidation!.isValid() == Boolean.FALSE)
                        
                                    {
                                    stringBuffer!.append(basicItemValidation!.validationInfo());
    
stringBuffer!.append("<br/>");
    

                                    }
                                

    storeFrontInterface: StoreFrontInterface = StoreFrontFactory.getInstance(this.getWeblisketSession()!.getStoreName())!;;
    

    fullCategory: string = new StringMaker().append(URLGLOBALS.getWebappPath())!.append(storeFrontInterface!.getCurrentHostNamePath())!.append(this.itemInterface!.getCategory())!.toString()!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("Category: " +fullCategory, this, "validationInfo()");
    

                                    }
                                

    categoryFile: AbFile = AbFile.createAbFile(fullCategory)!;;
    

                        if(!categoryFile!.isDirectory())
                        
                                    {
                                    stringBuffer!.append("Category ");
    
stringBuffer!.append(this.itemInterface!.getCategory());
    
stringBuffer!.append(" does not exist.");
    
stringBuffer!.append("<br />");
    

                                    }
                                

    downloadableFileObject: any = this.getRequestHashMap()!.get(DownloadItemData.FILE)!;;
    

                        if(HttpFileUploadUtil.getInstance()!.isValid(downloadableFileObject))
                        
                                    {
                                    
    fileItem: FileItem = downloadableFileObject as FileItem;;
    

    fileName: string = fileItem!.getName()!;;
    

    size: int64_t = fileItem!.getSize()!;;
    
this.validationInfo(stringBuffer, fileName, size);
    

                                    }
                                
                        else {
                            stringBuffer!.append("Download File Missing");
    
stringBuffer!.append("<br/>");
    

                        }
                            

    licenseFileObject: any = this.getRequestHashMap()!.get(DownloadItemData.LICENSE_FILE)!;;
    

                        if(HttpFileUploadUtil.getInstance()!.isValid(licenseFileObject))
                        
                                    {
                                    
    fileItem: FileItem = licenseFileObject as FileItem;;
    

    fileName: string = fileItem!.getName()!;;
    

    size: int64_t = fileItem!.getSize()!;;
    
this.validationInfo(stringBuffer, fileName, size);
    

                                    }
                                
                        else {
                            
                        }
                            

    extraFilesObject: any = this.getRequestHashMap()!.get(DownloadItemData.EXTRA_FILES)!;;
    

                        if(HttpFileUploadUtil.getInstance()!.isValid(extraFilesObject))
                        
                                    {
                                    
    fileItem: FileItem = extraFilesObject as FileItem;;
    

    fileName: string = fileItem!.getName()!;;
    

    size: int64_t = fileItem!.getSize()!;;
    
this.validationInfo(stringBuffer, fileName, size);
    

                                    }
                                
                        else {
                            
                        }
                            

                        if(this.downloadableItem != 
                                    null
                                )
                        
                                    {
                                    
    downloadableItemValidation: DownloadableItemValidation = new DownloadableItemValidation(this.downloadableItem);;
    

                        if(downloadableItemValidation!.isValid() == Boolean.FALSE)
                        
                                    {
                                    
    log: string = downloadableItemValidation!.validationInfo()!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF(log, this, this.commonStrings!.IS_VALID);
    

                                    }
                                
stringBuffer!.append(log);
    
stringBuffer!.append("<br/>");
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEWERROR))
                        
                                    {
                                    this.logUtil!.put("Failed to generate validation error info", this, "validationInfo()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Error Getting Validation Info";
    
}

}


                //@Throws(Exception.constructor)
            
    Boolean isValid(string fileName, int64_t size){

    fileData: FileData = FileData.getInstance()!;;
    

                        if(size > fileData!.MINDOWNLOADABLEFILESIZE)
                        
                                    {
                                    
                        if(size < fileData!.MAXDOWNLOADABLEFILESIZE)
                        
                                    {
                                    
                        if(!StringValidationUtil.getInstance()!.isValidRequired(fileName, fileData!.MINLEN, fileData!.MAXLEN))
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("File name is not valid: ");
    
stringBuffer!.append(fileName);
    
this.logUtil!.putF(stringBuffer!.toString(), this, this.commonStrings!.IS_VALID);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.FALSE;
    

                                    }
                                
                        else {
                            
                        }
                            

                                    }
                                
                        else {
                            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("File Size To Large: ");
    
stringBuffer!.appendlong(size);
    
stringBuffer!.append(">");
    
stringBuffer!.appendint(fileData!.MAXDOWNLOADABLEFILESIZE);
    
this.logUtil!.putF(stringBuffer!.toString(), this, this.commonStrings!.IS_VALID);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.FALSE;
    

                        }
                            

                                    }
                                
                        else {
                            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("File Size To Small: ");
    
stringBuffer!.appendlong(size);
    
stringBuffer!.append(">");
    
stringBuffer!.appendint(fileData!.MINDOWNLOADABLEFILESIZE);
    
this.logUtil!.putF(stringBuffer!.toString(), this, this.commonStrings!.IS_VALID);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.FALSE;
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.TRUE;
    
}


    validationInfo(StringMaker stringBuffer, string fileName, int64_t size){

    fileData: FileData = FileData.getInstance()!;;
    

                        if(size > fileData!.MINDOWNLOADABLEFILESIZE)
                        
                                    {
                                    
                        if(size < fileData!.MAXDOWNLOADABLEFILESIZE)
                        
                                    {
                                    
                        if(!StringValidationUtil.getInstance()!.isValidRequired(fileName, fileData!.MINLEN, fileData!.MAXLEN))
                        
                                    {
                                    stringBuffer!.append("File Name must be more than ");
    
stringBuffer!.appendint(fileData!.MINLEN);
    
stringBuffer!.append(" and less than ");
    
stringBuffer!.appendint(fileData!.MAXLEN);
    
stringBuffer!.append(" characters in length: ");
    
stringBuffer!.append(fileName);
    
stringBuffer!.append("<br/>");
    

                                    }
                                
                        else {
                            
                        }
                            

                                    }
                                
                        else {
                            stringBuffer!.append("File Is Not The Right Size. ");
    
stringBuffer!.appendint(fileData!.MINDOWNLOADABLEFILESIZE);
    
stringBuffer!.append("< >");
    
stringBuffer!.appendint(fileData!.MAXDOWNLOADABLEFILESIZE);
    
stringBuffer!.append("<br/>");
    

                        }
                            

                                    }
                                
}


};

            

