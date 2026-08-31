
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <java/io/FileNotFoundException.h>

      
#include <android/content/Context.h>

      
#include <org/allbinary/data/resource/ResourceUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbFile.h"

class FileFactory
            : public Object
         {
        

    private: static const SINGLETON: FileFactory = new FileFactory(ResourceUtil.getInstance()!.getContext());

    public static FileFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FileFactory.SINGLETON;
    
}


    private: context: Context;

private constructor (Context context){

            super();
        this.context= context;
    
}


                //@Throws(Exception.constructor)
            
    public bool isFile(string path){

        try {
            this.context.openFileInput(path);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                //: 
} catch(e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


    public Context getContext(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.context;
    
}


                //@Throws(Exception.constructor)
            
    public AbFile getFile(string filePath){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbFile.createAbFileFromRawPath(filePath);;
    
}


                //@Throws(Exception.constructor)
            
    public AbFile getInstance(AbFile file, string childFilePath){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbFile.createAbFileWithChild(file, childFilePath);;
    
}


};

            

