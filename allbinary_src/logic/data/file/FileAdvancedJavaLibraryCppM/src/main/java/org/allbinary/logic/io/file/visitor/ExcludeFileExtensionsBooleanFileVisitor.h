
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_VISITOR_EXCLUDEFILEEXTENSIONSBOOLEANFILEVISITOR_H
        #define ORG_ALLBINARY_LOGIC_IO_FILE_VISITOR_EXCLUDEFILEEXTENSIONSBOOLEANFILEVISITOR_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/io/file/visitor/BooleanFileVisitor.h"

class ExcludeFileExtensionsBooleanFileVisitor: public BooleanFileVisitor {

public: ExcludeFileExtensionsBooleanFileVisitor(BasicArrayList* filterStringBasicArrayList);

    public: bool visit(AbFile* file);

    public: bool visit(AbFile* file, std::string fileNameString);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_VISITOR_EXCLUDEFILEEXTENSIONSBOOLEANFILEVISITOR_H
