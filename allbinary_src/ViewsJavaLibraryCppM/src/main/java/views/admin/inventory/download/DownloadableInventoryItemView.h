
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/io/ByteArrayInputStream.h>
#include <java/util/HashMap.h>
class BasicArrayList;
class BasicArrayListD;
class HttpServletRequest;
class StoreFrontFactory;
class StoreFrontInterface;
class BasicItemData;
class BasicItemView;
class ItemInterface;
class DownloadableItem;
class DownloadableItemView;
class URLGLOBALS;

class MultipartRequestParams;
#include <org/allbinary/logic/communication/http/request/RequestMapInterface.h>
class LogUtil;
class AbFile;
class FilePathData;
class FileUtil;
class ZipFileUtil;
class StringMaker;
class TransformInfoInterface;
class FileItem;
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DownloadableInventoryItemView: public HttpStoreComponentView, public RequestMapInterface {

    public: static inline int32_t TYPE_ID = 11;

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: BasicItemData* basicItemData;

    /*protected*/ public: HttpServletRequest* request;

    /*protected*/ public: std::string id;

    /*protected*/ public: ItemInterface* itemInterface;

    /*protected*/ public: DownloadableItem* downloadableItem;

    private: HashMap<Object*, Object*>* requestHashMap;

public: DownloadableInventoryItemView(TransformInfoInterface* transformInfoInterface);

public: DownloadableInventoryItemView(TransformInfoInterface* transformInfoInterface, std::string empty);

    public: int32_t getTypeId();

                //@Throws(Exception.constructor)
            
    private: void getFormData();

    public: void addDomNodeInterfaces();

                //@Throws(Exception.constructor)
            
    public: std::string view();

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void processFile(FileItem* fileItem);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void unzip(FileItem* fileItem);

    private: std::string getItemFilePath();

    private: void setRequestHashMap(HashMap<Object*, Object*>* requestHashMap);

    public: HashMap<Object*, Object*>* getRequestHashMap();

    public: DownloadableItem* getDownloadableItem();

};

            


        #endif //VIEWS_ADMIN_INVENTORY_DOWNLOAD_DOWNLOADABLEINVENTORYITEMVIEW_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(VIEWS_ADMIN_INVENTORY_DOWNLOAD_DOWNLOADABLEINVENTORYITEMVIEW_H_COMPLETE)
        #define VIEWS_ADMIN_INVENTORY_DOWNLOAD_DOWNLOADABLEINVENTORYITEMVIEW_H_COMPLETE
        #if __has_include(<java/io/ByteArrayInputStream.h>)
#include <java/io/ByteArrayInputStream.h>
#endif
#if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
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
#if __has_include(<org/allbinary/globals/URLGLOBALS.h>)
#include <org/allbinary/globals/URLGLOBALS.h>
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
#if __has_include(<org/allbinary/logic/io/file/AbFile.h>)
#include <org/allbinary/logic/io/file/AbFile.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/FilePathData.h>)
#include <org/allbinary/logic/io/file/FilePathData.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/FileUtil.h>)
#include <org/allbinary/logic/io/file/FileUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/zip/ZipFileUtil.h>)
#include <org/allbinary/logic/io/file/zip/ZipFileUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
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

        #endif
    
