
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
        



#include <java/io/File.h>

      
#include <javax/swing/filechooser/FileFilter.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //TWB - replace with file visitor version
class ImageFileFilter: public FileFilter {
        

    public bool accept(File f){

                        if(f.isDirectory())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                

    s: string = f.getName()!;;
    

    i: int32_t = s.lastIndexOf('.')!;;
    

                        if(i > 0 && i < s.length -1)
                        
                                    {
                                    
    ext: string = s.substring(i +1)!.toLowerCase()!;;
    

                        if(ext === "jpg" || ext === "jpeg")
                        


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public string getDescription(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Accepts .jpg and .jpeg files";
    
}


};

            

