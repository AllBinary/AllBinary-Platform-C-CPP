
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
        



#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BooleanFileVisitor.h"

class IncludeFileExtensionsBooleanFileVisitor: public BooleanFileVisitor {

public: IncludeFileExtensionsBooleanFileVisitor(BasicArrayList filterStringBasicArrayList){
            super(filterStringBasicArrayList);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: Boolean visit(AbFile file){

                        if(this->getFilterStringBasicArrayList().size() == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.visit(file);;
    
}


    public: Boolean visit(AbFile file, std::string fileNameString){

    std::string fileNameAndExtension = file.getPath();;
    

                        if(fileNameAndExtension.size() > fileNameString.size())
                        
                                    {
                                    
    int32_t startIndex = fileNameAndExtension.size() -fileNameString.size();;
    

    std::string fileName = fileNameAndExtension.substring(startIndex);;
    

                        if(fileName.compareTo(fileNameString) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::TRUE;
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    
}


};

            

