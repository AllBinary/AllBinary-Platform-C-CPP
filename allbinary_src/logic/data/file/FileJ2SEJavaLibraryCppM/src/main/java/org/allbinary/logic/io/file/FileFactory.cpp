
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
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbFile.h"

class FileFactory
            : public Object
         {
        

    private: static const instance: FileFactory = new FileFactory();

    public static FileFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FileFactory.instance;
    
}


                //@Throws(Exception.constructor)
            
    public AbFile getInstance(string filePath){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbFile.createAbFileFromRawPath(filePath);;
    
}


                //@Throws(Exception.constructor)
            
    public AbFile getInstance(AbFile file, string childFilePath){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbFile.createAbFileWithChild(file, childFilePath);;
    
}


                //@Throws(Exception.constructor)
            
    public bool isFile(string path){

    file: AbFile = AbFile.createAbFile(path)!;;
    

                        if(file.exists())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


};

            

