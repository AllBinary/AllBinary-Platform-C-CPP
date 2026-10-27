
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

class FileFactory
            : public Object
         {

    private: static FileFactory* SINGLETON() { static std::unique_ptr<FileFactory> value(new FileFactory(ResourceUtil::getInstance()->getContext())); return value.get(); }

    public: static FileFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FileFactory::SINGLETON();
    
}


    private: Context* context;

private: FileFactory(Context* context){
this->context= context;
    
}


                //@Throws(Exception.constructor)
            
    public: bool isFile(std::string path){

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


    public: Context* getContext(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->context;
    
}


                //@Throws(Exception.constructor)
            
    public: AbFile* getFile(std::string filePath){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbFile::createAbFileFromRawPath(filePath);;
    
}


                //@Throws(Exception.constructor)
            
    public: AbFile* getInstance(AbFile* file, std::string childFilePath){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbFile::createAbFileWithChild(file, childFilePath);;
    
}


};

            

