
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_CUSTOMIZER_WIDGETS_LOGO_LOGOIMAGEFILEUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_CUSTOMIZER_WIDGETS_LOGO_LOGOIMAGEFILEUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/transform/template/customizer/widgets/logo/LogoImageFileUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/ByteArrayInputStream.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/FileUtil.h>

      
#include <org/allbinary/logic/io/file/directory/Directory.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/apache/commons/fileupload/FileItem.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

LogoImageFileUtil::LogoImageFileUtil(AbPath* imageAbPath, std::string imageFile) : directory(Directory::getInstance()){
this->fileName= imageFile;
    
this->imageFileAbPath= imageAbPath;
    
}


                //@Throws(Exception.constructor)
            
    auto LogoImageFileUtil::saveFiles(FileItem* fileItem) -> void{

                        if(false)
                        
                                    {
                                    


                            throw Exception("Image File Name Was Null");
                    

                                    }
                                

                        if(!this->directory->create(this->imageFileAbPath))
                        
                                    {
                                    


                            throw Exception("Unable to save file to non creatable directory");
                    

                                    }
                                

    AbFile* originalImageFile = AbFile::createAbFile(JavaString::valueOf(this->imageFileAbPath) +this->fileName);;
    
originalImageFile->createNewFile();
    
FileUtil::getInstance()->write(new ByteArrayInputStream(fileItem->get()), originalImageFile);
    
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_CUSTOMIZER_WIDGETS_LOGO_LOGOIMAGEFILEUTIL_CPP
