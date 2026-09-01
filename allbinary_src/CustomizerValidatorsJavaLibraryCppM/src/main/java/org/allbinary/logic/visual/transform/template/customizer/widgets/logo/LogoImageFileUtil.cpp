
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
        



            #include "../../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../../java/lang/Exception.h"
        
#include <java/io/ByteArrayInputStream.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/FileUtil.h>

      
#include <org/allbinary/logic/io/file/directory/Directory.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/apache/commons/fileupload/FileItem.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LogoImageFileUtil
            : public Object
         {

    private: const Directory directory = Directory::getInstance();

    private: std::string fileName;

    private: AbPath imageFileAbPath;

public: LogoImageFileUtil(AbPath imageAbPath, std::string imageFile){
this->fileName= imageFile;
    
this->imageFileAbPath= imageAbPath;
    
}


                //@Throws(Exception.constructor)
            
    public: void saveFiles(FileItem fileItem){

                        if(false)
                        
                                    {
                                    


                            throw Exception("Image File Name Was Null");
                    

                                    }
                                

                        if(!this->directory.create(this->imageFileAbPath))
                        
                                    {
                                    


                            throw Exception("Unable to save file to non creatable directory");
                    

                                    }
                                

    AbFile originalImageFile = AbFile::createAbFile(this->imageFileAbPath.toString() +this->fileName);;
    
originalImageFile.createNewFile();
    
FileUtil::getInstance().write(ByteArrayInputStream(fileItem.get()), originalImageFile);
    
}


};

            

