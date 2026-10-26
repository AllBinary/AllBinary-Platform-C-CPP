
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
        
class InitializeCloud
            : public Object
         {

    public: static const std::string CLOUD = "cloud/";

    public: static const std::string CLOUD_UPDATE = "cloudupdate/";

    protected: const LogUtil logUtil = LogUtil::getInstance();

public: InitializeCloud(){
}


    public: bool initialize(std::string cloud, bool overwriteNewer, bool overwriteAll, int32_t current, int32_t total){

        try {
            
                        if(AbIOSystem::getInstance().isType("com.vobject.appengine.java.io"))
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(URLGLOBALS::getWebappPath());
    
stringBuffer.append(cloud);
    
stringBuffer.append(PATH_GLOBALS::getInstance().DATA_PATH);
    

    AbPath path = AbPath(stringBuffer.toString(), StringUtil::getInstance().EMPTY_STRING);;
    
stringBuffer.delete(0, stringBuffer.length());
    
stringBuffer.append(URLGLOBALS::getWebappPath());
    

    AbPath realPath = AbPath(stringBuffer.toString(), StringUtil::getInstance().EMPTY_STRING);;
    

    AbFile file = AbFile::createAbFileFromAbPath(path);;
    

    BasicArrayList fileBasicArrayList = Directory::getInstance().search(file, true);;
    

    int32_t size = fileBasicArrayList.size();;
    
stringBuffer.delete(0, stringBuffer.length());
    
stringBuffer.append("Searched: ");
    
stringBuffer.append(path.toFileSystemString());
    
stringBuffer.append(" BasicArrayList: ");
    
stringBuffer.appendint(size);
    

    int32_t portion = size /total +1;;
    

    int32_t start = portion *current;;
    

    int32_t end = start +portion;;
    

                        if(end > size)
                        
                                    {
                                    end= size;
    

                                    }
                                
stringBuffer.append(" Section: ");
    
stringBuffer.appendint(start);
    
stringBuffer.append(" - ");
    
stringBuffer.appendint(end);
    
this->logUtil.putF(stringBuffer.toString(), this, "initialize()");
    

    AbFile nextFile;;
    




                        for (
    int32_t index = start;index < end; index++)
        {
nextFile= fileBasicArrayList.get(index);
    

                        if(nextFile.isDirectory())
                        
                                    {
                                    
                                    }
                                
                        else {
                            FileUtil::getInstance().copyToCloud(nextFile, path, realPath, cloud, overwriteNewer, overwriteAll);
    

                        }
                            
}

this->logUtil.putF("Copied Files To Cloud", this, "initialize()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                //: 
} catch(e) 
            {
this->logUtil.put("Unable to copy installer files into cloud", this, "initialize()", e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


};

            

