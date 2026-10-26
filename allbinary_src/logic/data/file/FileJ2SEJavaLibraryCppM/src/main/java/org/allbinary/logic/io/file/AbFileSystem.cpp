
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2026 AllBinary 
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
        



            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/File.h>

      
#include <java/io/FileInputStream.h>

      
#include <java/io/InputStream.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //FileJ2SE should be the same as J2SEForJ2ME
class AbFileSystem
            : public Object
         {

    private: static AbFileSystem instance() { return AbFileSystem(); }

    public: static AbFileSystem getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbFileSystem::instance();
    
}


    private: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    public: bool isDirectoryOrFile(std::string path){

    File file = File(path);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return file.isDirectory() || file.isFile();
    
}


    public: bool isDirectory(std::string path){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return File(path).isDirectory();;
    
}


    public: std::vector<std::string> getFilesAsStringArrayForPath(std::string currentDirPath){

    File file = File(currentDirPath);;
    

                        if(file.exists())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return file.list();;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::getInstance().getArrayInstance();;
    

                        }
                            
}


    public: std::string readAsString(std::string fileName){

    std::vector<int8_t> bytes = std::vector<int8_t>(1000000);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->readAsString(fileName, bytes);;
    
}


    public: std::string readAsString(std::string fileName, std::vector<int8_t> bytes){

    Object* closeable = NullUtil::getInstance().NULL_OBJECT;;
    

        try {
            
    InputStream idFile = FileInputStream(fileName);;
    
closeable= idFile;
    

    int32_t size = idFile.read(bytes);;
    

                        if(size > 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return String.fromCharCode(...bytes);
    

                                    }
                                

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "readAsString", e);
    
}

         finally {
            this->close(closeable);
    

         }
        



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::getInstance().EMPTY_STRING;
    
}


    public: bool close(Object* closeable){

        try {
            
                        if(closeable != 
                                    nullptr
                                )
                        
                                    {
                                    
    InputStream inputStream = (*dynamic_cast<InputStream*>(closeable));;
    
inputStream.close();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.CLOSE, e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


};

            

