
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_BACKUP_BLISKETBACKUPFACTORY_CPP
        #define ORG_ALLBINARY_BUSINESS_BACKUP_BLISKETBACKUPFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/backup/BlisketBackupFactory.h"
        

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
        

BlisketBackupFactory::BlisketBackupFactory() : logUtil(LogUtil::getInstance()), stringUtil(StringUtil::getInstance()), commonStrings(CommonStrings::getInstance()), directory(Directory::getInstance()) {
        }
        auto BlisketBackupFactory::instance_owner() -> BlisketBackupFactory* { static std::unique_ptr<BlisketBackupFactory> value(new BlisketBackupFactory()); return value.get(); }
BlisketBackupFactory* BlisketBackupFactory::instance = BlisketBackupFactory::instance_owner();

    auto BlisketBackupFactory::getInstance() -> BlisketBackupFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BlisketBackupFactory::instance;
    
}


                //@Throws(Exception.constructor)
            
    auto BlisketBackupFactory::getFileBasicArrayList(std::string pathString) -> BasicArrayList*{

    AbPath* path = new AbPath(pathString, this->stringUtil->EMPTY_STRING);;
    

    AbFile* file = AbFile::createAbFileFromAbPath(path);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->directory->search(file, true);;
    
}


    auto BlisketBackupFactory::backup() -> void{

        try {
            this->logUtil->putF(this->commonStrings->START, this, "backup()");
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(URLGLOBALS::getWebappPath());
    
stringBuffer->append(PATH_GLOBALS::getInstance()->BACKUP_PATH);
    

    std::string backupPath = stringBuffer->toString();;
    

    AbPath* path = new AbPath(backupPath, this->stringUtil->EMPTY_STRING);;
    

    BasicArrayList* fileBasicArrayList = this->getFileBasicArrayList(backupPath);;
    
this->backup(fileBasicArrayList, JavaString::valueOf(path->toFileSystemString()) +JavaString::valueOf("backup.zip"));
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "backup()", &e);
    
}

}


    auto BlisketBackupFactory::backupViews() -> void{

        try {
            this->logUtil->putF(this->commonStrings->START, this, "backupViews()");
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(URLGLOBALS::getWebappPath());
    
stringBuffer->append(PATH_GLOBALS::getInstance()->BACKUP_PATH);
    

    std::string backupPath = stringBuffer->toString();;
    

    AbPath* path = new AbPath(backupPath, this->stringUtil->EMPTY_STRING);;
    

    BasicArrayList* fileBasicArrayList = new BasicArrayListD();;
    

    StoreFrontsEntity* storeFrontsEntity = StoreFrontsEntityFactory::getInstance()->getStoreFrontsEntityInstance();;
    

    BasicArrayList* storeFrontNamesBasicArrayList = storeFrontsEntity->getStoreFrontNames();;
    

    int32_t size = storeFrontNamesBasicArrayList->size();;
    

    std::string nextStore;;
    

    std::string viewsPath;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
nextStore= storeFrontNamesBasicArrayList->get(index);
    
stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append(URLGLOBALS::getWebappPath());
    
stringBuffer->append(PATH_GLOBALS::getInstance()->VIEWS_PATH);
    
stringBuffer->append(nextStore);
    
viewsPath= stringBuffer->toString();
    
stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append("Backup Store Views: ");
    
stringBuffer->append(nextStore);
    
stringBuffer->append(" from: ");
    
stringBuffer->append(viewsPath);
    
PreLogUtil::put(stringBuffer->toString(), this, "backupViews()");
    
fileBasicArrayList->addAllList(this->getFileBasicArrayList(viewsPath));
    
}

this->backup(fileBasicArrayList, JavaString::valueOf(path->toFileSystemString()) +JavaString::valueOf("backupViews.zip"));
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "backupViews()", &e);
    
}

}


    auto BlisketBackupFactory::backupResources() -> void{

        try {
            this->logUtil->putF(this->commonStrings->START, this, "backupResources()");
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(URLGLOBALS::getWebappPath());
    
stringBuffer->append(PATH_GLOBALS::getInstance()->BACKUP_PATH);
    

    std::string backupPath = stringBuffer->toString();;
    

    AbPath* path = new AbPath(backupPath, this->stringUtil->EMPTY_STRING);;
    

    BasicArrayList* fileBasicArrayList = new BasicArrayListD();;
    

    StoreFrontsEntity* storeFrontsEntity = StoreFrontsEntityFactory::getInstance()->getStoreFrontsEntityInstance();;
    

    BasicArrayList* storeFrontNamesBasicArrayList = storeFrontsEntity->getStoreFrontNames();;
    

    int32_t size = storeFrontNamesBasicArrayList->size();;
    

    std::string nextStore;;
    

    StoreFrontInterface* storeFrontInterface;;
    

    std::string resourcesPath;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
nextStore= storeFrontNamesBasicArrayList->get(index);
    
storeFrontInterface= storeFrontsEntity->getStoreFrontInterface(nextStore);
    
stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append(URLGLOBALS::getWebappPath());
    
stringBuffer->append(storeFrontInterface->getCurrentHostNamePath());
    
stringBuffer->append(storeFrontInterface->getCategoryPath());
    
resourcesPath= stringBuffer->toString();
    
stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append("Backup Store Resrouces: ");
    
stringBuffer->append(nextStore);
    
stringBuffer->append(" from: ");
    
stringBuffer->append(resourcesPath);
    
PreLogUtil::put(stringBuffer->toString(), this, "backupResources()");
    
fileBasicArrayList->addAllList(this->getFileBasicArrayList(resourcesPath));
    
}

this->backup(fileBasicArrayList, JavaString::valueOf(path->toFileSystemString()) +JavaString::valueOf("backupResources.zip"));
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "backupResources()", &e);
    
}

}


    auto BlisketBackupFactory::backupJsps() -> void{

        try {
            this->logUtil->putF(this->commonStrings->START, this, "backupJsps()");
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(URLGLOBALS::getWebappPath());
    
stringBuffer->append(PATH_GLOBALS::getInstance()->BACKUP_PATH);
    

    std::string backupPath = stringBuffer->toString();;
    

    AbPath* path = new AbPath(backupPath, this->stringUtil->EMPTY_STRING);;
    

    BasicArrayList* fileBasicArrayList = new BasicArrayListD();;
    

    StoreFrontsEntity* storeFrontsEntity = StoreFrontsEntityFactory::getInstance()->getStoreFrontsEntityInstance();;
    

    BasicArrayList* storeFrontNamesBasicArrayList = storeFrontsEntity->getStoreFrontNames();;
    

    int32_t size = storeFrontNamesBasicArrayList->size();;
    

    std::string nextStore;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
nextStore= storeFrontNamesBasicArrayList->get(index);
    
PreLogUtil::put(JavaString::valueOf("Backup Store Jsps: ") +JavaString::valueOf(nextStore), this, "backupJsps()");
    
stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append(URLGLOBALS::getWebappPath());
    
stringBuffer->append(nextStore);
    
fileBasicArrayList->addAllList(this->getFileBasicArrayList(stringBuffer->toString()));
    
}

this->backup(fileBasicArrayList, JavaString::valueOf(path->toFileSystemString()) +JavaString::valueOf("backupJsps.zip"));
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "backupJsps()", &e);
    
}

}


    auto BlisketBackupFactory::backup(BasicArrayList* fileBasicArrayList, std::string zipFile) -> void{

        try {
            
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append("ZipFile: ");
    
stringBuffer->append(zipFile);
    
stringBuffer->append(" BasicArrayList: ");
    
stringBuffer->appendint(fileBasicArrayList->size());
    
PreLogUtil::put(JavaString::valueOf("Creating Backup Zip File: ") +JavaString::valueOf(stringBuffer->toString()), this, "backup()");
    
ZipFileUtil::getInstance()->create(zipFile, fileBasicArrayList);
    
this->logUtil->putF("Created Backup Zip File", this, "backup()");
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "backup()", &e);
    
}

}




        #endif //ORG_ALLBINARY_BUSINESS_BACKUP_BLISKETBACKUPFACTORY_CPP
