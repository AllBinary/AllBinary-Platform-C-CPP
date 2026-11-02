
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_ABFILESYSTEM_CPP
        #define ORG_ALLBINARY_LOGIC_IO_FILE_ABFILESYSTEM_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/io/file/AbFileSystem.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
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
        //SWTToJ2ME

AbFileSystem::AbFileSystem() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()) {
        }
        auto AbFileSystem::instance_owner() -> AbFileSystem* { static std::unique_ptr<AbFileSystem> value(new AbFileSystem()); return value.get(); }
AbFileSystem* AbFileSystem::instance = AbFileSystem::instance_owner();

    auto AbFileSystem::getInstance() -> AbFileSystem*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbFileSystem::instance;
    
}


    auto AbFileSystem::isDirectoryOrFile(std::string path) -> bool{

    File* file = new File(path);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return file->isDirectory() || file->isFile();
    
}


    auto AbFileSystem::isDirectory(std::string path) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (new File(path))->isDirectory();;
    
}


    auto AbFileSystem::getFilesAsStringArrayForPath(std::string currentDirPath) -> std::vector<std::string>{

    File* file = new File(currentDirPath);;
    

                        if(file->exists())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return file->list();;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::getInstance()->getArrayInstance();;
    

                        }
                            
}


    auto AbFileSystem::readAsString(std::string fileName) -> std::string{

    std::vector<int8_t> bytes = std::vector<int8_t>(1000000);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->readAsString(fileName, bytes);;
    
}


    auto AbFileSystem::readAsString(std::string fileName, std::vector<int8_t> bytes) -> std::string{

    Object* closeable = NullUtil::getInstance()->NULL_OBJECT;;
    

        {
        
        auto finallyFunction_N66615 = [&]() {
            this->close(closeable);
    

        };
        
        struct FinallyGuard_N66615 { decltype(finallyFunction_N66615)& function; ~FinallyGuard_N66615() { function(); } } finallyGuard_N66615{finallyFunction_N66615};
        
        try {
            
    InputStream* idFile = new FileInputStream(fileName);;
    
closeable= idFile;
    

    int32_t size = idFile->read(bytes);;
    

                        if(size > 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return JavaString::fromChars(bytes, 0, size);
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "readAsString", &e);
    
}

        }




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::getInstance()->EMPTY_STRING;
    
}


    auto AbFileSystem::close(Object* closeable) -> bool{

        try {
            
                        if(closeable != 
                                    nullptr
                                )
                        
                                    {
                                    
    InputStream* inputStream = (dynamic_cast<InputStream*>(closeable));;
    
inputStream->close();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->CLOSE, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}




        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_ABFILESYSTEM_CPP
