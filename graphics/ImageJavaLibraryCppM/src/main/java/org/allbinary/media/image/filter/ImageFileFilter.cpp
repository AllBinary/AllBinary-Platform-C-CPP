
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <java/io/File.h>

      
#include <javax/swing/filechooser/FileFilter.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //TWB - replace with file visitor version
class ImageFileFilter: public FileFilter {

    public: bool accept(File* f){

                        if(f->isDirectory())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                

    std::string s = f->getName();;
    

    int32_t i = JavaString::lastIndexOf(s, '.');;
    

                        if(i > 0 && i < s.size() -1)
                        
                                    {
                                    
    std::string ext = s.substring(i +1).toLowerCase();;
    

                        if(ext === "jpg" || ext === "jpeg")
                        


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: std::string getDescription(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Accepts .jpg and .jpeg files";
    
}


};

            

