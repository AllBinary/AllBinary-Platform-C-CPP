
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
        



#include <java/io/FileNotFoundException.h>

      
#include <java/io/FileOutputStream.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/AbFileNativeUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AbFileOutputStream: public FileOutputStream {

                //@Throws(FileNotFoundException.constructor)
            
    public: static AbFileOutputStream createFromAbFile(AbFile file){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbFileOutputStream(file.getPath(), false);
    
}


                //@Throws(FileNotFoundException.constructor)
            
    public: static AbFileOutputStream createFromAbFileAppend(AbFile file, bool append){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbFileOutputStream(file.getPath(), append);
    
}


                //@Throws(FileNotFoundException.constructor)
            
    public: static AbFileOutputStream createFromFilePath(std::string name){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbFileOutputStream(name, false);
    
}


                //@Throws(FileNotFoundException.constructor)
            
    public: static AbFileOutputStream createFromFilePathAppend(std::string name, bool append){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbFileOutputStream(name, append);
    
}


public: AbFileOutputStream(std::string name, bool append){
            super(name, append);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


};

            

