
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_FILEFACTORY_H
        #define ORG_ALLBINARY_LOGIC_IO_FILE_FILEFACTORY_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <java/io/FileNotFoundException.h>

      
#include <android/content/Context.h>

      
#include <org/allbinary/data/resource/ResourceUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbFile.h"

class FileFactory
            : public Object
         {

    private: static const FileFactory SINGLETON = FileFactory(ResourceUtil::getInstance().getContext());

    public: static FileFactory getInstance();

    private: Context context;

private: FileFactory(Context context);

                //@Throws(Exception.constructor)
            
    public: bool isFile(std::string path);

    public: Context getContext();

                //@Throws(Exception.constructor)
            
    public: AbFile getFile(std::string filePath);

                //@Throws(Exception.constructor)
            
    public: AbFile getInstance(AbFile file, std::string childFilePath);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_FILEFACTORY_H
