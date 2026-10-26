
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
        



        #ifndef VIEWS_ADMIN_INVENTORY_DOWNLOAD_DOWNLOADABLEINVENTORYITEMVIEW_H
        #define VIEWS_ADMIN_INVENTORY_DOWNLOAD_DOWNLOADABLEINVENTORYITEMVIEW_H

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

public: DownloadableInventoryItemView(TransformInfoInterface transformInfoInterface);

public: DownloadableInventoryItemView(TransformInfoInterface transformInfoInterface, std::string empty);

    public: int32_t getTypeId();

                //@Throws(Exception.constructor)
            
    private: void getFormData();

    public: void addDomNodeInterfaces();

                //@Throws(Exception.constructor)
            
    public: std::string view();

                //@Throws(Exception.constructor)
            
    protected: void processFile(FileItem fileItem);

                //@Throws(Exception.constructor)
            
    protected: void unzip(FileItem fileItem);

    private: std::string getItemFilePath();

    private: void setRequestHashMap(HashMap<Object*, Object*> requestHashMap);

    public: HashMap<Object*, Object*> getRequestHashMap();

    public: DownloadableItem getDownloadableItem();

};

            


        #endif //VIEWS_ADMIN_INVENTORY_DOWNLOAD_DOWNLOADABLEINVENTORYITEMVIEW_H
