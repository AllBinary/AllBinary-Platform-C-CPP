
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_FILTER_BASICFILEFILTERUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_IO_FILE_FILTER_BASICFILEFILTERUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/io/file/filter/BasicFileFilterUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/io/FileFilter.h>

      
#include <org/allbinary/logic/io/file/visitor/IncludeFileExtensionsBooleanFileVisitor.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/io/file/filter/VisitorFileFilter.h"


BasicFileFilterUtil::BasicFileFilterUtil(){
}


    auto BasicFileFilterUtil::getInstance(std::string extension) -> FileFilter*{

    BasicArrayList* vector = new BasicArrayListD();;
    
vector->add(extension);
    

    IncludeFileExtensionsBooleanFileVisitor* includeFileExtensionsBooleanFileVisitor = new IncludeFileExtensionsBooleanFileVisitor(vector);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<FileFilter*>(new VisitorFileFilter(includeFileExtensionsBooleanFileVisitor));
    
}




        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_FILTER_BASICFILEFILTERUTIL_CPP
