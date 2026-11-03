
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
        



        #ifndef VIEWS_ADMIN_INVENTORY_INVENTORYITEMVIEW_H
        #define VIEWS_ADMIN_INVENTORY_INVENTORYITEMVIEW_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
#include <java/util/Set.h>
class BasicArrayList;
class BasicArrayListD;
class HttpServletRequest;
class StoreFrontFactory;
class StoreFrontInterface;
class BasicItem;
class BasicItemData;
class BasicItemView;
class ItemInterface;
class DownloadableItem;
class DownloadableItemView;

class HttpFileUploadUtil;
class HttpRequestUtil;
class MultipartRequestParams;
#include <org/allbinary/logic/communication/http/request/RequestMapInterface.h>
class LogUtil;
class AbPathData;
class PathUtil;
class StringMaker;
class MediaData;
class TransformInfoInterface;
class FileItem;
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class InventoryUploadMediaUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InventoryItemView: public HttpStoreComponentView, public virtual RequestMapInterface {

    public: static inline int32_t TYPE_ID = 10;

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: BasicItemData* basicItemData;

    /*protected*/ public: HttpServletRequest* request;

    private: std::string imageFileName;

    private: MediaData* mediaData;

    /*protected*/ public: ItemInterface* itemInterface;

    /*protected*/ public: BasicArrayList* downloadableItemVector;

    private: HashMap<Object*, Object*>* requestHashMap;

public: InventoryItemView(TransformInfoInterface* transformInfoInterface);

public: InventoryItemView(TransformInfoInterface* transformInfoInterface, std::string empty);

    public: int32_t getTypeId();

                //@Throws(Exception.constructor)
            
    private: void getFormData();

    public: void addDomNodeInterfaces();

    public: ItemInterface* getItemInterface();

                //@Throws(Exception.constructor)
            
    public: std::string view();

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void processImageFiles();

    private: void setRequestHashMap(HashMap<Object*, Object*>* requestHashMap);

    public: HashMap<Object*, Object*>* getRequestHashMap();

};

            


        #endif //VIEWS_ADMIN_INVENTORY_INVENTORYITEMVIEW_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(VIEWS_ADMIN_INVENTORY_INVENTORYITEMVIEW_H_COMPLETE)
        #define VIEWS_ADMIN_INVENTORY_INVENTORYITEMVIEW_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<java/util/Set.h>)
#include <java/util/Set.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<javax/servlet/http/HttpServletRequest.h>)
#include <javax/servlet/http/HttpServletRequest.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/item/BasicItem.h>)
#include <org/allbinary/business/user/commerce/inventory/item/BasicItem.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>)
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/item/BasicItemView.h>)
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemView.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/item/ItemInterface.h>)
#include <org/allbinary/business/user/commerce/inventory/item/ItemInterface.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/item/download/DownloadableItem.h>)
#include <org/allbinary/business/user/commerce/inventory/item/download/DownloadableItem.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/item/download/DownloadableItemView.h>)
#include <org/allbinary/business/user/commerce/inventory/item/download/DownloadableItemView.h>
#endif

#if __has_include(<org/allbinary/logic/communication/http/file/upload/HttpFileUploadUtil.h>)
#include <org/allbinary/logic/communication/http/file/upload/HttpFileUploadUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/request/HttpRequestUtil.h>)
#include <org/allbinary/logic/communication/http/request/HttpRequestUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/request/MultipartRequestParams.h>)
#include <org/allbinary/logic/communication/http/request/MultipartRequestParams.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/request/RequestMapInterface.h>)
#include <org/allbinary/logic/communication/http/request/RequestMapInterface.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPathData.h>)
#include <org/allbinary/logic/io/path/AbPathData.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/PathUtil.h>)
#include <org/allbinary/logic/io/path/PathUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/visual/media/MediaData.h>)
#include <org/allbinary/logic/visual/media/MediaData.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif
#if __has_include(<org/apache/commons/fileupload/FileItem.h>)
#include <org/apache/commons/fileupload/FileItem.h>
#endif
#if __has_include(<views/business/context/modules/storefront/HttpStoreComponentView.h>)
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>
#endif
#if __has_include("views/admin/inventory/InventoryUploadMediaUtil.h")
#include "views/admin/inventory/InventoryUploadMediaUtil.h"
#endif

        #endif
    
