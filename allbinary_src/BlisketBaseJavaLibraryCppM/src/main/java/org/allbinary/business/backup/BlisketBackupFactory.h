
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class StoreFrontInterface;
class StoreFrontsEntity;
class StoreFrontsEntityFactory;
class PATH_GLOBALS;
class URLGLOBALS;
class LogUtil;
class PreLogUtil;
class AbFile;
class Directory;
class ZipFileUtil;
class AbPath;
class StringMaker;
class StringUtil;
class CommonStrings;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BlisketBackupFactory
            : public virtual Object
         {

    private: static BlisketBackupFactory* instance_owner();
    private: static BlisketBackupFactory* instance;

    public: static BlisketBackupFactory* getInstance();


            
    public: BlisketBackupFactory();
        
    /*protected*/ public: LogUtil* logUtil;

    private: StringUtil* stringUtil;

    private: CommonStrings* commonStrings;

    private: Directory* directory;

                //@Throws(Exception.constructor)
            
    private: BasicArrayList* getFileBasicArrayList(std::string pathString);

    public: void backup();

    public: void backupViews();

    public: void backupResources();

    public: void backupJsps();

    public: void backup(BasicArrayList* fileBasicArrayList, std::string zipFile);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_BACKUP_BLISKETBACKUPFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_BACKUP_BLISKETBACKUPFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_BACKUP_BLISKETBACKUPFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>
#endif
#if __has_include(<org/allbinary/data/tables/context/module/storefronts/StoreFrontsEntity.h>)
#include <org/allbinary/data/tables/context/module/storefronts/StoreFrontsEntity.h>
#endif
#if __has_include(<org/allbinary/data/tables/context/module/storefronts/StoreFrontsEntityFactory.h>)
#include <org/allbinary/data/tables/context/module/storefronts/StoreFrontsEntityFactory.h>
#endif
#if __has_include(<org/allbinary/globals/PATH_GLOBALS.h>)
#include <org/allbinary/globals/PATH_GLOBALS.h>
#endif
#if __has_include(<org/allbinary/globals/URLGLOBALS.h>)
#include <org/allbinary/globals/URLGLOBALS.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/PreLogUtil.h>)
#include <org/allbinary/logic/communication/log/PreLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/AbFile.h>)
#include <org/allbinary/logic/io/file/AbFile.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/directory/Directory.h>)
#include <org/allbinary/logic/io/file/directory/Directory.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/zip/ZipFileUtil.h>)
#include <org/allbinary/logic/io/file/zip/ZipFileUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPath.h>)
#include <org/allbinary/logic/io/path/AbPath.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif

        #endif
    
