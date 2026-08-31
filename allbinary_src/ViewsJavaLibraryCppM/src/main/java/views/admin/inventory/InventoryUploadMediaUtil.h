
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
        



        #ifndef VIEWS_ADMIN_INVENTORY_INVENTORYUPLOADMEDIAUTIL_H
        #define VIEWS_ADMIN_INVENTORY_INVENTORYUPLOADMEDIAUTIL_H

            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
#include <java/io/ByteArrayInputStream.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/ItemInterface.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/communication/http/file/upload/media/UploadMediaSingleton.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/FileUtil.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/visual/media/MediaData.h>

      
#include <org/allbinary/logic/visual/media/MediaTypeData.h>

      
#include <org/allbinary/logic/visual/media/MediaUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class InventoryUploadMediaUtil
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const mediaUtil: MediaUtil = MediaUtil.getInstance()!;

    private: const LARGEWIDTH: int32_t = 1024;

    private: const LARGEHEIGHT: int32_t = 1024;

    private: const MEDIUMWIDTH: int32_t = 256;

    private: const MEDIUMHEIGHT: int32_t = 256;

    private: const SMALLWIDTH: int32_t = 128;

    private: const SMALLHEIGHT: int32_t = 128;

    private: const SMALL: string = "Small";

    private: const MEDIUM: string = "Medium";

    private: const LARGE: string = "Large";

    private: storeFrontInterface: StoreFrontInterface;

    private: itemInterface: ItemInterface;

public constructor (StoreFrontInterface storeFrontInterface, ItemInterface itemInterface);

                //@Throws(Exception.constructor)
            
    public ItemInterface saveFiles(std::vector<int8_t> byteArray, string fileName, MediaData mediaData);

    setFileNames(string fileName);

};

            


        #endif //VIEWS_ADMIN_INVENTORY_INVENTORYUPLOADMEDIAUTIL_H
