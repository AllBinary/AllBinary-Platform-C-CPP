
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
        



            #include "java/lang/Object.h"
        
#include <java/io/FileFilter.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Directory.h"

class SubDirectory
            : public Object
         {

    private: static SubDirectory instance() { return SubDirectory(); }

    public: static SubDirectory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SubDirectory::instance();
    
}


    public: static std::string toString(BasicArrayList files){

    StringMaker stringBuffer = StringMaker();;
    

    std::string NEW_LINE = CommonSeps::getInstance().NEW_LINE;;
    

    int32_t size = files.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    AbFile file = files.get(index);;
    
stringBuffer.append(file.getPath());
    
stringBuffer.append(NEW_LINE);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


    private: const Directory directory = Directory::getInstance();

private: SubDirectory(){
}


    public: BasicArrayList search(FileFilter fileFilter, AbFile file){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->directory.search(fileFilter, file, true);;
    
}


    public: BasicArrayList search(AbFile file){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->directory.search(file, true);;
    
}


    public: BasicArrayList search(std::string searchValue, AbFile file){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->directory.search(searchValue, file, true);;
    
}


    public: BasicArrayList search(int32_t level, AbFile file){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->directory.search(level, file, true);;
    
}


};

            

