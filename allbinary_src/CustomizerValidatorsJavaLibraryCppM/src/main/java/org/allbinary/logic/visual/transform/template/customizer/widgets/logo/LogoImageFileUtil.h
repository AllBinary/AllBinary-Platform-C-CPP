
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_CUSTOMIZER_WIDGETS_LOGO_LOGOIMAGEFILEUTIL_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_CUSTOMIZER_WIDGETS_LOGO_LOGOIMAGEFILEUTIL_H

            #include "../../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../../java/lang/Exception.h"
        
#include <java/io/ByteArrayInputStream.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/FileUtil.h>

      
#include <org/allbinary/logic/io/file/directory/Directory.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/apache/commons/fileupload/FileItem.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LogoImageFileUtil
            : public Object
         {
        

    private: const directory: Directory = Directory.getInstance()!;

    private: const fileName: string;

    private: const imageFileAbPath: AbPath;

public constructor (AbPath imageAbPath, string imageFile);

                //@Throws(Exception.constructor)
            
    public saveFiles(FileItem fileItem);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_CUSTOMIZER_WIDGETS_LOGO_LOGOIMAGEFILEUTIL_H
