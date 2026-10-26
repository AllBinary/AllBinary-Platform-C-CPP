
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
        
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbFileInputStream.h"
#include "AbFileOutputStream.h"

class FileStreamFactory
            : public Object
         {

    private: static Object* SINGLETON = NullUtil::getInstance().NULL_OBJECT;

    public: static FileStreamFactory getInstance(){

                        if(FileStreamFactory::SINGLETON == NullUtil::getInstance().NULL_OBJECT)
                        
                                    {
                                    FileStreamFactory::SINGLETON= FileStreamFactory();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FileStreamFactory::SINGLETON;
    
}


private: FileStreamFactory(){
}


                //@Throws(Exception.constructor)
            
    public: AbFileInputStream getFileInputStreamInstance(std::string path, std::string fileName){

    AbPath FILEABPATH = AbPath(path, fileName);;
    

    AbFile file = AbFile::createAbFileFromAbPath(FILEABPATH);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbFileInputStream(file);
    
}


                //@Throws(Exception.constructor)
            
    public: AbFileOutputStream getFileOutputStreamInstance(std::string path, std::string fileName){

    AbPath FILEABPATH = AbPath(path, fileName);;
    

    AbFile file = AbFile::createAbFileFromAbPath(FILEABPATH);;
    

                        if(file.exists())
                        
                                    {
                                    file.delete();
    
file.createNewFile();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbFileOutputStream::createFromAbFile(file);;
    
}


                //@Throws(Exception.constructor)
            
    public: void delete_(std::string path, std::string fileName){

    AbPath FILEABPATH = AbPath(path, fileName);;
    

    AbFile file = AbFile::createAbFileFromAbPath(FILEABPATH);;
    
file.delete();
    
}


};

            

