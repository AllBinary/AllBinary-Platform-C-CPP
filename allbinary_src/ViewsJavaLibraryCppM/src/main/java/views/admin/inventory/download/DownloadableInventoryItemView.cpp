
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
        



        #ifndef VIEWS_ADMIN_INVENTORY_DOWNLOAD_DOWNLOADABLEINVENTORYITEMVIEW_CPP
        #define VIEWS_ADMIN_INVENTORY_DOWNLOAD_DOWNLOADABLEINVENTORYITEMVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "views/admin/inventory/download/DownloadableInventoryItemView.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/io/ByteArrayInputStream.h>

      
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemView.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/ItemInterface.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/download/DownloadableItem.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/download/DownloadableItemView.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/http/request/MultipartRequestParams.h>

      
#include <org/allbinary/logic/communication/http/request/RequestMapInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/FilePathData.h>

      
#include <org/allbinary/logic/io/file/FileUtil.h>

      
#include <org/allbinary/logic/io/file/zip/ZipFileUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/apache/commons/fileupload/FileItem.h>

      
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

DownloadableInventoryItemView::DownloadableInventoryItemView(TransformInfoInterface* transformInfoInterface) : HttpStoreComponentView(transformInfoInterface), logUtil(LogUtil::getInstance()), basicItemData(BasicItemData::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->request= dynamic_cast<HttpServletRequest*>(this->getPageContext()->getRequest());
    
this->getFormData();
    
}


DownloadableInventoryItemView::DownloadableInventoryItemView(TransformInfoInterface* transformInfoInterface, std::string empty) : HttpStoreComponentView(transformInfoInterface), logUtil(LogUtil::getInstance()), basicItemData(BasicItemData::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->request= dynamic_cast<HttpServletRequest*>(this->getPageContext()->getRequest());
    
}


    auto DownloadableInventoryItemView::getTypeId() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return DownloadableInventoryItemView::TYPE_ID;
    
}


                //@Throws(Exception.constructor)
            
    auto DownloadableInventoryItemView::getFormData() -> void{
this->setRequestHashMap((new MultipartRequestParams(this->request))->toHashMap());
    
this->id= JavaBoxes::unbox<std::string>(this->getRequestHashMap()->get(basicItemData->ID));
    
}


    auto DownloadableInventoryItemView::addDomNodeInterfaces() -> void{

    BasicArrayList* vector = new BasicArrayListD();;
    

                        if(this->downloadableItem != 
                                    nullptr
                                )
                        
                                    {
                                    vector->add(new DownloadableItemView(this->downloadableItem));
    

                                    }
                                
this->addDomNodeInterface(new BasicItemView(this->itemInterface, vector));
    
}


                //@Throws(Exception.constructor)
            
    auto DownloadableInventoryItemView::view() -> std::string{

        try {
            this->addDomNodeInterfaces();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return HttpStoreComponentView::view();;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEWERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "view()", &e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    auto DownloadableInventoryItemView::processFile(FileItem* fileItem) -> void{

    std::string fileName = fileItem->getName();;
    

    std::string fullPath = this->getItemFilePath();;
    

    AbFile* itemResourceFile = AbFile::createAbFile(fullPath);;
    
itemResourceFile->mkdir();
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(fullPath);
    
stringBuffer->append(fileName);
    
this->logUtil->putF(JavaString::valueOf("FileName: ") +JavaString::valueOf(fileName), this, "processFile()");
    

    AbFile* file = AbFile::createAbFile(stringBuffer->toString());;
    
this->logUtil->putF(file->getPath(), this, "processFiles()");
    
file->createNewFile();
    

    std::vector<int8_t> byteArray = fileItem->get();;
    
FileUtil::getInstance()->write(new ByteArrayInputStream(byteArray), file);
    
}


                //@Throws(Exception.constructor)
            
    auto DownloadableInventoryItemView::unzip(FileItem* fileItem) -> void{

    std::string fileName = fileItem->getName();;
    

    std::string fullPath = this->getItemFilePath();;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(fullPath);
    
stringBuffer->append(fileName);
    
this->logUtil->putF(JavaString::valueOf("FileName: ") +JavaString::valueOf(fileName), this, "unzip()");
    

    AbFile* file = AbFile::createAbFile(stringBuffer->toString());;
    
this->logUtil->putF(file->getPath(), this, "unzip()");
    
ZipFileUtil::getInstance()->unzip(fullPath, file, fileName);
    
}


    auto DownloadableInventoryItemView::getItemFilePath() -> std::string{

    StoreFrontInterface* storeFrontInterface = StoreFrontFactory::getInstance(this->getWeblisketSession()->getStoreName());;
    

    FilePathData* filePathData = FilePathData::getInstance();;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(URLGLOBALS::getWebappPath());
    
stringBuffer->append(storeFrontInterface->getCurrentHostNamePath());
    
stringBuffer->append(this->itemInterface->getCategory());
    
stringBuffer->appendchar(filePathData->SEPARATORCHAR);
    
stringBuffer->append(this->itemInterface->getId());
    
stringBuffer->appendchar(filePathData->SEPARATORCHAR);
    
stringBuffer->append(this->downloadableItem->getId());
    
stringBuffer->appendchar(filePathData->SEPARATORCHAR);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    
}


    auto DownloadableInventoryItemView::setRequestHashMap(HashMap<Object*, Object*>* requestHashMap) -> void{
this->requestHashMap= requestHashMap;
    
}


    auto DownloadableInventoryItemView::getRequestHashMap() -> HashMap<Object*, Object*>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->requestHashMap;
    
}


    auto DownloadableInventoryItemView::getDownloadableItem() -> DownloadableItem*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->downloadableItem;
    
}




        #endif //VIEWS_ADMIN_INVENTORY_DOWNLOAD_DOWNLOADABLEINVENTORYITEMVIEW_CPP
