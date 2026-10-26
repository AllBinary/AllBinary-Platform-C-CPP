
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
        
class DownloadableInventoryItemView: public HttpStoreComponentView, public RequestMapInterface {

    public: static int32_t TYPE_ID = 11;

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const BasicItemData basicItemData = BasicItemData::getInstance();

    protected: HttpServletRequest request;

    protected: std::string id;

    protected: ItemInterface itemInterface;

    protected: DownloadableItem downloadableItem;

    private: HashMap<Object*, Object*> requestHashMap;

public: DownloadableInventoryItemView(TransformInfoInterface transformInfoInterface) : HttpStoreComponentView(transformInfoInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->request= this->getPageContext().getRequest();
    
this->getFormData();
    
}


public: DownloadableInventoryItemView(TransformInfoInterface transformInfoInterface, std::string empty) : HttpStoreComponentView(transformInfoInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->request= this->getPageContext().getRequest();
    
}


    public: int32_t getTypeId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DownloadableInventoryItemView::TYPE_ID;
    
}


                //@Throws(Exception.constructor)
            
    private: void getFormData(){
this->setRequestHashMap(MultipartRequestParams(this->request).toHashMap());
    
this->id= this->getRequestHashMap().get(basicItemData.ID);
    
}


    public: void addDomNodeInterfaces(){

    BasicArrayList vector = BasicArrayListD();;
    

                        if(this->downloadableItem != 
                                    nullptr
                                )
                        
                                    {
                                    vector.add(DownloadableItemView(this->downloadableItem));
    

                                    }
                                
this->addDomNodeInterface(BasicItemView(this->itemInterface, vector));
    
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
            
    protected: void processFile(FileItem fileItem){

    std::string fileName = fileItem.getName();;
    

    std::string fullPath = this->getItemFilePath();;
    

    AbFile itemResourceFile = AbFile::createAbFile(fullPath);;
    
itemResourceFile.mkdir();
    

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(fullPath);
    
stringBuffer.append(fileName);
    
this->logUtil.putF("FileName: " +fileName, this, "processFile()");
    

    AbFile file = AbFile::createAbFile(stringBuffer.toString());;
    
this->logUtil.putF(file.getPath(), this, "processFiles()");
    
file.createNewFile();
    

    std::vector<int8_t> byteArray = fileItem.get();;
    
FileUtil::getInstance().write(ByteArrayInputStream(byteArray), file);
    
}


                //@Throws(Exception.constructor)
            
    protected: void unzip(FileItem fileItem){

    std::string fileName = fileItem.getName();;
    

    std::string fullPath = this->getItemFilePath();;
    

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(fullPath);
    
stringBuffer.append(fileName);
    
this->logUtil.putF("FileName: " +fileName, this, "unzip()");
    

    AbFile file = AbFile::createAbFile(stringBuffer.toString());;
    
this->logUtil.putF(file.getPath(), this, "unzip()");
    
ZipFileUtil::getInstance().unzip(fullPath, file, fileName);
    
}


    private: std::string getItemFilePath(){

    StoreFrontInterface storeFrontInterface = StoreFrontFactory::getInstance(this->getWeblisketSession().getStoreName());;
    

    FilePathData filePathData = FilePathData::getInstance();;
    

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(URLGLOBALS::getWebappPath());
    
stringBuffer.append(storeFrontInterface.getCurrentHostNamePath());
    
stringBuffer.append(this->itemInterface.getCategory());
    
stringBuffer.appendchar(filePathData.SEPARATORCHAR);
    
stringBuffer.append(this->itemInterface.getId());
    
stringBuffer.appendchar(filePathData.SEPARATORCHAR);
    
stringBuffer.append(this->downloadableItem.getId());
    
stringBuffer.appendchar(filePathData.SEPARATORCHAR);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


    private: void setRequestHashMap(HashMap<Object*, Object*> requestHashMap){
this->requestHashMap= requestHashMap;
    
}


    public: HashMap<Object*, Object*> getRequestHashMap(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->requestHashMap;
    
}


    public: DownloadableItem getDownloadableItem(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->downloadableItem;
    
}


};

            

