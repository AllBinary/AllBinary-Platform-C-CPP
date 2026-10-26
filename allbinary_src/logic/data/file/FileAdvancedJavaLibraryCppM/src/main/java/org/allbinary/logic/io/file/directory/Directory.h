
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_DIRECTORY_DIRECTORY_H
        #define ORG_ALLBINARY_LOGIC_IO_FILE_DIRECTORY_DIRECTORY_H

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/FileFilter.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/FileFactory.h>

      
#include <org/allbinary/logic/io/file/FileWrapperUtil.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class Directory
            : public Object
         {

    private: static Directory instance() { return Directory(); }

    public: static Directory getInstance();

private: Directory();

    public: bool create(AbPath directoryAbPath);

                //@Throws(Exception.constructor)
            
    public: void remove(AbPath existingDirectoryAbPath);

    private: bool create(std::string directory);

                //@Throws(Exception.constructor)
            
    private: void remove(std::string existingDirectory);

    public: BasicArrayList search(FileFilter fileFilter, AbFile file);

    public: BasicArrayList search(FileFilter fileFilter, AbFile file, bool isRecursiveSearch);

    public: BasicArrayList search(AbFile file);

    public: BasicArrayList search(AbFile file, bool isRecursiveSearch);

    public: BasicArrayList search(std::string searchValue, AbFile file);

    public: BasicArrayList search(std::string searchValue, AbFile file, bool isRecursiveSearch);

    public: BasicArrayList search(int32_t level, AbFile file);

    public: BasicArrayList search(int32_t level, AbFile file, bool isRecursiveSearch);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_DIRECTORY_DIRECTORY_H
