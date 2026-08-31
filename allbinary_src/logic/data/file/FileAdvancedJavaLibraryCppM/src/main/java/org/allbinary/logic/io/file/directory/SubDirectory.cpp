
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
        



            #include "../../../../../../java/lang/Object.h"
        
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
        

    private: static const instance: SubDirectory = new SubDirectory();

    public static SubDirectory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SubDirectory.instance;
    
}


    public static string toString(BasicArrayList files){

    stringBuffer: StringMaker = new StringMaker();;
    

    NEW_LINE: string = CommonSeps.getInstance()!.NEW_LINE;;
    

    size: int32_t = files.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    file: AbFile = files.get(index) as AbFile;;
    
stringBuffer!.append(file.getPath());
    
stringBuffer!.append(NEW_LINE);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


    private: const directory: Directory = Directory.getInstance()!;

private constructor (){

            super();
        }


    public BasicArrayList search(FileFilter fileFilter, AbFile file){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.directory.search(fileFilter, file, true);;
    
}


    public BasicArrayList search(AbFile file){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.directory.search(file, true);;
    
}


    public BasicArrayList search(string searchValue, AbFile file){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.directory.search(searchValue, file, true);;
    
}


    public BasicArrayList search(int32_t level, AbFile file){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.directory.search(level, file, true);;
    
}


};

            

