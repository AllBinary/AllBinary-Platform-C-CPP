
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILESTREAMFACTORY_CPP
        #define ORG_ALLBINARY_LOGIC_IO_FILESTREAMFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/io/FileStreamFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <android/content/Context.h>

      
#include <org/allbinary/data/resource/ResourceUtil.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/io/AbFileInputStream.h"
#include "org/allbinary/logic/io/AbFileOutputStream.h"

Object* FileStreamFactory::SINGLETON = NullUtil::getInstance()->NULL_OBJECT;

    auto FileStreamFactory::getInstance() -> FileStreamFactory*{

                        if(FileStreamFactory::SINGLETON == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    FileStreamFactory::SINGLETON= new FileStreamFactory(ResourceUtil::getInstance()->getContext());
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<FileStreamFactory*>(FileStreamFactory::SINGLETON);
    
}


FileStreamFactory::FileStreamFactory(Context* context){
this->context= context;
    
}


                //@Throws(Exception.constructor)
            
    auto FileStreamFactory::getFileInputStreamInstance(std::string path, std::string fileName) -> AbFileInputStream*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AbFileInputStream(this->getContext()->openFileInput(fileName));
    
}


                //@Throws(Exception.constructor)
            
    auto FileStreamFactory::getFileOutputStreamInstance(std::string path, std::string fileName) -> AbFileOutputStream*{

    Context* context = this->getContext();;
    
context->deleteFile(fileName);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AbFileOutputStream(context->openFileOutput(fileName, 0));
    
}


                //@Throws(Exception.constructor)
            
    auto FileStreamFactory::delete_(std::string path, std::string fileName) -> void{
this->getContext()->deleteFile(fileName);
    
}


    auto FileStreamFactory::getContext() -> Context*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<Context*>(this->context);
    
}




        #endif //ORG_ALLBINARY_LOGIC_IO_FILESTREAMFACTORY_CPP
