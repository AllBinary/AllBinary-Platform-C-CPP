
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_ERROR_ERRORDATA_H
        #define ORG_ALLBINARY_BUSINESS_ERROR_ERRORDATA_H

            #include "../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ErrorData
            : public Object
         {
        

    private: static const instance: ErrorData = new ErrorData();

    public static ErrorData getInstance();

private constructor ();

    public const NAME: string = "ERROR_NAME";

    public const TEXT: string = "ERROR_TEXT";

};

            


        #endif //ORG_ALLBINARY_BUSINESS_ERROR_ERRORDATA_H
