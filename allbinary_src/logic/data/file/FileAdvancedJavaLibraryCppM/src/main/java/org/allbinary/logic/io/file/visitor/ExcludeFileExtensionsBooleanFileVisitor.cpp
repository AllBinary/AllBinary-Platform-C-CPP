
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_VISITOR_EXCLUDEFILEEXTENSIONSBOOLEANFILEVISITOR_CPP
        #define ORG_ALLBINARY_LOGIC_IO_FILE_VISITOR_EXCLUDEFILEEXTENSIONSBOOLEANFILEVISITOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/io/file/visitor/ExcludeFileExtensionsBooleanFileVisitor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/io/file/visitor/BooleanFileVisitor.h"


ExcludeFileExtensionsBooleanFileVisitor::ExcludeFileExtensionsBooleanFileVisitor(BasicArrayList* filterStringBasicArrayList) : BooleanFileVisitor(filterStringBasicArrayList){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto ExcludeFileExtensionsBooleanFileVisitor::visit(AbFile* file) -> bool{

                        if(this->getFilterStringBasicArrayList()->size() == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::TRUE;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BooleanFileVisitor::visit(file);;
    
}


    auto ExcludeFileExtensionsBooleanFileVisitor::visit(AbFile* file, std::string fileNameString) -> bool{

    std::string fileNameAndExtension = file->getPath();;
    

                        if(fileNameAndExtension.size() > fileNameString.size())
                        
                                    {
                                    
    int32_t startIndex = fileNameAndExtension.size() -fileNameString.size();;
    

    std::string fileName = JavaString::substring(fileNameAndExtension, startIndex);;
    

                        if(fileName.compare(fileNameString) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::TRUE;
    
}




        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_VISITOR_EXCLUDEFILEEXTENSIONSBOOLEANFILEVISITOR_CPP
