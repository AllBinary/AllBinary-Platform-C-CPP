
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_DIRECTORY_SUBDIRECTORY_CPP
        #define ORG_ALLBINARY_LOGIC_IO_FILE_DIRECTORY_SUBDIRECTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/io/file/directory/SubDirectory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/io/FileFilter.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/io/file/directory/Directory.h"

auto SubDirectory::instance_owner() -> SubDirectory* { static std::unique_ptr<SubDirectory> value(new SubDirectory()); return value.get(); }
SubDirectory* SubDirectory::instance = SubDirectory::instance_owner();

    auto SubDirectory::getInstance() -> SubDirectory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SubDirectory::instance;
    
}


SubDirectory::SubDirectory() : directory(Directory::getInstance()){
}


    auto SubDirectory::search(FileFilter* fileFilter, AbFile* file) -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->directory->search(fileFilter, file, true);;
    
}


    auto SubDirectory::search(AbFile* file) -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->directory->search(file, true);;
    
}


    auto SubDirectory::search(std::string searchValue, AbFile* file) -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->directory->search(searchValue, file, true);;
    
}


    auto SubDirectory::search(int32_t level, AbFile* file) -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->directory->search(level, file, true);;
    
}


    auto SubDirectory::toString(BasicArrayList* files) -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    

    std::string NEW_LINE = CommonSeps::getInstance()->NEW_LINE;;
    

    int32_t size = files->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    AbFile* file = dynamic_cast<AbFile*>(files->get(index));;
    
stringBuffer->append(file->getPath());
    
stringBuffer->append(NEW_LINE);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}




        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_DIRECTORY_SUBDIRECTORY_CPP
