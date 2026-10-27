
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_FILEFACTORY_CPP
        #define ORG_ALLBINARY_LOGIC_IO_FILE_FILEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/io/file/FileFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/io/file/AbFile.h"


FileFactory::FileFactory() {
        }
        auto FileFactory::instance_owner() -> FileFactory* { static std::unique_ptr<FileFactory> value(new FileFactory()); return value.get(); }
FileFactory* FileFactory::instance = FileFactory::instance_owner();

    auto FileFactory::getInstance() -> FileFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FileFactory::instance;
    
}


                //@Throws(Exception.constructor)
            
    auto FileFactory::getInstance(std::string filePath) -> AbFile*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbFile::createAbFileFromRawPath(filePath);;
    
}


                //@Throws(Exception.constructor)
            
    auto FileFactory::getInstance(AbFile* file, std::string childFilePath) -> AbFile*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbFile::createAbFileWithChild(file, childFilePath);;
    
}


                //@Throws(Exception.constructor)
            
    auto FileFactory::isFile(std::string path) -> bool{

    AbFile* file = AbFile::createAbFile(path);;
    

                        if(file->exists())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}




        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_FILEFACTORY_CPP
