
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <java/util/Vector.h>

      
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
        

    private: static const instance: BlisketBackupFactory = new BlisketBackupFactory();

    public static BlisketBackupFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BlisketBackupFactory.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const stringUtil: StringUtil = StringUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const directory: Directory = Directory.getInstance()!;

                //@Throws(Exception.constructor)
            
    BasicArrayList getFileBasicArrayList(string pathString){

    path: AbPath = new AbPath(pathString, this.stringUtil!.EMPTY_STRING);;
    

    file: AbFile = AbFile.createAbFileFromAbPath(path)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.directory.search(file, true);;
    
}


    public backup(){

        try {
            this.logUtil!.putF(this.commonStrings!.START, this, "backup()");
    

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(URLGLOBALS.getWebappPath());
    
stringBuffer!.append(PATH_GLOBALS.getInstance()!.BACKUP_PATH);
    

    backupPath: string = stringBuffer!.toString()!;;
    

    path: AbPath = new AbPath(backupPath, this.stringUtil!.EMPTY_STRING);;
    

    fileBasicArrayList: BasicArrayList = this.getFileBasicArrayList(backupPath)!;;
    
this.backup(fileBasicArrayList, path.toFileSystemString() +"backup.zip");
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "backup()", e);
    
}

}


    public backupViews(){

        try {
            this.logUtil!.putF(this.commonStrings!.START, this, "backupViews()");
    

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(URLGLOBALS.getWebappPath());
    
stringBuffer!.append(PATH_GLOBALS.getInstance()!.BACKUP_PATH);
    

    backupPath: string = stringBuffer!.toString()!;;
    

    path: AbPath = new AbPath(backupPath, this.stringUtil!.EMPTY_STRING);;
    

    fileBasicArrayList: BasicArrayList = new BasicArrayListD();;
    

    storeFrontsEntity: StoreFrontsEntity = StoreFrontsEntityFactory.getInstance()!.getStoreFrontsEntityInstance()!;;
    

    storeFrontNamesBasicArrayList: Vector = storeFrontsEntity!.getStoreFrontNames()!;;
    

    size: int32_t = storeFrontNamesBasicArrayList!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    nextStore: string = storeFrontNamesBasicArrayList!.get(index) as string;;
    
stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append(URLGLOBALS.getWebappPath());
    
stringBuffer!.append(PATH_GLOBALS.getInstance()!.VIEWS_PATH);
    
stringBuffer!.append(nextStore);
    

    viewsPath: string = stringBuffer!.toString()!;;
    
stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append("Backup Store Views: ");
    
stringBuffer!.append(nextStore);
    
stringBuffer!.append(" from: ");
    
stringBuffer!.append(viewsPath);
    
PreLogUtil.put(stringBuffer!.toString(), this, "backupViews()");
    
fileBasicArrayList!.addAllList(this.getFileBasicArrayList(viewsPath));
    
}

this.backup(fileBasicArrayList, path.toFileSystemString() +"backupViews.zip");
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "backupViews()", e);
    
}

}


    public backupResources(){

        try {
            this.logUtil!.putF(this.commonStrings!.START, this, "backupResources()");
    

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(URLGLOBALS.getWebappPath());
    
stringBuffer!.append(PATH_GLOBALS.getInstance()!.BACKUP_PATH);
    

    backupPath: string = stringBuffer!.toString()!;;
    

    path: AbPath = new AbPath(backupPath, this.stringUtil!.EMPTY_STRING);;
    

    fileBasicArrayList: BasicArrayList = new BasicArrayListD();;
    

    storeFrontsEntity: StoreFrontsEntity = StoreFrontsEntityFactory.getInstance()!.getStoreFrontsEntityInstance()!;;
    

    storeFrontNamesBasicArrayList: Vector = storeFrontsEntity!.getStoreFrontNames()!;;
    

    size: int32_t = storeFrontNamesBasicArrayList!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    nextStore: string = storeFrontNamesBasicArrayList!.get(index) as string;;
    

    storeFrontInterface: StoreFrontInterface = storeFrontsEntity!.getStoreFrontInterface(nextStore)!;;
    
stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append(URLGLOBALS.getWebappPath());
    
stringBuffer!.append(storeFrontInterface!.getCurrentHostNamePath());
    
stringBuffer!.append(storeFrontInterface!.getCategoryPath());
    

    resourcesPath: string = stringBuffer!.toString()!;;
    
stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append("Backup Store Resrouces: ");
    
stringBuffer!.append(nextStore);
    
stringBuffer!.append(" from: ");
    
stringBuffer!.append(resourcesPath);
    
PreLogUtil.put(stringBuffer!.toString(), this, "backupResources()");
    
fileBasicArrayList!.addAllList(this.getFileBasicArrayList(resourcesPath));
    
}

this.backup(fileBasicArrayList, path.toFileSystemString() +"backupResources.zip");
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "backupResources()", e);
    
}

}


    public backupJsps(){

        try {
            this.logUtil!.putF(this.commonStrings!.START, this, "backupJsps()");
    

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(URLGLOBALS.getWebappPath());
    
stringBuffer!.append(PATH_GLOBALS.getInstance()!.BACKUP_PATH);
    

    backupPath: string = stringBuffer!.toString()!;;
    

    path: AbPath = new AbPath(backupPath, this.stringUtil!.EMPTY_STRING);;
    

    fileBasicArrayList: BasicArrayList = new BasicArrayListD();;
    

    storeFrontsEntity: StoreFrontsEntity = StoreFrontsEntityFactory.getInstance()!.getStoreFrontsEntityInstance()!;;
    

    storeFrontNamesBasicArrayList: Vector = storeFrontsEntity!.getStoreFrontNames()!;;
    

    size: int32_t = storeFrontNamesBasicArrayList!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    nextStore: string = storeFrontNamesBasicArrayList!.get(index) as string;;
    
PreLogUtil.put("Backup Store Jsps: " +nextStore, this, "backupJsps()");
    
stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append(URLGLOBALS.getWebappPath());
    
stringBuffer!.append(nextStore);
    
fileBasicArrayList!.addAllList(this.getFileBasicArrayList(stringBuffer!.toString()));
    
}

this.backup(fileBasicArrayList, path.toFileSystemString() +"backupJsps.zip");
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "backupJsps()", e);
    
}

}


    public backup(BasicArrayList fileBasicArrayList, string zipFile){

        try {
            
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append("ZipFile: ");
    
stringBuffer!.append(zipFile);
    
stringBuffer!.append(" BasicArrayList: ");
    
stringBuffer!.appendint(fileBasicArrayList!.size());
    
PreLogUtil.put("Creating Backup Zip File: " +stringBuffer!.toString(), this, "backup()");
    
ZipFileUtil.getInstance()!.create(zipFile, fileBasicArrayList);
    
this.logUtil!.putF("Created Backup Zip File", this, "backup()");
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "backup()", e);
    
}

}


};

            

