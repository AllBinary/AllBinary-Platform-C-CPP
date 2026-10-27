
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_FILEFACTORY_CPP
        #define ORG_ALLBINARY_LOGIC_IO_FILE_FILEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/io/file/FileFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/FileNotFoundException.h>

      
#include <android/content/Context.h>

      
#include <org/allbinary/data/resource/ResourceUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/io/file/AbFile.h"

auto FileFactory::SINGLETON_owner() -> FileFactory* { static std::unique_ptr<FileFactory> value(new FileFactory(ResourceUtil::getInstance()->getContext())); return value.get(); }
FileFactory* FileFactory::SINGLETON = FileFactory::SINGLETON_owner();

FileFactory::FileFactory(Context* context){
this->context= context;
    
}


    auto FileFactory::getInstance() -> FileFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FileFactory::SINGLETON;
    
}


                //@Throws(Exception.constructor)
            
    auto FileFactory::isFile(std::string path) -> bool{

        try {
            this->context->openFileInput(path);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                //: 
} catch(FileNotFoundException& e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


    auto FileFactory::getContext() -> Context*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->context;
    
}


                //@Throws(Exception.constructor)
            
    auto FileFactory::getFile(std::string filePath) -> AbFile*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbFile::createAbFileFromRawPath(filePath);;
    
}


                //@Throws(Exception.constructor)
            
    auto FileFactory::getInstance(AbFile* file, std::string childFilePath) -> AbFile*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbFile::createAbFileWithChild(file, childFilePath);;
    
}




        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_FILEFACTORY_CPP
