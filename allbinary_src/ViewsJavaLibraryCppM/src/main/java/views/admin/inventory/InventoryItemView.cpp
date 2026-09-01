
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
        



            #include <vector>
        
            #include "../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <java/util/Vector.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItem.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemView.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/ItemInterface.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/download/DownloadableItem.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/download/DownloadableItemView.h>

      
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
        #include "InventoryUploadMediaUtil.h"

class InventoryItemView: public HttpStoreComponentView, public RequestMapInterface {

    public: static int32_t TYPE_ID = 10;

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: HttpServletRequest request;

    private: std::string imageFileName;

    private: MediaData mediaData;

    protected: ItemInterface itemInterface;

    protected: Vector downloadableItemVector;

    private: HashMap<any, any> requestHashMap;

public: InventoryItemView(TransformInfoInterface transformInfoInterface){
            super(transformInfoInterface);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->request= this->getPageContext().getRequest() as HttpServletRequest;
    
this->getFormData();
    
}


public: InventoryItemView(TransformInfoInterface transformInfoInterface, std::string empty){
            super(transformInfoInterface);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->request= this->getPageContext().getRequest() as HttpServletRequest;
    
}


    public: int32_t getTypeId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InventoryItemView::TYPE_ID;
    
}


                //@Throws(Exception.constructor)
            
    private: void getFormData(){
this->setRequestHashMap(MultipartRequestParams(this->request).toHashMap());
    

    Object* imageFileItemObject = this->getRequestHashMap().get(BasicItemData::IMAGE);;
    

                        if(HttpFileUploadUtil::getInstance().isValid(imageFileItemObject))
                        
                                    {
                                    
    FileItem fileItem = imageFileItemObject as FileItem;;
    

                        if(fileItem != 
                                    nullptr
                                 && fileItem.getSize() > 1)
                        
                                    {
                                    this->imageFileName= HttpRequestUtil::getInstance().generateFileName(fileItem.getName());
    

    AbPathData pathData = AbPathData::getInstance();;
    

    PathUtil pathUtil = PathUtil::getInstance();;
    
this->mediaData= MediaData::get(pathData.getExtension(this->imageFileName));
    
this->imageFileName= pathUtil.getWithoutExtension(this->imageFileName);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEWERROR))
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("Uploaded File Data: ");
    
stringBuffer.append(this->imageFileName);
    
stringBuffer.append(" Extension: ");
    
stringBuffer.append(this->mediaData.getName());
    
this->logUtil.putF(stringBuffer.toString(), this, "getFormData()");
    

                                    }
                                

                                    }
                                

                                    }
                                
this->itemInterface= BasicItem(this->getRequestHashMap()) as ItemInterface;
    
}


    public: void addDomNodeInterfaces(){

    Vector vector = Vector();;
    

    DownloadableItem downloadableItem;;
    

    int32_t size = this->downloadableItemVector.length;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
downloadableItem= this->downloadableItemVector.get(index) as DownloadableItem;
    
vector.add(DownloadableItemView(downloadableItem));
    
}

this->addDomNodeInterface(BasicItemView(this->itemInterface, vector));
    
}


    public: ItemInterface getItemInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->itemInterface;
    
}


                //@Throws(Exception.constructor)
            
    public: std::string view(){

        try {
            this->addDomNodeInterfaces();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.view();;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEWERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "view()", e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    protected: void processImageFiles(){

    Set set = this->getRequestHashMap().keys();;
    

    std::vector<Object*> fieldNameArray = set.toArray();;
    

    int32_t size = fieldNameArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string fieldName = fieldNameArray[index]! as string;;
    

                        if(fieldName.compareTo(BasicItemData::IMAGE) == 0)
                        
                                    {
                                    
    StoreFrontInterface storeFrontInterface = StoreFrontFactory::getInstance(this->getWeblisketSession().getStoreName());;
    

    InventoryUploadMediaUtil inventoryUploadMediaUtil = InventoryUploadMediaUtil(storeFrontInterface, this->itemInterface);;
    

    FileItem fileItem = this->getRequestHashMap().get(BasicItemData::IMAGE) as FileItem;;
    
this->itemInterface= inventoryUploadMediaUtil.saveFiles(fileItem.get(), this->imageFileName, this->mediaData);
    

                                    }
                                
}

}


    private: void setRequestHashMap(HashMap<any, any> requestHashMap){
this->requestHashMap= requestHashMap;
    
}


    public: HashMap<any, any> getRequestHashMap(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->requestHashMap;
    
}


};

            

