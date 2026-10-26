
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

      
#include <java/io/FileInputStream.h>

      
#include <java/io/FileNotFoundException.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/AbFileNativeUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AbFileInputStream: public FileInputStream {

public: AbFileInputStream(std::string name) : FileInputStream(name){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


public: AbFileInputStream(AbFile file) : FileInputStream(AbFileNativeUtil::get(file)){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


protected: AbFileInputStream(File file) : FileInputStream(file){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


};

            

