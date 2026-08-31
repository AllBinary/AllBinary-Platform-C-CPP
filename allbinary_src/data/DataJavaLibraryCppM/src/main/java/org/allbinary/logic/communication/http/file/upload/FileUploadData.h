
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_FILEUPLOADDATA_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_FILEUPLOADDATA_H

            #include "../../../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class FileUploadData
            : public Object
         {
        

    private: static const instance: FileUploadData = new FileUploadData();

    public static FileUploadData getInstance();

    public const FILE: string = "download_file_permissions.xml";

    public const UPLOAD_TO_FILE_PATH: string = "FILE_UPLOAD_UPLOAD_TO_FILE_PATH";

    public const FILE_DATA: string = "FILE_UPLOAD_FILE_DATA";

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_FILEUPLOADDATA_H
