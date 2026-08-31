
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_VISITOR_BOOLEANFILEVISITOR_H
        #define ORG_ALLBINARY_LOGIC_IO_FILE_VISITOR_BOOLEANFILEVISITOR_H

            #include "../../../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/util/visitor/VisitorInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BooleanFileVisitor
            : public Object
        : public VisitorInterface {
        

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: filterStringBasicArrayList: BasicArrayList;

public constructor (BasicArrayList filterStringBasicArrayList);

    public any visit(any = {} anyType);

    public Boolean visit(AbFile file);

    public BasicArrayList getFilterStringBasicArrayList();

    public setFilterStringBasicArrayList(BasicArrayList filterStringBasicArrayList);

    public Boolean visit(AbFile file, string fileNameString);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_VISITOR_BOOLEANFILEVISITOR_H
