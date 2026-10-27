
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_BACKUP_BLISKETBACKUPFACTORY_H
        #define ORG_ALLBINARY_BUSINESS_BACKUP_BLISKETBACKUPFACTORY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/data/tables/context/module/storefronts/StoreFrontsEntity.h>

      
#include <org/allbinary/data/tables/context/module/storefronts/StoreFrontsEntityFactory.h>

      
#include <org/allbinary/globals/PATH_GLOBALS.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/directory/Directory.h>

      
#include <org/allbinary/logic/io/file/zip/ZipFileUtil.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BlisketBackupFactory
            : public Object
         {

    private: static BlisketBackupFactory* instance() { static std::unique_ptr<BlisketBackupFactory> value(new BlisketBackupFactory()); return value.get(); }

    public: static BlisketBackupFactory* getInstance();

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: StringUtil* stringUtil = StringUtil::getInstance();

    private: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: Directory* directory = Directory::getInstance();

                //@Throws(Exception.constructor)
            
    private: BasicArrayList* getFileBasicArrayList(std::string pathString);

    public: void backup();

    public: void backupViews();

    public: void backupResources();

    public: void backupJsps();

    public: void backup(BasicArrayList* fileBasicArrayList, std::string zipFile);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_BACKUP_BLISKETBACKUPFACTORY_H
