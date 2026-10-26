
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

      
#include <org/allbinary/logic/io/file/visitor/IncludeFileExtensionsBooleanFileVisitor.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DirectoryOrIncludeFileExtensionBooleanFileVisitor: public IncludeFileExtensionsBooleanFileVisitor {

    private: std::string includesString;

public: DirectoryOrIncludeFileExtensionBooleanFileVisitor(BasicArrayList filterStringBasicArrayList) : IncludeFileExtensionsBooleanFileVisitor(filterStringBasicArrayList){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->includesString= 
                                        nullptr
                                    ;
    
}


public: DirectoryOrIncludeFileExtensionBooleanFileVisitor(BasicArrayList filterStringBasicArrayList, std::string includesString) : IncludeFileExtensionsBooleanFileVisitor(filterStringBasicArrayList){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->includesString= includesString;
    
}


    public: Boolean visit(AbFile file){

                        if(file.isDirectory())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::TRUE;
    

                                    }
                                

                        if(false || file.getAbsolutePath().indexOf(this->includesString) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.visit(file);;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                        }
                            
}


};

            

