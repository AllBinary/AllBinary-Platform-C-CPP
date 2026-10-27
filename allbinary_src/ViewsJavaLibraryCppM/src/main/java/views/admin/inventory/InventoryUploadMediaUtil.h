
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

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
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

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: MediaUtil* mediaUtil = MediaUtil::getInstance();

    private: const int32_t LARGEWIDTH = 1024;

    private: const int32_t LARGEHEIGHT = 1024;

    private: const int32_t MEDIUMWIDTH = 256;

    private: const int32_t MEDIUMHEIGHT = 256;

    private: const int32_t SMALLWIDTH = 128;

    private: const int32_t SMALLHEIGHT = 128;

    private: const std::string SMALL = "Small";

    private: const std::string MEDIUM = "Medium";

    private: const std::string LARGE = "Large";

    private: StoreFrontInterface* storeFrontInterface;

    private: ItemInterface* itemInterface;

public: InventoryUploadMediaUtil(StoreFrontInterface* storeFrontInterface, ItemInterface* itemInterface);

                //@Throws(Exception.constructor)
            
    public: ItemInterface* saveFiles(std::vector<int8_t> byteArray, std::string fileName, MediaData* mediaData);

    private: void setFileNames(std::string fileName);

};

            


        #endif //VIEWS_ADMIN_INVENTORY_INVENTORYUPLOADMEDIAUTIL_H
