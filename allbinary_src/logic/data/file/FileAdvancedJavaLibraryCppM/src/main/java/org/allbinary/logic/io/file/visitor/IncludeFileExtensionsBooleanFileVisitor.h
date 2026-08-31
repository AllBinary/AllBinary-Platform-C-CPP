
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_VISITOR_INCLUDEFILEEXTENSIONSBOOLEANFILEVISITOR_H
        #define ORG_ALLBINARY_LOGIC_IO_FILE_VISITOR_INCLUDEFILEEXTENSIONSBOOLEANFILEVISITOR_H

#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BooleanFileVisitor.h"

class IncludeFileExtensionsBooleanFileVisitor: public BooleanFileVisitor {
        

public constructor (BasicArrayList filterStringBasicArrayList);

    public Boolean visit(AbFile file);

    public Boolean visit(AbFile file, string fileNameString);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_VISITOR_INCLUDEFILEEXTENSIONSBOOLEANFILEVISITOR_H
