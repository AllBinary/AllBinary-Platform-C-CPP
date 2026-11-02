
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
        



        #ifndef VIEWS_ADMIN_INVENTORY_INVENTORYITEMVIEW_CPP
        #define VIEWS_ADMIN_INVENTORY_INVENTORYITEMVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "views/admin/inventory/InventoryItemView.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItem.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemView.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/ItemInterface.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/download/DownloadableItem.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/download/DownloadableItemView.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/http/file/upload/HttpFileUploadUtil.h>

      
#include <org/allbinary/logic/communication/http/request/HttpRequestUtil.h>

      
#include <org/allbinary/logic/communication/http/request/MultipartRequestParams.h>

      
#include <org/allbinary/logic/communication/http/request/RequestMapInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/io/path/PathUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/visual/media/MediaData.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/apache/commons/fileupload/FileItem.h>

      
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "views/admin/inventory/InventoryUploadMediaUtil.h"


InventoryItemView::InventoryItemView(TransformInfoInterface* transformInfoInterface) : HttpStoreComponentView(transformInfoInterface), logUtil(LogUtil::getInstance()), basicItemData(BasicItemData::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->request= dynamic_cast<HttpServletRequest*>(this->getPageContext()->getRequest());
    
this->getFormData();
    
}


InventoryItemView::InventoryItemView(TransformInfoInterface* transformInfoInterface, std::string empty) : HttpStoreComponentView(transformInfoInterface), logUtil(LogUtil::getInstance()), basicItemData(BasicItemData::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->request= dynamic_cast<HttpServletRequest*>(this->getPageContext()->getRequest());
    
}


    auto InventoryItemView::getTypeId() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InventoryItemView::TYPE_ID;
    
}


                //@Throws(Exception.constructor)
            
    auto InventoryItemView::getFormData() -> void{
this->setRequestHashMap((new MultipartRequestParams(this->request))->toHashMap());
    

    Object* imageFileItemObject = this->getRequestHashMap()->get(basicItemData->IMAGE);;
    

                        if(HttpFileUploadUtil::getInstance()->isValid(imageFileItemObject))
                        
                                    {
                                    
    FileItem* fileItem = dynamic_cast<FileItem*>(imageFileItemObject);;
    

                        if(fileItem != 
                                    nullptr
                                 && fileItem->getSize() > 1)
                        
                                    {
                                    this->imageFileName= HttpRequestUtil::getInstance()->generateFileName(fileItem->getName());
    

    AbPathData* pathData = AbPathData::getInstance();;
    

    PathUtil* pathUtil = PathUtil::getInstance();;
    
this->mediaData= MediaData::get(pathData->getExtension(this->imageFileName));
    
this->imageFileName= pathUtil->getWithoutExtension(this->imageFileName);
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEWERROR))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Uploaded File Data: ");
    
stringBuffer->append(this->imageFileName);
    
stringBuffer->append(" Extension: ");
    
stringBuffer->append(this->mediaData->getName());
    
this->logUtil->putF(stringBuffer->toString(), this, "getFormData()");
    

                                    }
                                

                                    }
                                

                                    }
                                
this->itemInterface= dynamic_cast<ItemInterface*>(new BasicItem(this->getRequestHashMap()));
    
}


    auto InventoryItemView::addDomNodeInterfaces() -> void{

    BasicArrayList* vector = new BasicArrayListD();;
    

    DownloadableItem* downloadableItem;;
    

    int32_t size = this->downloadableItemVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
downloadableItem= dynamic_cast<DownloadableItem*>(this->downloadableItemVector->get(index));
    
vector->add(new DownloadableItemView(downloadableItem));
    
}

this->addDomNodeInterface(new BasicItemView(this->itemInterface, vector));
    
}


    auto InventoryItemView::getItemInterface() -> ItemInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->itemInterface;
    
}


                //@Throws(Exception.constructor)
            
    auto InventoryItemView::view() -> std::string{

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
            
    auto InventoryItemView::processImageFiles() -> void{

    Set* set = this->getRequestHashMap()->keys();;
    

    std::vector<Object*> fieldNameArray = set->toArray();;
    

    int32_t size = fieldNameArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string fieldName = JavaBoxes::unbox<std::string>(fieldNameArray[index]);;
    

                        if(fieldName.compare(basicItemData->IMAGE) == 0)
                        
                                    {
                                    
    StoreFrontInterface* storeFrontInterface = StoreFrontFactory::getInstance(this->getWeblisketSession()->getStoreName());;
    

    InventoryUploadMediaUtil* inventoryUploadMediaUtil = new InventoryUploadMediaUtil(storeFrontInterface, this->itemInterface);;
    

    FileItem* fileItem = dynamic_cast<FileItem*>(this->getRequestHashMap()->get(basicItemData->IMAGE));;
    
this->itemInterface= inventoryUploadMediaUtil->saveFiles(fileItem->get(), this->imageFileName, this->mediaData);
    

                                    }
                                
}

}


    auto InventoryItemView::setRequestHashMap(HashMap<Object*, Object*>* requestHashMap) -> void{
this->requestHashMap= requestHashMap;
    
}


    auto InventoryItemView::getRequestHashMap() -> HashMap<Object*, Object*>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->requestHashMap;
    
}




        #endif //VIEWS_ADMIN_INVENTORY_INVENTORYITEMVIEW_CPP
