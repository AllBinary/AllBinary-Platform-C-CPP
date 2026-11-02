
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_VISITOR_BOOLEANFILEVISITOR_CPP
        #define ORG_ALLBINARY_LOGIC_IO_FILE_VISITOR_BOOLEANFILEVISITOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/io/file/visitor/BooleanFileVisitor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/util/visitor/VisitorInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

BooleanFileVisitor::BooleanFileVisitor(BasicArrayList* filterStringBasicArrayList) : commonStrings(CommonStrings::getInstance()){
this->setFilterStringBasicArrayList(filterStringBasicArrayList);
    
PreLogUtil::put(JavaString::valueOf("Filter BasicArrayList: ") +JavaString::valueOf(this->getFilterStringBasicArrayList()->toString()), this, this->commonStrings->CONSTRUCTOR);
    
}


    auto BooleanFileVisitor::visit(Object* anyType) -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->visit(dynamic_cast<AbFile*>(anyType));
    
}


    auto BooleanFileVisitor::visit(AbFile* file) -> bool{

    BasicArrayList* list = this->getFilterStringBasicArrayList();;
    

    int32_t size = list->size();;
    

    std::string nextFileFilterString;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
nextFileFilterString= JavaBoxes::unbox<std::string>(list->get(index));
    

                        if(this->visit(file, nextFileFilterString).valueOf())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::TRUE;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    
}


    auto BooleanFileVisitor::getFilterStringBasicArrayList() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->filterStringBasicArrayList;
    
}


    auto BooleanFileVisitor::setFilterStringBasicArrayList(BasicArrayList* filterStringBasicArrayList) -> void{
this->filterStringBasicArrayList= filterStringBasicArrayList;
    
}


    auto BooleanFileVisitor::visit(AbFile* file, std::string fileNameString) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    
}




        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_VISITOR_BOOLEANFILEVISITOR_CPP
