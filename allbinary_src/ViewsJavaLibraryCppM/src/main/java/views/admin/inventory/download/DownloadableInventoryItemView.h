
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

            #include "../../../../java/lang/Exception.h"
        
#include <java/io/ByteArrayInputStream.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemView.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/ItemInterface.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/download/DownloadableItem.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/download/DownloadableItemView.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
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
        
class DownloadableInventoryItemView: public HttpStoreComponentView: public RequestMapInterface {
        

    public static TYPE_ID: int32_t = 11;

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const request: HttpServletRequest;

    id: string;

    itemInterface: ItemInterface;

    downloadableItem: DownloadableItem;

    private: requestHashMap: HashMap<any, any>;

public constructor (TransformInfoInterface transformInfoInterface);

public constructor (TransformInfoInterface transformInfoInterface, string empty);

    public int32_t getTypeId();

                //@Throws(Exception.constructor)
            
    getFormData();

    public addDomNodeInterfaces();

                //@Throws(Exception.constructor)
            
    public string view();

                //@Throws(Exception.constructor)
            
    processFile(FileItem fileItem);

                //@Throws(Exception.constructor)
            
    unzip(FileItem fileItem);

    string getItemFilePath();

    setRequestHashMap(HashMap<any, any> requestHashMap);

    public HashMap<any, any> getRequestHashMap();

    public DownloadableItem getDownloadableItem();

};

            


        #endif //VIEWS_ADMIN_INVENTORY_DOWNLOAD_DOWNLOADABLEINVENTORYITEMVIEW_H
