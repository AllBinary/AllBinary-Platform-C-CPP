
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_INSTALLER_INITIALIZECLOUD_CPP
        #define ORG_ALLBINARY_BUSINESS_INSTALLER_INITIALIZECLOUD_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/installer/InitializeCloud.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/globals/PATH_GLOBALS.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/AbIOSystem.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/FileUtil.h>

      
#include <org/allbinary/logic/io/file/directory/Directory.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

InitializeCloud::InitializeCloud() : logUtil(LogUtil::getInstance()){
}


    auto InitializeCloud::initialize(std::string cloud, bool overwriteNewer, bool overwriteAll, int32_t current, int32_t total) -> bool{

        try {
            
                        if(AbIOSystem::getInstance()->isType("com.vobject.appengine.java.io"))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(URLGLOBALS::getWebappPath());
    
stringBuffer->append(cloud);
    
stringBuffer->append(PATH_GLOBALS::getInstance()->DATA_PATH);
    

    AbPath* path = new AbPath(stringBuffer->toString(), StringUtil::getInstance()->EMPTY_STRING);;
    
stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append(URLGLOBALS::getWebappPath());
    

    AbPath* realPath = new AbPath(stringBuffer->toString(), StringUtil::getInstance()->EMPTY_STRING);;
    

    AbFile* file = AbFile::createAbFileFromAbPath(path);;
    

    BasicArrayList* fileBasicArrayList = Directory::getInstance()->search(file, true);;
    

    int32_t size = fileBasicArrayList->size();;
    
stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append("Searched: ");
    
stringBuffer->append(path->toFileSystemString());
    
stringBuffer->append(" BasicArrayList: ");
    
stringBuffer->appendint(size);
    

    int32_t portion = size /total +1;;
    

    int32_t start = portion *current;;
    

    int32_t end = start +portion;;
    

                        if(end > size)
                        
                                    {
                                    end= size;
    

                                    }
                                
stringBuffer->append(" Section: ");
    
stringBuffer->appendint(start);
    
stringBuffer->append(" - ");
    
stringBuffer->appendint(end);
    
this->logUtil->putF(stringBuffer->toString(), this, "initialize()");
    

    AbFile* nextFile;;
    




                        for (
    int32_t index = start;index < end; index++)
        {
nextFile= dynamic_cast<AbFile*>(fileBasicArrayList->get(index));
    

                        if(nextFile->isDirectory())
                        
                                    {
                                    
                                    }
                                
                        else {
                            FileUtil::getInstance()->copyToCloud(nextFile, path, realPath, cloud, overwriteNewer, overwriteAll);
    

                        }
                            
}

this->logUtil->putF("Copied Files To Cloud", this, "initialize()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put("Unable to copy installer files into cloud", this, "initialize()", &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}




        #endif //ORG_ALLBINARY_BUSINESS_INSTALLER_INITIALIZECLOUD_CPP
